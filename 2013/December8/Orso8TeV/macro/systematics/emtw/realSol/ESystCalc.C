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
names.push_back("single-top norm.");
names.push_back("EWK norm.");
names.push_back("QCD norm.");
names.push_back("Wshape (c-flavor)");
names.push_back("Wshape (b-flavor)");

names.push_back("CompHep");

//// btagUp
F0Up.push_back(0.000343227);	FlUp.push_back(0.000923209);	FrUp.push_back(-0.00126644);
//// ctagUp
F0Up.push_back(4.70908e-06);	FlUp.push_back(-3.61651e-05);	FrUp.push_back(3.1456e-05);
//// JERUp
F0Up.push_back(-0.00426773);	FlUp.push_back(0.00184239);	FrUp.push_back(0.00242534);
//// JESUp
F0Up.push_back(-0.00486098);	FlUp.push_back(0.00268966);	FrUp.push_back(0.00217132);
//// lumiUp
F0Up.push_back(0.00126883);	FlUp.push_back(0.000565488);	FrUp.push_back(-0.00183432);
//// massUp
F0Up.push_back(0.005694);	FlUp.push_back(-0.0097706);	FrUp.push_back(0.004077);
//// METUp
F0Up.push_back(-0.000992762);	FlUp.push_back(0.00152781);	FrUp.push_back(-0.00053505);
//// puUp
F0Up.push_back(-0.00408415);	FlUp.push_back(0.00151359);	FrUp.push_back(0.00257056);
//// Q2Up
F0Up.push_back(0.000167997);	FlUp.push_back(-0.00039904);	FrUp.push_back(0.000231043);
//// ttUp
F0Up.push_back(0.000394901);	FlUp.push_back(-0.000459907);	FrUp.push_back(6.50061e-05);
//// tUp
F0Up.push_back(-0.00359791);	FlUp.push_back(0.0033479);	FrUp.push_back(0.000250009);
//// ewkUp
F0Up.push_back(-0.000976059);	FlUp.push_back(0.00812282);	FrUp.push_back(-0.00714676);
//// qcdUp
F0Up.push_back(-0.0135715);	FlUp.push_back(-0.0129344);	FrUp.push_back(0.0265059);
//// cwshapeUp
F0Up.push_back(0.0036896);	FlUp.push_back(0.001852);	FrUp.push_back(-0.0055416);
//// bwshapeUp
F0Up.push_back(-0.00165977);	FlUp.push_back(0.00436879);	FrUp.push_back(-0.00270902);
//// generatorUp
F0Up.push_back(-0.00423402);	FlUp.push_back(0.00162037);	FrUp.push_back(0.00261364);


std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(-0.000332297);	FlDown.push_back(-0.000990146);	FrDown.push_back(0.00132244);
//// ctagDown
F0Down.push_back(5.52701e-06);	FlDown.push_back(-3.69396e-05);	FrDown.push_back(3.14126e-05);
//// JERDown
F0Down.push_back(-0.000742545);	FlDown.push_back(0.00174185);	FrDown.push_back(-0.000999307);
//// JESDown
F0Down.push_back(-0.0082846);	FlDown.push_back(0.00509144);	FrDown.push_back(0.00319316);
//// lumiDown
F0Down.push_back(-0.0004315);	FlDown.push_back(-0.0016332);	FrDown.push_back(0.0020647);
//// massDown
F0Down.push_back(0.0117589);	FlDown.push_back(-0.0147645);	FrDown.push_back(0.0030056);
//// METDown
F0Down.push_back(0.00387025);	FlDown.push_back(0.000158983);	FrDown.push_back(-0.00402924);
//// puDown
F0Down.push_back(0.00359924);	FlDown.push_back(-0.00126828);	FrDown.push_back(-0.00233096);
//// Q2Down
F0Down.push_back(0.0116134);	FlDown.push_back(-0.007383);	FrDown.push_back(-0.00423039);
//// ttDown
F0Down.push_back(-0.00283872);	FlDown.push_back(0.00288498);	FrDown.push_back(-4.62573e-05);
//// tDown
F0Down.push_back(-0.00259471);	FlDown.push_back(0.00220981);	FrDown.push_back(0.000384893);
//// ewkDown
F0Down.push_back(-0.00513442);	FlDown.push_back(-0.00245612);	FrDown.push_back(0.00759054);
//// qcdDown
F0Down.push_back(-0.0076688);	FlDown.push_back(0.0128736);	FrDown.push_back(0.0052048);
//// cwshapeDown
F0Down.push_back(0.00737575);	FlDown.push_back(-0.00508745);	FrDown.push_back(-0.0022883);
//// bwshapeDown
F0Down.push_back(-0.00441234);	FlDown.push_back(0.00126859);	FrDown.push_back(0.00314375);
//// generatorDown
F0Down.push_back(-0.00423402);	FlDown.push_back(0.00162037);	FrDown.push_back(0.00261364);

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
		if(names[i] == "$\\rm m_{top}$"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
		}
		std::cout<<"|"<<names[i]<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<std::endl;
//		std::cout<<names[i]<<"&\t"<<f0<<"&\t"<<fl<<"&\t"<<fr<<"\\\\"<<std::endl;
//		cout<<"\\hline"<<endl;
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
		std::cout<<"| Sum |\t"<<sqrt(df0)<<"|\t"<<sqrt(dfl)<<"|\t"<<sqrt(dfr)<<std::endl;
//		std::cout<<" Sum &\t"<<sqrt(df0)<<"&\t"<<sqrt(dfl)<<"&\t"<<sqrt(dfr)<<std::endl;

}
