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

//// btagUp
F0Up.push_back(0.00177055);	FlUp.push_back(-0.000940153);	FrUp.push_back(-0.000830396);
//// ctagUp
F0Up.push_back(0.000227902);	FlUp.push_back(-8.82994e-05);	FrUp.push_back(-0.000139603);
//// JERUp
F0Up.push_back(-0.0114459);	FlUp.push_back(0.0054858);	FrUp.push_back(0.00596013);
//// JESUp
F0Up.push_back(-0.0112828);	FlUp.push_back(0.00559623);	FrUp.push_back(0.00568653);
//// lumiUp
F0Up.push_back(0.00285764);	FlUp.push_back(-0.00218418);	FrUp.push_back(-0.000673459);
//// massUp
F0Up.push_back(0.0172386);	FlUp.push_back(-0.0216288);	FrUp.push_back(0.00439024);
//// METUp
F0Up.push_back(-0.000387979);	FlUp.push_back(-0.000597514);	FrUp.push_back(0.000985493);
//// puUp
F0Up.push_back(-0.000206314);	FlUp.push_back(0.00168861);	FrUp.push_back(-0.00148229);
//// Q2Up
F0Up.push_back(0.0001608);	FlUp.push_back(-0.0064723);	FrUp.push_back(0.00231154);
//// ttUp
F0Up.push_back(0.0030936);	FlUp.push_back(-0.00354913);	FrUp.push_back(0.000455538);
//// tUp
F0Up.push_back(0.000159577);	FlUp.push_back(0.000169879);	FrUp.push_back(-0.000329456);
//// ewkUp
F0Up.push_back(0.00478174);	FlUp.push_back(-0.00128996);	FrUp.push_back(-0.00349178);
//// qcdUp
F0Up.push_back(-0.00627444);	FlUp.push_back(0.0158668);	FrUp.push_back(-0.00961236);
//// cwshapeUp
F0Up.push_back(-0.000151643);	FlUp.push_back(0.0102098);	FrUp.push_back(-0.0100582);
//// bwshapeUp
F0Up.push_back(-0.00136625);	FlUp.push_back(0.00585153);	FrUp.push_back(-0.00448529);
//// generatorUp
F0Up.push_back(-0.0102422);	FlUp.push_back(0.00653774);	FrUp.push_back(0.00370444);

std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(-0.0013046);	FlDown.push_back(0.000759468);	FrDown.push_back(0.000545128);
//// ctagDown
F0Down.push_back(0.000227902);	FlDown.push_back(-8.82994e-05);	FrDown.push_back(-0.000139603);
//// JERDown
F0Down.push_back(-0.000529932);	FlDown.push_back(0.000102091);	FrDown.push_back(0.000427841);
//// JESDown
F0Down.push_back(7.36552e-05);	FlDown.push_back(0.000828522);	FrDown.push_back(-0.000902177);
//// lumiDown
F0Down.push_back(-0.00294383);	FlDown.push_back(0.00153552);	FrDown.push_back(0.00140831);
//// massDown
F0Down.push_back(0.0200101);	FlDown.push_back(-0.018456);	FrDown.push_back(-0.0015541);
//// METDown
F0Down.push_back(-0.00742856);	FlDown.push_back(0.00590766);	FrDown.push_back(0.00152091);
//// puDown
F0Down.push_back(0.000253852);	FlDown.push_back(-0.00183724);	FrDown.push_back(0.00158338);
//// Q2Down
F0Down.push_back(0.0101895);	FlDown.push_back(-0.0098108);	FrDown.push_back(-0.00437867);
//// ttDown
F0Down.push_back(-0.00021818);	FlDown.push_back(0.000255907);	FrDown.push_back(-3.77268e-05);
//// tDown
F0Down.push_back(-3.64052e-05);	FlDown.push_back(-4.38561e-05);	FrDown.push_back(8.02613e-05);
//// ewkDown
F0Down.push_back(-0.0042038);	FlDown.push_back(0.00111862);	FrDown.push_back(0.00308518);
//// qcdDown
F0Down.push_back(0.005140614);	FlDown.push_back(-0.0137589);	FrDown.push_back(0.00861828);
//// cwshapeDown
F0Down.push_back(0.00319029);	FlDown.push_back(0.00345377);	FrDown.push_back(-0.00664405);
//// bwshapeDown
F0Down.push_back(0.00130444);	FlDown.push_back(-0.00554027);	FrDown.push_back(0.00423583);
//// generatorDown
F0Down.push_back(-0.0102422);	FlDown.push_back(0.00653774);	FrDown.push_back(0.00370444);

