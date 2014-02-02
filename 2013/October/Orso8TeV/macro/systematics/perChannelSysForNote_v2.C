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
F0Up.push_back(-0.00103098);	FlUp.push_back(0.00105894);	FrUp.push_back(-2.79561e-05);
//// ctagUp
F0Up.push_back(4.12963e-07);	FlUp.push_back(1.97095e-07);	FrUp.push_back(-6.10058e-07);
//// JERUp
F0Up.push_back(0.00315683);	FlUp.push_back(-0.00310761);	FrUp.push_back(-4.92151e-05);
//// JESUp
F0Up.push_back(0.00425635);	FlUp.push_back(-0.00127082);	FrUp.push_back(-0.00298553);
//// lumiUp
F0Up.push_back(-0.000499876);	FlUp.push_back(0.000490486);	FrUp.push_back(9.39066e-06);
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
//// cUp
F0Up.push_back(0.00229852);	FlUp.push_back(0.00690959);	FrUp.push_back(-0.0092081);
//// bUp
F0Up.push_back(0.000528535);	FlUp.push_back(0.00345174);	FrUp.push_back(-0.00398028);
//// genUp
F0Up.push_back(-0.0118718);	FlUp.push_back(0.00768509);	FrUp.push_back(0.00418666);
//// MCstatUp
F0Up.push_back(-0.003);	FlUp.push_back(-0.009);	FrUp.push_back(0.012);
//// VR
F0Up.push_back(0);	FlUp.push_back( 0.054*0.283);	FrUp.push_back( 0.068 * (0.9716-1));
//// gR
F0Up.push_back((0.9419-1)*0.649);	FlUp.push_back( 0.095*0.283);	FrUp.push_back( 0.068*(0.9715-1));

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
F0Down.push_back(0.000117598);	FlDown.push_back(-0.000304607);	FrDown.push_back(0.000187008);
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
//// cDown
F0Down.push_back(0.00311456);	FlDown.push_back(0.0029676);	FrDown.push_back(-0.00608216);
//// bDown
F0Down.push_back(-6.70837e-05);	FlDown.push_back(-0.00403328);	FrDown.push_back(0.00410036);
//// genDown
F0Down.push_back(-0.0118718);	FlDown.push_back(0.00768509);	FrDown.push_back(0.00418666);
//// MCstatDown
F0Down.push_back(-0.003);	FlDown.push_back(-0.009);	FrDown.push_back(0.012);
//// VR
F0Down.push_back(0);	FlDown.push_back( 0.054*0.283);	FrDown.push_back( 0.068 * (0.9716-1));
//// gR
F0Down.push_back((0.9419-1)*0.649);	FlDown.push_back( 0.095*0.283);	FrDown.push_back( 0.068*(0.9715-1));

std::vector<double> F0UpM;
std::vector<double> FlUpM;
std::vector<double> FrUpM;
//// btagUp
F0UpM.push_back(-0.000936541);	FlUpM.push_back(0.001227);	FrUpM.push_back(-0.00029046);
//// ctagUp
F0UpM.push_back(3.09549e-07);	FlUpM.push_back(4.382e-07);	FrUpM.push_back(-7.47749e-07);
//// JERUp
F0UpM.push_back(0.0073393);	FlUpM.push_back(-0.00626773);	FrUpM.push_back(-0.00107157);
//// JESUp
F0UpM.push_back(0.0118717);	FlUpM.push_back(-0.00967017);	FrUpM.push_back(-0.00220156);
//// lumiUp
F0UpM.push_back(-0.000344652);	FlUpM.push_back(0.000833046);	FrUpM.push_back(-0.000488394);
//// massUp
F0UpM.push_back(0.000629999);	FlUpM.push_back(-0.00221185);	FrUpM.push_back(0.00158185);
//// METUp
F0UpM.push_back(0.00278747);	FlUpM.push_back(-0.00198019);	FrUpM.push_back(-0.000807284);
//// puUp
F0UpM.push_back(0.00172798);	FlUpM.push_back(-0.00123227);	FrUpM.push_back(-0.000495704);
//// Q2Up
F0UpM.push_back(0.0079913);	FlUpM.push_back(-0.0103792);	FrUpM.push_back(0.00238789);
//// ttUp
F0UpM.push_back(0.00246484);	FlUpM.push_back(-0.00239301);	FrUpM.push_back(-7.18353e-05);
//// ewkUp
F0UpM.push_back(-0.00110376);	FlUpM.push_back(0.00237376);	FrUpM.push_back(-0.00127);
//// qcdUp
F0UpM.push_back(0.0074836);	FlUpM.push_back(-0.0141536);	FrUpM.push_back(0.00666999);
//// cUp
F0UpM.push_back(-0.00256801);	FlUpM.push_back(0.00425548);	FrUpM.push_back(-0.00168747);
//// bUp
F0UpM.push_back(-0.000976928);	FlUpM.push_back(0.00174713);	FrUpM.push_back(-0.0007702);
//// genUp
F0UpM.push_back(-0.00499949);	FlUpM.push_back(0.00410556);	FrUpM.push_back(0.000893928);
//// MCstatUpM
F0UpM.push_back(-0.008);	FlUpM.push_back(0.003);	FrUpM.push_back(0.005);
//// VR
F0UpM.push_back(0);	FlUpM.push_back(0.051 * 0.308);	FrUpM.push_back((0.015)*(-0.030));
//// gR
F0UpM.push_back(0.722 * (0.9882-1));	FlUpM.push_back(0.075 * 0.308);	FrUpM.push_back((0.9802-1)*(-0.030));

