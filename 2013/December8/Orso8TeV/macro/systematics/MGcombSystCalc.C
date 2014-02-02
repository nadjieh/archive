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
names.push_back("PDF");
names.push_back("CompHep");
names.push_back("MC stat.");
names.push_back("Anom. $\\twb ;V_R$");
names.push_back("Anom. $\\twb ;g_L$");
names.push_back("SM W-helicity Ref.");

//// btagUp
F0Up.push_back(-0.000906285);	FlUp.push_back(0.00115505);	FrUp.push_back(-0.000248763);
//// ctagUp
F0Up.push_back(4.65772e-07);	FlUp.push_back(2.74494e-07);	FrUp.push_back(-7.40267e-07);
//// JERUp
F0Up.push_back(0.00570169);	FlUp.push_back(-0.00505572);	FrUp.push_back(-0.000645972);
//// JESUp
F0Up.push_back(0.00809824);	FlUp.push_back(-0.0061981);	FrUp.push_back(-0.00190014);
//// lumiUp
F0Up.push_back(-0.000195564);	FlUp.push_back(0.000624212);	FrUp.push_back(-0.000428649);
//// massUp
F0Up.push_back(-0.00131258);	FlUp.push_back(-0.000933318);	FrUp.push_back(0.0022459);
//// METUp
F0Up.push_back(0.00539299);	FlUp.push_back(-0.00497954);	FrUp.push_back(-0.00041345);
//// puUp
F0Up.push_back(0.00189169);	FlUp.push_back(-0.00133374);	FrUp.push_back(-0.000557947);
//// Q2Up
F0Up.push_back(0.00701692);	FlUp.push_back(-0.0104431);	FrUp.push_back(0.00342621);
//// ttUp
F0Up.push_back(0.00199816);	FlUp.push_back(-0.00202841);	FrUp.push_back(3.02477e-05);
//// tUp
F0Up.push_back(-0.00120973);	FlUp.push_back(0.00127052);	FrUp.push_back(-6.07956e-05);
//// ewkUp
F0Up.push_back(-0.000716727);	FlUp.push_back(0.00197383);	FrUp.push_back(-0.00125711);
//// qcdUp
F0Up.push_back(0.00320467);	FlUp.push_back(-0.00890197);	FrUp.push_back(0.00569731);
//// cUp
F0Up.push_back(0.000190122);	FlUp.push_back(0.00416153);	FrUp.push_back(-0.00435165);
//// bUp
F0Up.push_back(0.000995894);	FlUp.push_back(0.0014663);	FrUp.push_back(-0.0024622);
//// PDFUp
F0Up.push_back(0.00511872);	FlUp.push_back(0.00417113);	FrUp.push_back(0.000560882);
//// genUp
F0Up.push_back(-0.00707438);	FlUp.push_back(0.00554443);	FrUp.push_back(0.00152995);
//// MCStatsDown
F0Up.push_back(0.036);	FlUp.push_back( 0.026);	FrUp.push_back( 0.015);
//// twbUp
//F0Up.push_back(0.023);	FlUp.push_back( 0.035);	FrUp.push_back( 0.000);
//// VR
F0Up.push_back(0);	FlUp.push_back( 0.063*0.292326);	FrUp.push_back( (0.9819-1)*(1-0.292326-0.716711));
//// gL
F0Up.push_back(0);	FlUp.push_back( 0);	FrUp.push_back( (0.982-1)*(1-0.292326-0.716711));
//// FrefUp
F0Up.push_back(0.717711-0.716711);	FlUp.push_back(0.290326-0.292326);	FrUp.push_back((1-0.290326-0.717711)-(1-0.292326-0.716711));

std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;
//// btagDown
F0Down.push_back(0.000902911);	FlDown.push_back(-0.00115192);	FrDown.push_back(0.000249006);
//// ctagDown
F0Down.push_back(4.65772e-07);	FlDown.push_back(2.74494e-07);	FrDown.push_back(-7.40267e-07);
//// JERDown
F0Down.push_back(0.000461918);	FlDown.push_back(4.63049e-05);	FrDown.push_back(-0.000508223);
//// JESDown
F0Down.push_back(-0.000484808);	FlDown.push_back(0.00177184);	FrDown.push_back(-0.00128703);
//// lumiDown
F0Down.push_back(-0.000195564);	FlDown.push_back(0.000624212);	FrDown.push_back(-0.000428649);
//// massDown
F0Down.push_back(0.00524202);	FlDown.push_back(-0.00677273);	FrDown.push_back(0.00153071);
//// METDown
F0Down.push_back(-0.003199554);	FlDown.push_back(0.00415189);	FrDown.push_back(-0.000952336);
//// puDown
F0Down.push_back(-0.00171766);	FlDown.push_back(0.00121244);	FrDown.push_back(0.00050522);
//// Q2Down
F0Down.push_back(0.00713462);	FlDown.push_back(-0.00808647);	FrDown.push_back(0.000951856);
//// ttDown
F0Down.push_back(-0.00217691);	FlDown.push_back(0.0022017);	FrDown.push_back(-2.47812e-05);
//// tDown
F0Down.push_back(0.0012298);	FlDown.push_back(-0.00129416);	FrDown.push_back(6.43557e-05);
//// ewkDown
F0Down.push_back(0.000707514);	FlDown.push_back(-0.00194509);	FrDown.push_back(0.00123758);
//// qcdDown
F0Down.push_back(0.00318269);	FlDown.push_back(-0.0169829);	FrDown.push_back(0.0138003);
//// cDown
F0Down.push_back(0.00132426);	FlDown.push_back(0.00166764);	FrDown.push_back(-0.0029919);
//// bDown
F0Down.push_back(0.00293066);	FlDown.push_back(-0.00362776);	FrDown.push_back(0.0006971);
//// PDFDown
F0Down.push_back(0.00421163);	FlDown.push_back(0.00505422);	FrDown.push_back(0.000562299);
//// genDown
F0Down.push_back(-0.00707438);	FlDown.push_back(0.00554443);	FrDown.push_back(0.00152995);
//// MCStatsDown
F0Down.push_back(0.036);	FlDown.push_back( 0.026);	FrDown.push_back( 0.015);
//// VR
F0Down.push_back(0);	FlDown.push_back( 0.063*0.292326);	FrDown.push_back( (0.9819-1)*(1-0.292326-0.716711));
//// gL
F0Down.push_back(0);	FlDown.push_back( 0);	FrDown.push_back( (0.982-1)*(1-0.292326-0.716711));
//// FrefDown
F0Down.push_back(0.717711-0.716711);	FlDown.push_back(0.290326-0.292326);	FrDown.push_back((1-0.290326-0.717711)-(1-0.292326-0.716711));

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
