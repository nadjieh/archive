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
names.push_back("Anom. $V_R$");
names.push_back("Anom. $g_L$");
names.push_back("SM W-helicity Ref.");*/
//// btagUp
F0Up.push_back(-0.00619594);	FlUp.push_back(0.00952335);	FrUp.push_back(-0.0033274);
//// ctagUp
F0Up.push_back(-0.00173842);	FlUp.push_back(0.0017241);	FrUp.push_back(1.43148e-05);
//// JERUp
F0Up.push_back(-0.00941039);	FlUp.push_back(0.00573695);	FrUp.push_back(0.00367343);
//// JESUp
F0Up.push_back(-0.00527783);	FlUp.push_back(0.00303779);	FrUp.push_back(-0.00240042);
//// lumiUp
F0Up.push_back(-0.00138741);	FlUp.push_back(0.00316922);	FrUp.push_back(-0.00178181);
//// massUp
F0Up.push_back(-0.00350665);	FlUp.push_back(0.00160064);	FrUp.push_back(0.00190601);
//// METUp
F0Up.push_back(0.00030448);	FlUp.push_back(-0.00240781);	FrUp.push_back(0.00210332);
//// puUp
F0Up.push_back(-0.00142475);	FlUp.push_back(-0.000258559);	FrUp.push_back(0.00168331);
//// Q2Up
F0Up.push_back(-0.00329459);	FlUp.push_back(-0.00218254);	FrUp.push_back(0.00547713);
//// ttUp
F0Up.push_back(-0.00138748);	FlUp.push_back(0.00130482);	FrUp.push_back(8.2658e-05);
//// tUp
F0Up.push_back(-0.00130958);	FlUp.push_back(0.00137057);	FrUp.push_back(-6.09925e-05);
//// ewkUp
F0Up.push_back(0.00113541);	FlUp.push_back(0.00502601);	FrUp.push_back(-0.00616142);
//// qcdUp
F0Up.push_back(0.0184312);	FlUp.push_back(0.022048);	FrUp.push_back(-0.0394793);
//// cwshapeUp
F0Up.push_back(0.00507096);	FlUp.push_back(0.000201521);	FrUp.push_back(-0.00527248);
//// bwshapeUp
F0Up.push_back(0.00183536);	FlUp.push_back(0.00191003);	FrUp.push_back(-0.00374539);
////PDFUp
//F0Up.push_back(0.00565022);	FlUp.push_back(0.00473018);	FrUp.push_back(0.00168029);
//// generatorUp
F0Up.push_back(-0.00615472);	FlUp.push_back(0.00517237);	FrUp.push_back(0.000982347);
////MC stat
//F0Up.push_back(0.003);	FlUp.push_back(-0.004);	FrUp.push_back(-0.001);
////VR 
//F0Up.push_back(0);	FlUp.push_back(0.064*0.314307);	FrUp.push_back((0.9516-1)*(0.00878328));
////gL 
//F0Up.push_back(0);	FlUp.push_back(0);	FrUp.push_back(0.00878328*(0.9581-1));
//// FrefUp
//F0Up.push_back(0.672824 - 0.676932);	FlUp.push_back(0.319749 - 0.314295);	FrUp.push_back((1-0.672824-0.319749) - 0.00877265);


std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.0025045);	FlDown.push_back(-0.0057005);	FrDown.push_back(0.003196);
//// ctagDown
F0Down.push_back(-0.00173842);	FlDown.push_back(0.0017241);	FrDown.push_back(1.43148e-05);
//// JERDown
F0Down.push_back(0.00550825);	FlDown.push_back(-0.00468625);	FrDown.push_back(-0.00082199);
//// JESDown
F0Down.push_back(-0.00729538);	FlDown.push_back(0.00538057);	FrDown.push_back(0.00191481);
//// lumiDown
F0Down.push_back(-0.0019228);	FlDown.push_back(-4.2361e-05);	FrDown.push_back(0.00196516);
//// massDown
F0Down.push_back(0.00116793);	FlDown.push_back(-0.00294987);	FrDown.push_back(0.00178194);
//// METDown
F0Down.push_back(-0.0118295);	FlDown.push_back(0.0122291);	FrDown.push_back(-0.0003996);
//// puDown
F0Down.push_back(-0.00246819);	FlDown.push_back(0.00389928);	FrDown.push_back(-0.00143109);
//// Q2Down
F0Down.push_back(0.00965882);	FlDown.push_back(-0.0083619);	FrDown.push_back(-0.00129692);
//// ttDown
F0Down.push_back(-0.00641455);	FlDown.push_back(0.00628596);	FrDown.push_back(0.000128589);
//// tDown
F0Down.push_back(0.00133234);	FlDown.push_back(-0.00139488);	FrDown.push_back(6.2542e-05);
//// ewkDown
F0Down.push_back(-0.00109825);	FlDown.push_back(-0.00488496);	FrDown.push_back(0.00598321);
//// qcdDown
F0Down.push_back(-0.0163646);	FlDown.push_back(-0.02062548);	FrDown.push_back(0.0359901);
//// cwshapeDown
F0Down.push_back(0.00334702);	FlDown.push_back(-0.0013355);	FrDown.push_back(-0.00201152);
//// bwshapeDown
F0Down.push_back(-0.00357715);	FlDown.push_back(0.00175403);	FrDown.push_back(0.00182312);
////PDFDown
//F0Down.push_back(0.00491964);	FlDown.push_back(0.00569199);	FrDown.push_back(0.00158329);
//// generatorDown
F0Down.push_back(-0.00615472);	FlDown.push_back(0.00517237);	FrDown.push_back(0.000982347);
////MC stat
//F0Down.push_back(0.003);	FlDown.push_back(-0.004);	FrDown.push_back(-0.001);
////VR 
//F0Down.push_back(0);	FlDown.push_back(0.064*0.314307);	FrDown.push_back((0.9516-1)*(0.00878328));
////gL 
//F0Down.push_back(0);	FlDown.push_back(0);	FrDown.push_back(0.00878328*(0.9581-1));
//// FrefDown
//F0Down.push_back(0.672824 - 0.676932);	FlDown.push_back(0.319749 - 0.314295);	FrDown.push_back((1-0.672824-0.319749) - 0.00877265);

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