std::vector<double> F0DownM;
std::vector<double> FlDownM;
std::vector<double> FrDownM;

//// btagDown
F0DownM.push_back(0.000933218);	FlDownM.push_back(-0.00122255);	FrDownM.push_back(0.000289337);
//// ctagDown
F0DownM.push_back(3.09549e-07);	FlDownM.push_back(4.382e-07);	FrDownM.push_back(-7.47749e-07);
//// JERDown
F0DownM.push_back(7.83235e-06);	FlDownM.push_back(0.00114068);	FrDownM.push_back(-0.00114851);
//// JESDown
F0DownM.push_back(-0.0022121);	FlDownM.push_back(0.00377495);	FrDownM.push_back(-0.00156285);
//// lumiDown
F0DownM.push_back(0.00034265);	FlDownM.push_back(-0.000825288);	FrDownM.push_back(0.000482638);
//// massDown
F0DownM.push_back(-0.00118821);	FlDownM.push_back(-0.000782897);	FrDownM.push_back(0.00197111);
//// METDown
F0DownM.push_back(-0.00390809);	FlDownM.push_back(0.00488204);	FrDownM.push_back(-0.000973956);
//// puDown
F0DownM.push_back(-0.00142796);	FlDownM.push_back(0.00105756);	FrDownM.push_back(0.000370396);
//// Q2Down
F0DownM.push_back(0.00867106);	FlDownM.push_back(-0.00942553);	FrDownM.push_back(0.000754471);
//// ttDown
F0DownM.push_back(-0.000361522);	FlDownM.push_back(0.000350857);	FrDownM.push_back(1.06646e-05);
//// ewkDown
F0DownM.push_back(0.00108872);	FlDownM.push_back(-0.00233763);	FrDownM.push_back(0.00124891);
//// qcdDown
F0DownM.push_back(0.00806698);	FlDownM.push_back(-0.0216323);	FrDownM.push_back(0.0135653);
//// cDown
F0DownM.push_back(-0.00178964);	FlDownM.push_back(0.00256753);	FrDownM.push_back(-0.000777881);
//// bDown
F0DownM.push_back(0.00120525);	FlDownM.push_back(-0.0021523);	FrDownM.push_back(0.000947057);
//// genDown
F0DownM.push_back(-0.00499949);	FlDownM.push_back(0.00410556);	FrDownM.push_back(0.000893928);
//// MCstatDownM
F0DownM.push_back(-0.008);	FlDownM.push_back(0.003);	FrDownM.push_back(0.005);
//// VR
F0DownM.push_back(0);	FlDownM.push_back(0.051 * 0.308);	FrDownM.push_back((0.015)*(-0.030));
//// gR
F0DownM.push_back(0.722 * (0.9882-1));	FlDownM.push_back(0.075 * 0.308);	FrDownM.push_back((0.9802-1)*(-0.030));

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
