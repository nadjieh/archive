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
names.push_back("Anom. $\\twb;V_R$");
names.push_back("Anom. $\\twb;g_L$");
//// btagUp
F0Up.push_back(0.000411265);	FlUp.push_back(0.00293098);	FrUp.push_back(-0.00334225);
//// ctagUp
F0Up.push_back(0.00126922);	FlUp.push_back(0.00151957);	FrUp.push_back(-0.00278879);
//// JERUp
F0Up.push_back(0.00409068);	FlUp.push_back(-0.00191095);	FrUp.push_back(-0.00217974);
//// JESUp
F0Up.push_back(0.00906599);	FlUp.push_back(-0.00545267);	FrUp.push_back(-0.00361333);
//// lumiUp
F0Up.push_back(0.00116597);	FlUp.push_back(0.00255047);	FrUp.push_back(-0.00371644);
//// massUp
F0Up.push_back(0.00137065);	FlUp.push_back(-1.44706e-06);	FrUp.push_back(-0.0013692);
//// METUp
F0Up.push_back(0.000944745);	FlUp.push_back(0.00123816);	FrUp.push_back(-0.0021829);
//// puUp
F0Up.push_back(0.00263827);	FlUp.push_back(-1.9722e-05);	FrUp.push_back(-0.00261855);
//// Q2Up
F0Up.push_back(0.00590134);	FlUp.push_back(-0.00630016);	FrUp.push_back(0.000398819);
//// ttUp
F0Up.push_back(0.00450493);	FlUp.push_back(-0.00447931);	FrUp.push_back(-2.56148e-05);
//// ewkUp
F0Up.push_back(-9.36331e-05);	FlUp.push_back(0.00290893);	FrUp.push_back(-0.0028153);
//// qcdUp
F0Up.push_back(0.0071824);	FlUp.push_back(-0.0171111);	FrUp.push_back(0.00992869);
//// genUp
F0Up.push_back(-0.00504726);	FlUp.push_back(0.00679335);	FrUp.push_back(-0.00174609);
//// bUp
F0Up.push_back(-0.00518911);	FlUp.push_back(0.00212242);	FrUp.push_back(0.0030667);
//// cUp
F0Up.push_back(-0.0045919);	FlUp.push_back(0.00315814);	FrUp.push_back(0.00143376);
//// stat
F0Up.push_back(-0.00098);	FlUp.push_back(0.001003);	FrUp.push_back(0.002193);
//// VR
//F0Up.push_back(0);	FlUp.push_back(0.06312*0.298);	FrUp.push_back((0.964892-1)*-0.049);
F0Up.push_back(0);	FlUp.push_back(0.073*0.298);	FrUp.push_back((0.9825-1)*-0.049);
//// gL
//F0Up.push_back((0.9166-1)*0.750);	FlUp.push_back(0.124*0.298);	FrUp.push_back((0.9466-1)*-0.049);
F0Up.push_back((0.9331-1)*0.750);	FlUp.push_back(0.119*0.298);	FrUp.push_back((0.9739-1)*-0.049);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;
//// btagDown
F0Down.push_back(0.00211917);	FlDown.push_back(0.000114056);	FrDown.push_back(-0.00223322);
//// ctagDown
F0Down.push_back(0.00126922);	FlDown.push_back(0.00151957);	FrDown.push_back(-0.00278879);
//// JERDown
F0Down.push_back(0.00113535);	FlDown.push_back(0.00232066);	FrDown.push_back(-0.00345602);
//// JESDown
F0Down.push_back(-0.00264933);	FlDown.push_back(0.00551538);	FrDown.push_back(-0.00286606);
//// lumiDown
F0Down.push_back(0.00116597);	FlDown.push_back(0.00255047);	FrDown.push_back(-0.00371644);
//// massDown
F0Down.push_back(0.00195509);	FlDown.push_back(-0.000844743);	FrDown.push_back(-0.00111035);
//// METDown
F0Down.push_back(-0.00308609);	FlDown.push_back(0.00625448);	FrDown.push_back(-0.00316839);
//// puDown
F0Down.push_back(-6.59275e-05);	FlDown.push_back(0.00302675);	FrDown.push_back(-0.00296082);
//// Q2Down
F0Down.push_back(0.0110844);	FlDown.push_back(-0.00811181);	FrDown.push_back(-0.00297261);
//// ttDown
F0Down.push_back(-0.00474247);	FlDown.push_back(0.0046999);	FrDown.push_back(4.25719e-05);
//// ewkDown
F0Down.push_back(-4.43319e-06);	FlDown.push_back(-0.00283064);	FrDown.push_back(0.00283507);
//// qcdDown
F0Down.push_back(-0.0102023);	FlDown.push_back(-0.0211655);	FrDown.push_back(0.0313677);
//// genDown
F0Down.push_back(-0.00504726);	FlDown.push_back(0.00679335);	FrDown.push_back(-0.00174609);
//// bDown
F0Down.push_back(-0.00543702);	FlDown.push_back(-0.000929148);	FrDown.push_back(0.00636617);
//// cDown
F0Down.push_back(-0.00432396);	FlDown.push_back(0.00107818);	FrDown.push_back(0.00324578);
//// stat
F0Down.push_back(-0.00098);	FlDown.push_back(0.001003);	FrDown.push_back(0.002193);
////VR
//F0Down.push_back(0);	FlDown.push_back(0.06312*0.298);	FrDown.push_back((0.964892-1)*-0.049);
F0Down.push_back(0);	FlDown.push_back(0.073*0.298);	FrDown.push_back((0.9825-1)*-0.049);
//// gL
//F0Down.push_back((0.9166-1)*0.750);	FlDown.push_back(0.124*0.298);	FrDown.push_back((0.9466-1)*-0.049);
F0Down.push_back((0.9331-1)*0.750);	FlDown.push_back(0.119*0.298);	FrDown.push_back((0.9739-1)*-0.049);
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
