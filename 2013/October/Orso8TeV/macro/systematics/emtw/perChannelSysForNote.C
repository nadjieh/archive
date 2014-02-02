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
//names.push_back("MC stat.");
//names.push_back("Anom. $\\twb$");
//// btagUp
F0Up.push_back(0.00838951);	FlUp.push_back(-0.00065921);	FrUp.push_back(-0.0077303);
//// ctagUp
F0Up.push_back(0.00889773);	FlUp.push_back(-0.0023149);	FrUp.push_back(-0.00658283);
//// JERUp
F0Up.push_back(0.00412072);	FlUp.push_back(-0.00134943);	FrUp.push_back(-0.0027713);
//// JESUp
F0Up.push_back(0.0098983);	FlUp.push_back(-0.00515741);	FrUp.push_back(-0.00474089);
//// lumiUp
F0Up.push_back(0.00952891);	FlUp.push_back(-0.0010374);	FrUp.push_back(-0.00849151);
//// massUp
F0Up.push_back(0.00800297);	FlUp.push_back(-0.00275972);	FrUp.push_back(-0.00524326);
//// METUp
F0Up.push_back(0.00301132);	FlUp.push_back(7.5238e-05);	FrUp.push_back(-0.00308655);
//// puUp
F0Up.push_back(0.00932513);	FlUp.push_back(-0.00423854);	FrUp.push_back(-0.0050866);
//// Q2Up
F0Up.push_back(0.00896804);	FlUp.push_back(-0.00642819);	FrUp.push_back(-0.00253984);
//// ttUp
F0Up.push_back(0.0117792);	FlUp.push_back(-0.0114456);	FrUp.push_back(-0.000333608);
//// ewkUp
F0Up.push_back(0.00214414);	FlUp.push_back(0.00520677);	FrUp.push_back(-0.00735091);
//// qcdUp
F0Up.push_back(0.0103047);	FlUp.push_back(-0.0284526);	FrUp.push_back(0.0181478);
//// cUp
F0Up.push_back(-0.0119914);	FlUp.push_back(0.000609081);	FrUp.push_back(0.0113823);
//// bUp
F0Up.push_back(-0.0180263);	FlUp.push_back(0.00325521);	FrUp.push_back(0.0147711);
//// genUp
F0Up.push_back(-0.00849994);FlUp.push_back(0.0169697);	FrUp.push_back(-0.00846971);
//// MCstatUp
//F0Up.push_back(0.038);	FlUp.push_back(-0.016);	FrUp.push_back(-0.018);
//// twbUp
//F0Up.push_back(0.032);	FlUp.push_back( 0.038);	FrUp.push_back( 0.002);

std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00939656);	FlDown.push_back(-0.00396092);	FrDown.push_back(-0.00543564);
//// ctagDown
F0Down.push_back(0.00889773);	FlDown.push_back(-0.0023149);	FrDown.push_back(-0.00658283);
//// JERDown
F0Down.push_back(0.00807462);	FlDown.push_back(-0.00185232);	FrDown.push_back(-0.0062223);
//// JESDown
F0Down.push_back(0.0015403);	FlDown.push_back(0.00213317);	FrDown.push_back(-0.00367347);
//// lumiDown
F0Down.push_back(0.00952891);	FlDown.push_back(-0.0010374);	FrDown.push_back(-0.00849151);
//// massDown
F0Down.push_back(0.0123551);	FlDown.push_back(-0.00700838);	FrDown.push_back(-0.00534671);
//// METDown
F0Down.push_back(0.00320172);	FlDown.push_back(0.0023804);	FrDown.push_back(-0.00558213);
//// puDown
F0Down.push_back(0.00808422);	FlDown.push_back(-0.000211583);	FrDown.push_back(-0.00787264);
//// Q2Down
F0Down.push_back(0.0199269);	FlDown.push_back(-0.0121358);	FrDown.push_back(-0.00779108);
//// ttDown
F0Down.push_back(-0.0113134);	FlDown.push_back(0.0109967);	FrDown.push_back(0.000316717);
//// ewkDown
F0Down.push_back(-0.0020661);	FlDown.push_back(-0.00503283);	FrDown.push_back(0.00709893);
//// qcdDown
F0Down.push_back(-0.0354591);	FlDown.push_back(-0.0291065);	FrDown.push_back(0.0645656);
//// cDown
F0Down.push_back(-0.0121475);	FlDown.push_back(-0.00321111);	FrDown.push_back(0.0153586);
//// bDown
F0Down.push_back(-0.0233928);	FlDown.push_back(0.00153981);	FrDown.push_back(0.021853);
//// genDown
F0Down.push_back(-0.00849994);	FlDown.push_back(0.0169697);	FrDown.push_back(-0.00846971);
//// MCstatDown
//F0Down.push_back(0.038);	FlDown.push_back(-0.016);	FrDown.push_back(-0.018);
//// twbDown
//F0Down.push_back(0.032);	FlDown.push_back( 0.038);	FrDown.push_back( 0.002);
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
//F0UpM.push_back(-0.009);	FlUpM.push_back(0.003);	FrUpM.push_back(0.004);
//// twbUpM
//F0UpM.push_back(0.032);	FlUpM.push_back(0.008);	FrUpM.push_back(0.001);

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
//F0DownM.push_back(-0.009);	FlDownM.push_back(0.003);	FrDownM.push_back(0.004);
//// twbDownM
//F0DownM.push_back(0.032);	FlDownM.push_back(0.008);	FrDownM.push_back(0.001);

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
