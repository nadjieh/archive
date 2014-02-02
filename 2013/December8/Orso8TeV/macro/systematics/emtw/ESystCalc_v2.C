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
names.push_back("CompHep");
names.push_back("MC stat.");
names.push_back("Anom. $V_R$");
names.push_back("Anom. $g_L$");

////btagUp
F0Up.push_back(-0.000584);	FlUp.push_back(0.001842);	FrUp.push_back(-0.001257);
////ctagUp
F0Up.push_back(-7.6e-05);	FlUp.push_back(0.000179);	FrUp.push_back(-0.0001095);
//// JERUp
F0Up.push_back(0.00412072);	FlUp.push_back(-0.00134943);	FrUp.push_back(-0.0027713);
//// JESUp
F0Up.push_back(0.0098983);	FlUp.push_back(-0.00515741);	FrUp.push_back(-0.00474089);
////lumiUp
F0Up.push_back(0.000555);	FlUp.push_back(0.001464);	FrUp.push_back(-0.0020182);
////massUp
F0Up.push_back(-0.000971);	FlUp.push_back(-0.000259);	FrUp.push_back(0.00123);
//// METUp
F0Up.push_back(0.00301132);	FlUp.push_back(7.5238e-05);	FrUp.push_back(-0.00308655);
////puUp
F0Up.push_back(0.000351);	FlUp.push_back(-0.001738);	FrUp.push_back(0.0013867);
////Q2Up
F0Up.push_back(-6e-06);	FlUp.push_back(-0.003927);	FrUp.push_back(0.0039335);
////ttUp
F0Up.push_back(0.000189);	FlUp.push_back(-0.000181);	FrUp.push_back(-7.1e-06);
//// ewkUp
F0Up.push_back(0.00214414);	FlUp.push_back(0.00520677);	FrUp.push_back(-0.00735091);
//// qcdUp
F0Up.push_back(0.0103047);	FlUp.push_back(-0.0284526);	FrUp.push_back(0.0181478);
//// cUp
F0Up.push_back(0.00913414);	FlUp.push_back(-0.00253414);	FrUp.push_back(-0.0066);
//// bUp
F0Up.push_back(0.00275071);	FlUp.push_back(0.000364558);	FrUp.push_back(-0.00311527);
//// genUp
F0Up.push_back(-0.00798109);	FlUp.push_back(0.00674394);	FrUp.push_back(0.00123715);
////MC stat
F0Up.push_back(-0.007);	FlUp.push_back(0.001);	FrUp.push_back(0.005);
////VR
F0Up.push_back(0);	FlUp.push_back(0.064*0.285783);	FrUp.push_back((0.9516-1)*(-0.0905856));
////gL
F0Up.push_back((0.8722-1)*0.804803);	FlUp.push_back(0.171*0.285783);	FrUp.push_back((0.9543-1)*(-0.0905856));


std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

////btagDown
F0Down.push_back(0.000423);	FlDown.push_back(-0.00146);	FrDown.push_back(0.0010377);
////ctagDown
F0Down.push_back(-7.6e-05);	FlDown.push_back(0.000186);	FrDown.push_back(-0.0001095);
//// JERDown
F0Down.push_back(0.00807462);	FlDown.push_back(-0.00185232);	FrDown.push_back(-0.0062223);
//// JESDown
F0Down.push_back(0.0015403);	FlDown.push_back(0.00213317);	FrDown.push_back(-0.00367347);
////lumiDown
F0Down.push_back(-0.000856);	FlDown.push_back(-0.001224);	FrDown.push_back(0.0020801);
////massDown
F0Down.push_back(0.003381);	FlDown.push_back(-0.004507);	FrDown.push_back(0.0011266);
//// METDown
F0Down.push_back(0.00320172);	FlDown.push_back(0.0023804);	FrDown.push_back(-0.00558213);
////puDown
F0Down.push_back(-0.00089);	FlDown.push_back(0.002289);	FrDown.push_back(-0.0013993);
////Q2Down
F0Down.push_back(0.010953);	FlDown.push_back(-0.009635);	FrDown.push_back(-0.0013178);
////ttDown
F0Down.push_back(-0.004872);	FlDown.push_back(0.004682);	FrDown.push_back(0.00019);
//// ewkDown
F0Down.push_back(-0.0020661);	FlDown.push_back(-0.00503283);	FrDown.push_back(0.00709893);
//// qcdDown
F0Down.push_back(-0.0354591);	FlDown.push_back(-0.0291065);	FrDown.push_back(0.0645656);
//// cDown
F0Down.push_back(0.00902237);	FlDown.push_back(-0.00624272);	FrDown.push_back(-0.00277965);
//// bDown
F0Down.push_back(-0.00285784);	FlDown.push_back(-0.00102796);	FrDown.push_back(0.0038858);
//// genDown
F0Down.push_back(-0.00798109);	FlDown.push_back(0.00674394);	FrDown.push_back(0.00123715);
////MC stat
F0Down.push_back(-0.007);	FlDown.push_back(0.001);	FrDown.push_back(0.005);
////VR
F0Down.push_back(0);	FlDown.push_back(0.064*0.285783);	FrDown.push_back((0.9516-1)*(-0.0905856));
////gL
F0Down.push_back((0.8722-1)*0.804803);	FlDown.push_back(0.171*0.285783);	FrDown.push_back((0.9543-1)*(-0.0905856));
cout<<F0Down.size()<<"\t"<<F0Up.size()<<"\t"<<names.size()<<endl;
std::cout.setf(std::ios::fixed);
std::cout.precision(3);
	std::vector<double> F0Sum;
	std::vector<double> FlSum;
	std::vector<double> FrSum;
	cout<<"|\t"<<"|\t\\Delta F_0|\t\\Delta F_L|\t\\Delta F_R"<<endl;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		double f0 = (fabs(F0Up[i])+fabs(F0Down[i]))/2.;
		double fl = (fabs(FlUp[i])+fabs(FlDown[i]))/2.;
		double fr = (fabs(FrUp[i])+fabs(FrDown[i]))/2.;
		if(names[i] == "m_{top}"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
		}
//		std::cout<<"|"<<names[i]<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<std::endl;
		std::cout<<names[i]<<"&\t"<<f0<<"&\t"<<fl<<"&\t"<<fr<<"\\\\"<<std::endl;
		cout<<"\\hline"<<endl;
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
//		std::cout<<"| Sum |\t"<<sqrt(df0)<<"|\t"<<sqrt(dfl)<<"|\t"<<sqrt(dfr)<<std::endl;
		std::cout<<" Sum &\t"<<sqrt(df0)<<"&\t"<<sqrt(dfl)<<"&\t"<<sqrt(dfr)<<std::endl;

}
