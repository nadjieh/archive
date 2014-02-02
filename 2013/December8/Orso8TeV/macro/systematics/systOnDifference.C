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
names.push_back("Anom. $\\twb$");
//// btagUp
F0Up.push_back(-0.00103098);	FlUp.push_back(0.00105894);	FrUp.push_back(-2.79561e-05);
//// ctagUp
F0Up.push_back(4.12963e-07);	FlUp.push_back(1.97095e-07);	FrUp.push_back(-6.10058e-07);
//// JERUp
F0Up.push_back(0.00315683);	FlUp.push_back(-0.00310761);	FrUp.push_back(-4.92151e-05);
//// JESUp
F0Up.push_back(0.00425635);	FlUp.push_back(-0.00127082);	FrUp.push_back(-0.00298553);
//// lumiUp
F0Up.push_back(-0.00024205);	FlUp.push_back(0.000339772);	FrUp.push_back(-9.77214e-05);
//// massUp
F0Up.push_back(-0.00539379);	FlUp.push_back(0.000859728);	FrUp.push_back(0.00453406);
//// METUp
F0Up.push_back(0.000891425);	FlUp.push_back(-0.00160556);	FrUp.push_back(0.000714139);
//// puUp
F0Up.push_back(0.0024278);	FlUp.push_back(-0.00152153);	FrUp.push_back(-0.000906269);
//// Q2Up
F0Up.push_back(0.00074099);	FlUp.push_back(-0.0101813);	FrUp.push_back(0.00944033);
//// ttUp
F0Up.push_back(0.00115374);	FlUp.push_back(-0.00151448);	FrUp.push_back(0.000360745);
//// ewkUp
F0Up.push_back(-0.000402193);	FlUp.push_back(0.00142753);	FrUp.push_back(-0.00102534);
//// qcdUp
F0Up.push_back(0.000895017);	FlUp.push_back(-0.00184138);	FrUp.push_back(0.000946363);
//// bUp
F0Up.push_back(0.00505638);	FlUp.push_back(0.00122341);	FrUp.push_back(-0.00627978);
//// cUp
F0Up.push_back(0.00742951);	FlUp.push_back(0.00454152);	FrUp.push_back(-0.011971);
//// genUp
F0Up.push_back(-0.0118718);	FlUp.push_back(0.00768509);	FrUp.push_back(0.00418666);
//// MCstatUp
F0Up.push_back(0.038);	FlUp.push_back(-0.016);	FrUp.push_back(-0.018);
//// twbUp
F0Up.push_back(0.032);	FlUp.push_back( 0.038);	FrUp.push_back( 0.002);