std::vector<double> F0UpM;
std::vector<double> FlUpM;
std::vector<double> FrUpM;
//// btagUp
F0UpM.push_back(-0.00103666);	FlUpM.push_back(0.00335856);	FrUpM.push_back(-0.0023219);
//// ctagUp
F0UpM.push_back(-0.000769916);	FlUpM.push_back(0.00269581);	FrUpM.push_back(-0.00192589);
//// JERUp
F0UpM.push_back(0.00240591);	FlUpM.push_back(-0.000658919);	FrUpM.push_back(-0.00174699);
//// JESUp
F0UpM.push_back(0.0121653);	FlUpM.push_back(-0.00695655);	FrUpM.push_back(-0.00520875);
//// lumiUp
F0UpM.push_back(-0.00077461);	FlUpM.push_back(0.00336599);	FrUpM.push_back(-0.00259138);
//// massUp
F0UpM.push_back(-0.0117274);	FlUpM.push_back(0.0114362);	FrUpM.push_back(0.000291132);
//// METUp
F0UpM.push_back(0.00359969);	FlUpM.push_back(-0.00123065);	FrUpM.push_back(-0.00236904);
//// puUp
F0UpM.push_back(-0.00260985);	FlUpM.push_back(0.00443321);	FrUpM.push_back(-0.00182336);
//// Q2Up
F0UpM.push_back(-0.00207003);	FlUpM.push_back(0.000459855);	FrUpM.push_back(0.00161018);
//// ttUp
F0UpM.push_back(0.000865949);	FlUpM.push_back(0.00103911);	FrUpM.push_back(-0.00190506);
//// tUp
F0UpM.push_back(-0.000807199);	FlUpM.push_back(0.00268002);	FrUpM.push_back(-0.00187283);
//// ewkUp
F0UpM.push_back(-0.00199081);	FlUpM.push_back(0.00546313);	FrUpM.push_back(-0.00347232);
//// qcdUp
F0UpM.push_back(-0.00196776);	FlUpM.push_back(0.0108786);	FrUpM.push_back(-0.00891079);
//// cwshapeUp
F0UpM.push_back(-0.00242299);	FlUpM.push_back(0.00626551);	FrUpM.push_back(-0.00384252);
//// bwshapeUp
F0UpM.push_back(-0.00194816);	FlUpM.push_back(0.00472527);	FrUpM.push_back(-0.00277711);
//// generatorUp
F0UpM.push_back(-0.000611282);	FlUpM.push_back(0.000676216);	FrUpM.push_back(-6.49342e-05);

std::vector<double> F0DownM;
std::vector<double> FlDownM;
std::vector<double> FrDownM;

