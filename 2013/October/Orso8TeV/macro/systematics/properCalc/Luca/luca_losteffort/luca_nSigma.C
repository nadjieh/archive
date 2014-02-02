/*{
double s = sqrt(pow(0.0462822,2)+pow(0.079313,2));
//double nTot = s/0.021;
double nTot = s/0.025;
double nStat = s/0.017;
cout<<"tot: "<<nTot<<",\tstat: "<<nStat<<endl;
}
*/
{
	double centF0 = -0.0484678; 
    double centFL = -0.0659442;

	//Stat part
	double f0mustat = 0.051;
//	double f0mustat = 0.0;
	double f0estat = 0.079;
	double flmustat =  0.033;
//	double flmustat =  0.0;
	double flestat = 0.046;
	double df0stat = sqrt(pow(f0mustat,2)+pow(f0estat,2));
	double dflstat = sqrt(pow(flmustat,2)+pow(flestat,2));
	double covStat = -0.911091*df0stat*dflstat;
	cout<< df0stat <<"\t"<<dflstat<<endl;
	double elementsStat[4] = {pow(df0stat,2),covStat,covStat,pow(dflstat,2)};
	TMatrixT<double> * pStat = new TMatrixT<double>(2,2);
	pStat->SetMatrixArray(elementsStat);	
	double det = pStat->Determinant();
    double sum = pow(dflstat,2)+pow(df0stat,2);
    double Delta = pow(sum,2) - 4*det;
	double root1 = (-sum + sqrt(Delta))/(-1*2);
	double root2 = (-sum - sqrt(Delta))/(-1*2);
	cout<<"Stat:"<<endl;
	cout<<"\tsum: "<<root1+root2<<"\t"<<sum<<endl;
	cout<<"\tdet: "<<root1*root2<<"\t"<<det<<endl;
	cout<<"\tsquared roots: "<<root1<<"\t"<<root2<<endl;
	cout<<"\troots: "<<sqrt(root1)<<"\t"<<sqrt(root2)<<endl;
	double thetaStat = 0.5*TMath::ATan((2*covStat)/(pow(df0stat,2)-pow(dflstat,2)));
	double max = fabs(root1);
	double min = fabs(root2);
	if(fabs(root1) < fabs(root2) ){
		min = fabs(root1);
		max = fabs(root2);
	}

    TEllipse * el = 0;
	bool isX = (df0stat > dflstat);
	if(isX)
    	el = new TEllipse(centF0, centFL, sqrt(max), sqrt(min), 0, 360, TMath::RadToDeg()*thetaStat);
	else
    	el = new TEllipse(centF0, centFL, sqrt(min), sqrt(max), 0, 360, TMath::RadToDeg()*thetaStat);

   TGraph *graph = new TGraph(4);
   graph->SetName("stat");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,-0.7,0.7);
   graph->SetPoint(1,0.7,-0.7);
   graph->SetPoint(2,0.7,0.7);
   graph->SetPoint(3,-0.7,-0.7);
   TCanvas c;
   c.cd();
   graph->Draw("ap");
   el->SetLineColor(kRed);
   el->Draw("lf");
   c.SaveAs("LStat.C");


	// Syst part

	double f0musyst = 0.037;
	double f0esyst = 0.052;
	double flmusyst =  0.04;
	double flesyst = 0.044;
	double df0syst = sqrt(pow(f0musyst,2)+pow(f0esyst,2) - 2*f0musyst*f0esyst);
	double dflsyst = sqrt(pow(flmusyst,2)+pow(flesyst,2) - 2*flmusyst*flesyst);
	double covSyst =0 ;

	double elementsSyst[4] = {pow(df0syst,2),covSyst,covSyst,pow(dflsyst,2)};
	TMatrixT<double> * pSyst = new TMatrixT<double>(2,2);
	pSyst->SetMatrixArray(elementsSyst);	
	det = pSyst->Determinant();
    sum = pow(dflsyst,2)+pow(df0syst,2);
    Delta = pow(sum,2) - 4*det;
	root1 = (-sum + sqrt(Delta))/(-1*2);
	root2 = (-sum - sqrt(Delta))/(-1*2);
	cout<<"Syst:"<<endl;
	cout<<"\tsum: "<<root1+root2<<"\t"<<sum<<endl;
	cout<<"\tdet: "<<root1*root2<<"\t"<<det<<endl;
	cout<<"\tsquared roots: "<<root1<<"\t"<<root2<<endl;
	cout<<"\troots: "<<sqrt(root1)<<"\t"<<sqrt(root2)<<endl;
	double thetaSyst = 0.5*TMath::ATan((2*covSyst)/(pow(df0syst,2)-pow(dflsyst,2)));
	cout<<"\tTheta: "<<thetaSyst<<endl;	
	max = fabs(root1);
	min = fabs(root2);
	if(fabs(root1) < fabs(root2) ){
		min = fabs(root1);
		max = fabs(root2);
	}

	isX = (df0syst > dflsyst);
	if(isX){
    	el = new TEllipse(centF0, centFL, sqrt(max), sqrt(min), 0, 360, TMath::RadToDeg()*thetaSyst);
		cout<<"\tEllipse first: "<<sqrt(max)<<",\tsecond: "<<sqrt(min)<<endl;
	}else{
    	el = new TEllipse(centF0, centFL, sqrt(min), sqrt(max), 0, 360, TMath::RadToDeg()*thetaSyst);
		cout<<"\tEllipse first: "<<sqrt(min)<<",\tsecond: "<<sqrt(max)<<endl;
	}

   graph = new TGraph(4);
   graph->SetName("syst");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,-0.7,0.7);
   graph->SetPoint(1,0.7,-0.7);
   graph->SetPoint(2,0.7,0.7);
   graph->SetPoint(3,-0.7,-0.7);
   TCanvas c;
   c.cd();
   graph->Draw("ap");
   el->SetLineColor(kBlue);
   el->Draw("p");
   c.SaveAs("LSyst.C");

	// Total part
	TMatrixT<double> * pTotal = new TMatrixT<double>(2,2);
	double f0musyst = 0.037;
	double f0esyst = 0.052;
	double flmusyst =  0.04;
	double flesyst = 0.044;
	double df0tot = sqrt(pow(df0syst,2)+pow(df0stat,2));
	double dfltot = sqrt(pow(dflsyst,2)+pow(dflstat,2));
	double covTot = covSyst + covStat;


	double elementsTotal[4] = {pow(df0tot,2),
							   covTot,
							   covTot,
							   pow(dfltot,2)};
	pTotal->SetMatrixArray(elementsTotal);	
	det = pTotal->Determinant();
    sum = pTotal->GetMatrixArray()[0] + pTotal->GetMatrixArray()[3];
    Delta = pow(sum,2) - 4*det;
	root1 = (-sum + sqrt(Delta))/(-1*2);
	root2 = (-sum - sqrt(Delta))/(-1*2);
	cout<<"Total:"<<endl;
	cout<<"\tsum: "<<root1+root2<<"\t"<<sum<<endl;
	cout<<"\tdet: "<<root1*root2<<"\t"<<det<<endl;
	cout<<"\tsquared roots: "<<root1<<"\t"<<root2<<endl;
	cout<<"\troots: "<<sqrt(root1)<<"\t"<<sqrt(root2)<<endl;
	double thetaTotal = 0.5*TMath::ATan((2*pTotal->GetMatrixArray()[2])/(pow(pTotal->GetMatrixArray()[0],2)-pow(pTotal->GetMatrixArray()[3],2)));
	cout<<"\tTheta: "<<thetaTotal<<endl;	
	max = fabs(root1);
	min = fabs(root2);
	if(fabs(root1) < fabs(root2) ){
		min = fabs(root1);
		max = fabs(root2);
	}

	isX = (pTotal->GetMatrixArray()[0] > pTotal->GetMatrixArray()[3]);
	if(isX){
    	el = new TEllipse(centF0, centFL, sqrt(max), sqrt(min), 0, 360, TMath::RadToDeg()*thetaTotal);
		cout<<"\tEllipse first: "<<sqrt(max)<<",\tsecond: "<<sqrt(min)<<endl;
	} else {
    	el = new TEllipse(centF0, centFL, sqrt(min), sqrt(max), 0, 360, TMath::RadToDeg()*thetaTotal);
		cout<<"\tEllipse first: "<<sqrt(min)<<",\tsecond: "<<sqrt(max)<<endl;
	}
   graph = new TGraph(4);
   graph->SetName("tot");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,-0.7,0.7);
   graph->SetPoint(1,0.7,-0.7);
   graph->SetPoint(2,0.7,0.7);
   graph->SetPoint(3,-0.7,-0.7);
   TCanvas c;
   c.cd();
   graph->Draw("ap");
   el->Draw("p");
   c.SaveAs("LTot.C");
}
