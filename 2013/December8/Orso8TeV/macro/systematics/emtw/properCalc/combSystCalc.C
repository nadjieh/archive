{
std::vector<double> F0Up;
std::vector<double> FlUp;
std::vector<double> FrUp;
std::vector<std::string> names;
names.push_back("b-tag");
names.push_back("mis-tag");
names.push_back("JER");
names.push_back("JES");
names.push_back("luminosity");
names.push_back("$\\rm m_{top}$");
names.push_back("Unclust. Energy");
names.push_back("pile up");
names.push_back("$\\rm Q^{2}$ scale");
names.push_back("$t\\bar{t}$ norm.");
names.push_back("EWK norm.");
names.push_back("QCD norm.");
names.push_back("Wshape (c-flavor)");
names.push_back("Wshape (b-flavor)");
names.push_back("PDF");
names.push_back("CompHep");
names.push_back("MC stat.");
names.push_back("Anom. $\\twb;V_R$");
names.push_back("Anom. $\\twb;g_L$");
names.push_back("SM W-helicity Ref.");
//// btagUp
F0Up.push_back(-0.000835038);	FlUp.push_back(0.00140209);	FrUp.push_back(-0.000567051);
//// ctagUp
F0Up.push_back(3.12849e-07);	FlUp.push_back(8.96391e-08);	FrUp.push_back(-4.02488e-07);
//// JERUp
F0Up.push_back(0.0037013);	FlUp.push_back(-0.00170775);	FrUp.push_back(-0.00199355);
//// JESUp
F0Up.push_back(0.00860444);	FlUp.push_back(-0.00523275);	FrUp.push_back(-0.0033717);
//// lumiUp
F0Up.push_back(-7.73512e-05);	FlUp.push_back(0.00102223);	FrUp.push_back(-0.000944876);
//// massUp
F0Up.push_back(-0.000116575);	FlUp.push_back(-0.0014883);	FrUp.push_back(0.00160488);
//// METUp
F0Up.push_back(0.000518221);	FlUp.push_back(0.00145955);	FrUp.push_back(-0.00197778);
//// puUp
F0Up.push_back(0.00127811);	FlUp.push_back(-0.00150767);	FrUp.push_back(0.000229559);
//// Q2Up
F0Up.push_back(0.00441699);	FlUp.push_back(-0.0078125);	FrUp.push_back(0.00339551);
//// ttUp
F0Up.push_back(0.00157686);	FlUp.push_back(-0.00156597);	FrUp.push_back(-1.0892e-05);
//// ewkUp
F0Up.push_back(9.82464e-05);	FlUp.push_back(0.00284248);	FrUp.push_back(-0.00294073);
//// qcdUp
F0Up.push_back(0.00668995);	FlUp.push_back(-0.0167279);	FrUp.push_back(0.0100379);
//// cUp
F0Up.push_back(0.00108492);	FlUp.push_back(0.00484052);	FrUp.push_back(-0.00592544);
//// bUp
F0Up.push_back(0.00085925);	FlUp.push_back(0.00352862);	FrUp.push_back(-0.00438787);
////PDFUp
F0Up.push_back(0.00524392);	FlUp.push_back(0.00442201);	FrUp.push_back(0.000926691);
//// genUp
F0Up.push_back(-0.00480378);	FlUp.push_back(0.00671476);	FrUp.push_back(-0.00191098);
////MC stat
F0Up.push_back(-0.003);	FlUp.push_back(0.001);	FrUp.push_back(0.002);
////VR 
F0Up.push_back(0);	FlUp.push_back(0.065*0.312592);	FrUp.push_back((0.9796-1)*(-0.0181092));
////gL 
F0Up.push_back(0);	FlUp.push_back(0);	FrUp.push_back(-0.0181092*(0.9763-1));
//// FrefUp
F0Up.push_back(0.693713-0.705517);	FlUp.push_back(0.31917-0.312592);	FrUp.push_back(-0.012883+0.0181092);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;
//// btagDown
F0Down.push_back(0.000827548);	FlDown.push_back(-0.00139601);	FrDown.push_back(0.000568465);
//// ctagDown
F0Down.push_back(3.12849e-07);	FlDown.push_back(8.96391e-08);	FrDown.push_back(-4.02488e-07);
//// JERDown
F0Down.push_back(0.000825769);	FlDown.push_back(0.00253126);	FrDown.push_back(-0.00335703);
//// JESDown
F0Down.push_back(-0.00289744);	FlDown.push_back(0.00569597);	FrDown.push_back(-0.00279853);
//// lumiDown
F0Down.push_back(1.98252e-05);	FlDown.push_back(-0.00103569);	FrDown.push_back(0.00101586);
//// massDown
F0Down.push_back(0.000504595);	FlDown.push_back(-0.00232002);	FrDown.push_back(0.00181542);
//// METDown
F0Down.push_back(-0.00335758);	FlDown.push_back(0.00644068);	FrDown.push_back(-0.0030831);
//// puDown
F0Down.push_back(-0.00124402);	FlDown.push_back(0.00147437);	FrDown.push_back(-0.000230351);
//// Q2Down
F0Down.push_back(0.00963336);	FlDown.push_back(-0.00958922);	FrDown.push_back(-4.41374e-05);
//// ttDown
F0Down.push_back(-0.00346887);	FlDown.push_back(0.00335497);	FrDown.push_back(0.000113895);
//// ewkDown
F0Down.push_back(-0.000196175);	FlDown.push_back(-0.00276273);	FrDown.push_back(0.00295891);
//// qcdDown
F0Down.push_back(-0.0119597);	FlDown.push_back(-0.0206248);	FrDown.push_back(0.0325845);
//// cDown
F0Down.push_back(0.00154693);	FlDown.push_back(0.00267785);	FrDown.push_back(-0.00422478);
//// bDown
F0Down.push_back(0.00113937);	FlDown.push_back(0.000153817);	FrDown.push_back(-0.00129319);
////PDFDown
F0Down.push_back(0.00443718);	FlDown.push_back(0.00532276);	FrDown.push_back(0.000918011);
//// genDown
F0Down.push_back(-0.00480378);	FlDown.push_back(0.00671476);	FrDown.push_back(-0.00191098);
////MC stat
F0Down.push_back(-0.003);	FlDown.push_back(0.001);	FrDown.push_back(0.002);
////VR 
F0Down.push_back(0);	FlDown.push_back(0.065*0.312592);	FrDown.push_back((0.9796-1)*(-0.0181092));
////gL 
F0Down.push_back(0);	FlDown.push_back(0);	FrDown.push_back(-0.0181092*(0.9763-1));
//// FrefDown
F0Down.push_back(0.693713-0.705517);	FlDown.push_back(0.31917-0.312592);	FrDown.push_back(-0.012883+0.0181092);
std::cout.setf(std::ios::fixed);
std::cout.precision(3);
	std::vector<double> F0Sum;
	std::vector<double> FlSum;
	std::vector<double> FrSum;
	//cout<<"|\t"<<"|\t\\Delta F_0|\t\\Delta F_L|\t\\Delta F_R"<<endl;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		double f0 = (fabs(F0Up[i])+fabs(F0Down[i]))/2.;
		double fl = (fabs(FlUp[i])+fabs(FlDown[i]))/2.;
		double fr = (fabs(FrUp[i])+fabs(FrDown[i]))/2.;
		if(names[i] == "m_{top}"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
		}
		std::cout<<names[i]<<"&\t"<<f0<<"&\t"<<fl<<"&\t"<<fr<<"\\\\ \n \\hline"<<std::endl;
		F0Sum.push_back(f0);
		FlSum.push_back(fl);
		FrSum.push_back(fr);
	}
	double df0 = 0;
	double dfl = 0;
	double dfr = 0;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		df0 += pow(F0Sum[i],2);
		dfl += pow(FlSum[i],2);
		dfr += pow(FrSum[i],2);
	}
	std::cout<<" Sum &\t"<<sqrt(df0)<<"&\t"<<sqrt(dfl)<<"&\t"<<sqrt(dfr)<<"\\\\"<<std::endl;
	cout<<"\n For the log book: \n"<<endl;
	cout<<"|\t"<<"|\t\\Delta F_0|\t\\Delta F_L|\t\\Delta F_R|"<<endl;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		double f0 = (fabs(F0Up[i])+fabs(F0Down[i]))/2.;
		double fl = (fabs(FlUp[i])+fabs(FlDown[i]))/2.;
		double fr = (fabs(FrUp[i])+fabs(FrDown[i]))/2.;
		if(names[i] == "m_{top}"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
		}
		std::cout<<"|"<<names[i]<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<"|"<<std::endl;

	}
	std::cout<<"| Sum |\t"<<sqrt(df0)<<"|\t"<<sqrt(dfl)<<"|\t"<<sqrt(dfr)<<"|"<<std::endl;
}