//// btagDown
F0DownM.push_back(-0.000503498);	FlDownM.push_back(0.00203424);	FrDownM.push_back(-0.00153074);
//// ctagDown
F0DownM.push_back(-0.000769916);	FlDownM.push_back(0.00269581);	FrDownM.push_back(-0.00192589);
//// JERDown
F0DownM.push_back(0.00268644);	FlDownM.push_back(-0.000489663);	FrDownM.push_back(-0.00219678);
//// JESDown
F0DownM.push_back(-0.00494756);	FlDownM.push_back(0.00664857);	FrDownM.push_back(-0.00170101);
//// lumiDown
F0DownM.push_back(-0.000765138);	FlDownM.push_back(0.0020328);	FrDownM.push_back(-0.00126767);
//// massDown
F0DownM.push_back(0.00557926);	FlDownM.push_back(-0.00426442);	FrDownM.push_back(-0.00131484);
//// METDown
F0DownM.push_back(-0.000969408);	FlDownM.push_back(0.00418757);	FrDownM.push_back(-0.00321816);
//// puDown
F0DownM.push_back(0.00158383);	FlDownM.push_back(0.000513939);	FrDownM.push_back(-0.00209777);
//// Q2Down
F0DownM.push_back(0.00716703);	FlDownM.push_back(-0.00635725);	FrDownM.push_back(-0.000809788);
//// ttDown
F0DownM.push_back(0.000190775);	FlDownM.push_back(0.00162917);	FrDownM.push_back(-0.00181995);
//// tDown
F0DownM.push_back(0.000445842);	FlDownM.push_back(0.00130376);	FrDownM.push_back(-0.00174961);
//// ewkDown
F0DownM.push_back(0.000966411);	FlDownM.push_back(-0.000729885);	FrDownM.push_back(-0.000236526);
//// qcdDown
F0DownM.push_back(-0.000807199);	FlDownM.push_back(0.00268002);	FrDownM.push_back(-0.00187283);
//// cwshapeDown
F0DownM.push_back(-0.000696772);	FlDownM.push_back(0.00373502);	FrDownM.push_back(-0.00303825);
//// bwshapeDown
F0DownM.push_back(0.000259058);	FlDownM.push_back(0.00077323);	FrDownM.push_back(-0.00103229);
//// generatorDown
F0DownM.push_back(-0.00165006);	FlDownM.push_back(0.000948086);	FrDownM.push_back(0.000701973);
std::cout.setf(std::ios::fixed);
std::cout.precision(3);
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
		std::cout<<names[i]<<"&\t"<<f0M<<"&\t"<<flM<<"&\t"<<frM;
		std::cout<<"&\t"<<f0<<"&\t"<<fl<<"&\t"<<fr<<"\\\\"<<std::endl;
		cout<<"\\hline"<<endl;
	
		F0Sum.push_back(f0);
		FlSum.push_back(fl);
		FrSum.push_back(fr);
		F0SumM.push_back(f0M);
		FlSumM.push_back(flM);
		FrSumM.push_back(frM);

	}
	double df0 = 0;
	double dfl = 0;
	double dfr = 0;
	double df0M = 0;
	double dflM = 0;
	double dfrM = 0;

	for(unsigned int i = 0; i<F0Up.size(); i++){
		df0 += pow(F0Sum[i],2);
		dfl += pow(FlSum[i],2);
		dfr += pow(FrSum[i],2);
		df0M += pow(F0SumM[i],2);
		dflM += pow(FlSumM[i],2);
		dfrM += pow(FrSumM[i],2);
	}
		cout<<"	& & & & & &	\\\\"<<endl;
		std::cout<<"Sum &\t"<<sqrt(df0M)<<"&\t"<<sqrt(dflM)<<"&\t"<<sqrt(dfrM);
		std::cout<<"&\t"<<sqrt(df0)<<"&\t"<<sqrt(dfl)<<"&\t"<<sqrt(dfr)<<"\\\\"<<std::endl;
		cout<<"	& & & & & &	\\\\"<<endl;
		cout<<"\\hline"<<endl;

	cout<<"\n For the log book: \n"<<endl;
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
		std::cout<<"|"<<names[i]<<"|\t"<<f0M<<"|\t"<<flM<<"|\t"<<frM;
		std::cout<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<"|"<<std::endl;
	}
	std::cout<<"| Sum |\t"<<sqrt(df0M)<<"|\t"<<sqrt(dflM)<<"|\t"<<sqrt(dfrM);
		std::cout<<"|\t"<<sqrt(df0)<<"|\t"<<sqrt(dfl)<<"|\t"<<sqrt(dfr)<<"|"<<std::endl;
}