std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00103107);	FlDown.push_back(-0.0010563);	FrDown.push_back(2.52257e-05);
//// ctagDown
F0Down.push_back(4.12963e-07);	FlDown.push_back(1.97095e-07);	FrDown.push_back(-6.10058e-07);
//// JERDown
F0Down.push_back(-0.000937254);	FlDown.push_back(-0.0011742);	FrDown.push_back(0.00211145);
//// JESDown
F0Down.push_back(-0.000350051);	FlDown.push_back(-0.000574051);	FrDown.push_back(0.000924102);
//// lumiDown
F0Down.push_back(-0.00024205);	FlDown.push_back(0.000339772);	FrDown.push_back(-9.77214e-05);
//// massDown
F0Down.push_back(0.0118883);	FlDown.push_back(-0.0147516);	FrDown.push_back(0.00286326);
//// METDown
F0Down.push_back(0.00292592);	FlDown.push_back(-0.00363516);	FrDown.push_back(0.000709237);
//// puDown
F0Down.push_back(-0.00264034);	FlDown.push_back(0.00148581);	FrDown.push_back(0.00115453);
//// Q2Down
F0Down.push_back(0.00514913);	FlDown.push_back(-0.00622579);	FrDown.push_back(0.00107666);
//// ttDown
F0Down.push_back(-0.0012744);	FlDown.push_back(0.00164407);	FrDown.push_back(-0.000369669);
//// ewkDown
F0Down.push_back(0.00039696);	FlDown.push_back(-0.00140575);	FrDown.push_back(0.00100879);
//// qcdDown
F0Down.push_back(-0.00215163);	FlDown.push_back(-0.0101765);	FrDown.push_back(0.0123281);
//// bDown
F0Down.push_back(0.00327584);	FlDown.push_back(-0.00578426);	FrDown.push_back(0.00250842);
//// cDown
F0Down.push_back(0.00766158);	FlDown.push_back(0.000925594);	FrDown.push_back(-0.00858717);
//// genDown
F0Down.push_back(-0.0118718);	FlDown.push_back(0.00768509);	FrDown.push_back(0.00418666);
//// MCstatDown
F0Down.push_back(0.038);	FlDown.push_back(-0.016);	FrDown.push_back(-0.018);
//// twbDown
F0Down.push_back(0.032);	FlDown.push_back( 0.038);	FrDown.push_back( 0.002);
std::vector<double> F0UpM;
std::vector<double> FlUpM;
std::vector<double> FrUpM;
//// btagUpM
F0UpM.push_back(-0.000936541);	FlUpM.push_back(0.001227);	FrUpM.push_back(-0.00029046);
//// ctagUpM
F0UpM.push_back(3.09549e-07);	FlUpM.push_back(4.382e-07);	FrUpM.push_back(-7.47749e-07);
//// JERUpM
F0UpM.push_back(0.0073393);	FlUpM.push_back(-0.00626773);	FrUpM.push_back(-0.00107157);
//// JESUpM
F0UpM.push_back(0.0118717);	FlUpM.push_back(-0.00967017);	FrUpM.push_back(-0.00220156);
//// lumiUpM
F0UpM.push_back(-0.000344652);	FlUpM.push_back(0.000833046);	FrUpM.push_back(-0.000488394);
//// massUpM
F0UpM.push_back(0.000629999);	FlUpM.push_back(-0.00221185);	FrUpM.push_back(0.00158185);
//// METUpM
F0UpM.push_back(0.00278747);	FlUpM.push_back(-0.00198019);	FrUpM.push_back(-0.000807284);
//// puUpM
F0UpM.push_back(0.00172798);	FlUpM.push_back(-0.00123227);	FrUpM.push_back(-0.000495704);
//// Q2UpM
F0UpM.push_back(0.0079913);	FlUpM.push_back(-0.0103792);	FrUpM.push_back(0.00238789);
//// ttUpM
F0UpM.push_back(0.00246484);	FlUpM.push_back(-0.00239301);	FrUpM.push_back(-7.18353e-05);
//// ewkUpM
F0UpM.push_back(-0.00110376);	FlUpM.push_back(0.00237376);	FrUpM.push_back(-0.00127);
//// qcdUpM
F0UpM.push_back(0.0074836);	FlUpM.push_back(-0.0141536);	FrUpM.push_back(0.00666999);
//// bUpM
F0UpM.push_back(0.00126557);	FlUpM.push_back(0.0179513);	FrUpM.push_back(-0.0192169);
//// cUpM
F0UpM.push_back(8.73389e-05);	FlUpM.push_back(0.0200983);	FrUpM.push_back(-0.0201857);
//// genUpM
F0UpM.push_back(-0.00370649);	FlUpM.push_back(0.0205806);	FrUpM.push_back(-0.0168741);
//// MCstatUpM
F0UpM.push_back(-0.009);	FlUpM.push_back(0.003);	FrUpM.push_back(0.004);
//// twbUpM
F0UpM.push_back(0.032);	FlUpM.push_back(0.008);	FrUpM.push_back(0.001);

std::vector<double> F0DownM;
std::vector<double> FlDownM;
std::vector<double> FrDownM;

//// btagDownM
F0DownM.push_back(0.000933218);	FlDownM.push_back(-0.00122255);	FrDownM.push_back(0.000289337);
//// ctagDownM
F0DownM.push_back(3.09549e-07);	FlDownM.push_back(4.382e-07);	FrDownM.push_back(-7.47749e-07);
//// JERDownM
F0DownM.push_back(7.83235e-06);	FlDownM.push_back(0.00114068);	FrDownM.push_back(-0.00114851);
//// JESDownM
F0DownM.push_back(-0.0022121);	FlDownM.push_back(0.00377495);	FrDownM.push_back(-0.00156285);
//// lumiDownM
F0DownM.push_back(-0.000344652);	FlDownM.push_back(0.000833046);	FrDownM.push_back(-0.000488394);
//// massDownM
F0DownM.push_back(-0.00118821);	FlDownM.push_back(-0.000782897);	FrDownM.push_back(0.00197111);
//// METDownM
F0DownM.push_back(-0.00390809);	FlDownM.push_back(0.00488204);	FrDownM.push_back(-0.000973956);
//// puDownM
F0DownM.push_back(-0.00142796);	FlDownM.push_back(0.00105756);	FrDownM.push_back(0.000370396);
//// Q2DownM
F0DownM.push_back(0.00867106);	FlDownM.push_back(-0.00942553);	FrDownM.push_back(0.000754471);
//// ttDownM
F0DownM.push_back(-0.000361522);	FlDownM.push_back(0.000350857);	FrDownM.push_back(1.06646e-05);
//// ewkDownM
F0DownM.push_back(0.00108872);	FlDownM.push_back(-0.00233763);	FrDownM.push_back(0.00124891);
//// qcdDownM
F0DownM.push_back(0.00806698);	FlDownM.push_back(-0.0216323);	FrDownM.push_back(0.0135653);
//// bDownM
F0DownM.push_back(0.0030628);	FlDownM.push_back(0.0143776);	FrDownM.push_back(-0.0174404);
//// cDownM
F0DownM.push_back(0.000829335);	FlDownM.push_back(0.0184327);	FrDownM.push_back(-0.019262);
//// genDownM
F0DownM.push_back(-0.00370649);	FlDownM.push_back(0.0205806);	FrDownM.push_back(-0.0168741);
//// MCstatDownM
F0DownM.push_back(-0.009);	FlDownM.push_back(0.003);	FrDownM.push_back(0.004);
//// twbDownM
F0DownM.push_back(0.032);	FlDownM.push_back(0.008);	FrDownM.push_back(0.001);

