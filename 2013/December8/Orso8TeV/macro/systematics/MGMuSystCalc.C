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
//names.push_back("PDF");
names.push_back("CompHep");
/*names.push_back("MC stat.");
//names.push_back("Anom. $\\twb$");
names.push_back("Anom. $V_R$");
names.push_back("Anom. $g_L$");
names.push_back("SM W-helicity Ref.");
*/
//// btagUp
F0Up.push_back(-0.0038959);	FlUp.push_back(0.00556482);	FrUp.push_back(-0.00166892);
//// ctagUp
F0Up.push_back(-1.15385e-07);	FlUp.push_back(-3.55087e-07);	FrUp.push_back(4.70472e-07);
//// JERUp
F0Up.push_back(0.0112631);	FlUp.push_back(-0.0114047);	FrUp.push_back(-0.0001416);
//// JESUp
F0Up.push_back(0.0133935);	FlUp.push_back(-0.00952498);	FrUp.push_back(-0.00386848);
//// lumiUp
F0Up.push_back(-0.00045192);	FlUp.push_back(0.00094653);	FrUp.push_back(-0.00049461);
//// massUp
F0Up.push_back(0.0009848);	FlUp.push_back(-0.00235303);	FrUp.push_back(0.00136823);
//// METUp
F0Up.push_back(0.006012);	FlUp.push_back(-0.00394848);	FrUp.push_back(-0.00206352);
//// puUp
F0Up.push_back(0.00334467);	FlUp.push_back(-0.00303128);	FrUp.push_back(-0.00031339);
//// Q2Up
F0Up.push_back(0.00520824);	FlUp.push_back(-0.0073946);	FrUp.push_back(0.00218637);
//// ttUp
F0Up.push_back(0.00254948);	FlUp.push_back(-0.00245547);	FrUp.push_back(-9.40035e-05);
//// tUp
F0Up.push_back(-0.00151945);	FlUp.push_back(0.00153455);	FrUp.push_back(-1.50963e-05);
//// ewkUp
F0Up.push_back(-0.00130424);	FlUp.push_back(0.00258523);	FrUp.push_back(-0.001281);
//// qcdUp
F0Up.push_back(-0.00870203);	FlUp.push_back(0.01951308);	FrUp.push_back(-0.01081105);
//// cwshapeUp
F0Up.push_back(-0.0030001);	FlUp.push_back(-3.55087e-07);	FrUp.push_back(0.00200047);
//// bwshapeUp
F0Up.push_back(0.003538615);	FlUp.push_back(0.00023493);	FrUp.push_back(-0.00377354);
//// PDFUp
//F0Up.push_back(0.00500346);	FlUp.push_back(0.00430703);	FrUp.push_back(0.000599068);
//// generatorUp
F0Up.push_back(-0.00516941);	FlUp.push_back(0.00427013);	FrUp.push_back(0.00089928);
//// MCstatUp
//F0Up.push_back(-0.009);	FlUp.push_back(0.003);	FrUp.push_back(0.004);
//// VR
//F0Up.push_back(0);	FlUp.push_back(0.051 * 0.308);	FrUp.push_back((0.015)*(-0.030));
//// gR
//F0Up.push_back(0);	FlUp.push_back(0);	FrUp.push_back((0.9981-1)*(-0.030));
//// FrefUp
//F0Up.push_back(0.717977-0.722384);	FlUp.push_back(0.312398-0.308293);	FrUp.push_back(-0.0303749999-(-0.0306769));
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;
//// btagDown
F0Down.push_back(0.00376533);	FlDown.push_back(-0.00537858);	FrDown.push_back(0.00161325);
//// ctagDown
F0Down.push_back(-1.15385e-07);	FlDown.push_back(-3.55087e-07);	FrDown.push_back(4.70472e-07);
//// JERDown
F0Down.push_back(0.00428105);	FlDown.push_back(-0.00128094);	FrDown.push_back(-0.00300012);
//// JESDown
F0Down.push_back(0.0035459);	FlDown.push_back(-0.00172564);	FrDown.push_back(-0.00182026);
//// lumiDown
F0Down.push_back(0.000446817);	FlDown.push_back(-0.000938709);	FrDown.push_back(0.000491892);
//// massDown
F0Down.push_back(-0.0010903);	FlDown.push_back(-0.000758249);	FrDown.push_back(0.00184855);
//// METDown
F0Down.push_back(-0.00466259);	FlDown.push_back(0.00780047);	FrDown.push_back(-0.00313788);
//// puDown
F0Down.push_back(-0.00303599);	FlDown.push_back(0.00285508);	FrDown.push_back(0.000180905);
//// Q2Down
F0Down.push_back(0.00613467);	FlDown.push_back(-0.00671137);	FrDown.push_back(0.0005767);
//// ttDown
F0Down.push_back(-0.00277631);	FlDown.push_back(0.00266839);	FrDown.push_back(0.000107915);
//// tDown
F0Down.push_back(0.00154684);	FlDown.push_back(-0.00156564);	FrDown.push_back(1.8791e-05);
//// ewkDown
F0Down.push_back(0.00128454);	FlDown.push_back(-0.00254755);	FrDown.push_back(0.00126301);
//// qcdDown
F0Down.push_back(0.008685678);	FlDown.push_back(-0.01841089);	FrDown.push_back(0.00972522);
//// cwshapeDown
F0Down.push_back(0.003333069);	FlDown.push_back(0.00146036);	FrDown.push_back(-0.00379342);
//// bwshapeDown
F0Down.push_back(0.00464679);	FlDown.push_back(-0.00168106);	FrDown.push_back(0.00296573);
//// PDFDown
//F0Down.push_back(0.00424893);	FlDown.push_back(0.00510569);	FrDown.push_back(0.000623818);
//// generatorDown
F0Down.push_back(-0.00516941);	FlDown.push_back(0.00427013);	FrDown.push_back(0.00089928);
//// MCstatDown
//F0Down.push_back(-0.009);	FlDown.push_back(0.003);	FrDown.push_back(0.004);
//// VR
//F0Down.push_back(0);	FlDown.push_back(0.051 * 0.308);	FrDown.push_back((0.015)*(-0.030));
//// gR
//F0Down.push_back(0);	FlDown.push_back(0);	FrDown.push_back((0.9981-1)*(-0.030));
//// FrefDown
//F0Down.push_back(0.717977-0.722384);	FlDown.push_back(0.312398-0.308293);	FrDown.push_back(-0.0303749999-(-0.0306769));
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
		std::cout<<"|"<<names[i]<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<"|"<<std::endl;
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
		std::cout<<"| Sum |\t"<<sqrt(df0)<<"|\t"<<sqrt(dfl)<<"|\t"<<sqrt(dfr)<<"|"<<std::endl;

}
