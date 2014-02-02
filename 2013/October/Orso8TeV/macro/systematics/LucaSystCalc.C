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

//// btagUp
F0Up.push_back(-0.00103133);	FlUp.push_back(0.0010587);	FrUp.push_back(-2.73665e-05);
//// ctagUp
F0Up.push_back(-4.00596e-09);	FlUp.push_back(1.73379e-10);	FrUp.push_back(3.83259e-09);
//// JERUp
F0Up.push_back(0.0031559);	FlUp.push_back(-0.00310699);	FrUp.push_back(-4.89073e-05);
//// JESUp
F0Up.push_back(0.00425594);	FlUp.push_back(-0.001271);	FrUp.push_back(-0.00298494);
//// lumiUp
F0Up.push_back(-0.000242891);	FlUp.push_back(0.000339589);	FrUp.push_back(-9.66986e-05);
//// massUp
F0Up.push_back(-0.005394);	FlUp.push_back(0.000859697);	FrUp.push_back(0.00453431);
//// METUp
F0Up.push_back(0.000891657);	FlUp.push_back(-0.00160535);	FrUp.push_back(0.000713695);
//// puUp
F0Up.push_back(0.00242739);	FlUp.push_back(-0.00152172);	FrUp.push_back(-0.000905669);
//// Q2Up
F0Up.push_back(0.000740401);	FlUp.push_back(-0.0101819);	FrUp.push_back(0.00944152);
//// ttUp
F0Up.push_back(0.00115353);	FlUp.push_back(-0.00151454);	FrUp.push_back(0.000361009);
//// ewkUp
F0Up.push_back(-0.000402308);	FlUp.push_back(0.00142801);	FrUp.push_back(-0.00102571);
//// qcdUp
F0Up.push_back(0.000896049);	FlUp.push_back(-0.00184224);	FrUp.push_back(0.000946192);
//// bUp
F0Up.push_back(0.00505538);	FlUp.push_back(0.00122343);	FrUp.push_back(-0.00627882);
//// cUp
F0Up.push_back(0.00742883);	FlUp.push_back(0.00454185);	FrUp.push_back(-0.0119707);
//// genUp
F0Up.push_back(-0.0118723);	FlUp.push_back(0.00768468);	FrUp.push_back(0.00418765);
//// MCstatUp
F0Up.push_back(0.038);	FlUp.push_back(-0.016);	FrUp.push_back(-0.018);
//// twbUp
//F0Up.push_back(0.032);	FlUp.push_back( 0.038);	FrUp.push_back( 0.002);
//// VR
F0Up.push_back(0);	FlUp.push_back( 0.054*0.283);	FrUp.push_back( 0.068 * (0.9716-1));
//// gR
F0Up.push_back((0.9419-1)*0.649);	FlUp.push_back( 0.095*0.283);	FrUp.push_back( 0.068*(0.9715-1));

std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00103048);	FlDown.push_back(-0.00105643);	FrDown.push_back(2.59451e-05);
//// ctagDown
F0Down.push_back(-4.00596e-09);	FlDown.push_back(1.73379e-10);	FrDown.push_back(3.83259e-09);
//// JERDown
F0Down.push_back(-0.000937665);	FlDown.push_back(-0.00117433);	FrDown.push_back(0.002112);
//// JESDown
F0Down.push_back(-0.000349854);	FlDown.push_back(-0.000573874);	FrDown.push_back(0.000923728);
//// lumiDown
F0Down.push_back(-0.000242891);	FlDown.push_back(0.000339589);	FrDown.push_back(-9.66986e-05);
//// massDown
F0Down.push_back(0.011889);	FlDown.push_back(-0.014752);	FrDown.push_back(0.00286295);
//// METDown
F0Down.push_back(0.00292554);	FlDown.push_back(-0.00363538);	FrDown.push_back(0.000709836);
//// puDown
F0Down.push_back(-0.00264076);	FlDown.push_back(0.00148561);	FrDown.push_back(0.00115515);
//// Q2Down
F0Down.push_back(0.00514877);	FlDown.push_back(-0.006226);	FrDown.push_back(0.00107723);
//// ttDown
F0Down.push_back(-0.00127478);	FlDown.push_back(0.00164389);	FrDown.push_back(-0.000369102);
//// ewkDown
F0Down.push_back(0.000396555);	FlDown.push_back(-0.00140597);	FrDown.push_back(0.00100942);
//// qcdDown
F0Down.push_back(-0.00215099);	FlDown.push_back(-0.0101771);	FrDown.push_back(0.0123281);
//// bDown
F0Down.push_back(0.00327544);	FlDown.push_back(-0.00578444);	FrDown.push_back(0.002509);
//// cDown
F0Down.push_back(0.00766111);	FlDown.push_back(0.000926693);	FrDown.push_back(-0.0085878);
//// genDown
F0Down.push_back(-0.0118723);	FlDown.push_back(0.00768468);	FrDown.push_back(0.00418765);
//// MCstatDown
F0Down.push_back(0.038);	FlDown.push_back(-0.016);	FrDown.push_back(-0.018);
//// twbDown
//F0Down.push_back(0.032);	FlDown.push_back( 0.038);	FrDown.push_back( 0.002);
//// VR
F0Down.push_back(0);	FlDown.push_back( 0.054*0.283);	FrDown.push_back( 0.068 * (0.9716-1));
//// gR
F0Down.push_back((0.9419-1)*0.649);	FlDown.push_back( 0.095*0.283);	FrDown.push_back( 0.068*(0.9715-1));
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
		std::cout<<"|"<<names[i]<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<std::endl;
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

}