std::cout.setf(std::ios::fixed);
std::cout.precision(3);
	std::vector<double> d0up;
	std::vector<double> dlup;
	std::vector<double> drup;
	std::vector<double> d0down;
	std::vector<double> dldown;
	std::vector<double> drdown;
    double df0sysSum = 0;
    double dflsysSum = 0;
    double dfrsysSum = 0;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		double f0 = (fabs(F0Up[i])+fabs(F0Down[i]))/2.;
		double fl = (fabs(FlUp[i])+fabs(FlDown[i]))/2.;
		double fr = (fabs(FrUp[i])+fabs(FrDown[i]))/2.;
		double f0M = (fabs(F0UpM[i])+fabs(F0DownM[i]))/2.;
		double flM = (fabs(FlUpM[i])+fabs(FlDownM[i]))/2.;
		double frM = (fabs(FrUpM[i])+fabs(FrDownM[i]))/2.;
		if(names[i] == "$\\rm m_{top}$"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
			f0M=f0M/3.;
			flM=flM/3.;
			frM=frM/3.;
		}
		double df0sys = sqrt(pow(f0,2) + pow(f0M,2) + 2 * f0 * f0M);
		double dflsys = sqrt(pow(fl,2) + pow(flM,2) + 2 * fl * flM);
		double dfrsys = sqrt(pow(fr,2) + pow(frM,2) + 2 * f0 * frM);
		std::cout<<"|"<<names[i];
		std::cout<<"|\t"<<df0sys<<"|\t"<<dflsys<<"|\t"<<dfrsys<<"|"<<std::endl;
    	df0sysSum += pow(df0sys,2);
    	dflsysSum += pow(dflsys,2);
    	dfrsysSum += pow(dfrsys,2);
   }
	std::cout<<"| Sum";
		std::cout<<"|\t"<<sqrt(df0sysSum)<<"|\t"<<sqrt(dflsysSum)<<"|\t"<<sqrt(dfrsysSum)<<"|"<<std::endl;



    double df0N = 0.699408 - 0.700701;
	double dflN = 0.290364 - 0.306839;
	double dfrN = 0.0102274 - (-0.00754075);
	for(unsigned int i = 0; i<F0Up.size(); i++){
		d0up.push_back(F0Up[i]-F0UpM[i]+df0N);
		dlup.push_back(FlUp[i]-FlUpM[i]+dflN);
		drup.push_back(FrUp[i]-FrUpM[i]+dfrN);

		d0down.push_back(F0Down[i]-F0DownM[i]+df0N);
		dldown.push_back(FlDown[i]-FlDownM[i]+dflN);
		drdown.push_back(FrDown[i]-FrDownM[i]+dfrN);
   }

   
	std::vector<double> F0SumM;
	std::vector<double> FlSumM;
	std::vector<double> FrSumM;
	std::vector<double> F0Sum;
	std::vector<double> FlSum;
	std::vector<double> FrSum;
//	cout<<"|\t"<<"|\t\\Delta F_0|\t\\Delta F_L|\t\\Delta F_R"<<endl;
	cout<<F0Up.size()<<"\t"<<FlUp.size()<<"\t"<<FrUp.size()<<endl;
	cout<<F0UpM.size()<<"\t"<<FlUpM.size()<<"\t"<<FrUpM.size()<<endl;
	cout<<F0Down.size()<<"\t"<<FlDown.size()<<"\t"<<FrDown.size()<<endl;
	cout<<F0DownM.size()<<"\t"<<FlDownM.size()<<"\t"<<FrDownM.size()<<endl;
	cout<<names.size()<<endl;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		double f0 = (fabs(d0up[i])+fabs(d0down[i]))/2.;
		double fl = (fabs(dlup[i])+fabs(dldown[i]))/2.;
		double fr = (fabs(drup[i])+fabs(drdown[i]))/2.;

		if(names[i] == "$\\rm m_{top}$"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
		}
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
		cout<<"	& & & \\\\"<<endl;
		std::cout<<"Sum &\t"<<sqrt(df0)<<"&\t"<<sqrt(dfl)<<"&\t"<<sqrt(dfr)<<"\\\\"<<std::endl;
		cout<<"	& & & 	\\\\"<<endl;
		cout<<"\\hline"<<endl;

	cout<<"\n For the log book: \n"<<endl;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		double f0 = (fabs(F0Up[i])+fabs(F0Down[i]))/2.;
		double fl = (fabs(FlUp[i])+fabs(FlDown[i]))/2.;
		double fr = (fabs(FrUp[i])+fabs(FrDown[i]))/2.;
		if(names[i] == "$\\rm m_{top}$"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
		}
		std::cout<<"|"<<names[i];
		std::cout<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<"|"<<std::endl;
	}
	std::cout<<"| Sum";
		std::cout<<"|\t"<<sqrt(df0)<<"|\t"<<sqrt(dfl)<<"|\t"<<sqrt(dfr)<<"|"<<std::endl;
}
