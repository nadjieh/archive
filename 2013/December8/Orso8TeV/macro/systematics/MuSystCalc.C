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
//names.push_back("Anom. $\\twb$");
names.push_back("Anom. $V_R$");
names.push_back("Anom. $g_L$");
names.push_back("SM W-helicity Ref.");

//// btagUp
F0Up.push_back(-0.000936541);	FlUp.push_back(0.001227);	FrUp.push_back(-0.00029046);
//// ctagUp
F0Up.push_back(3.09549e-07);	FlUp.push_back(4.382e-07);	FrUp.push_back(-7.47749e-07);
//// JERUp
F0Up.push_back(0.0073393);	FlUp.push_back(-0.00626773);	FrUp.push_back(-0.00107157);
//// JESUp
F0Up.push_back(0.0118717);	FlUp.push_back(-0.00967017);	FrUp.push_back(-0.00220156);
//// lumiUp
F0Up.push_back(-0.000344652);	FlUp.push_back(0.000833046);	FrUp.push_back(-0.000488394);
//// massUp
F0Up.push_back(0.000629999);	FlUp.push_back(-0.00221185);	FrUp.push_back(0.00158185);
//// METUp
F0Up.push_back(0.00478747);	FlUp.push_back(-0.00698019);	FrUp.push_back(-0.00219272);
//// puUp
F0Up.push_back(0.00172798);	FlUp.push_back(-0.00123227);	FrUp.push_back(-0.000495704);
//// Q2Up
F0Up.push_back(0.0079913);	FlUp.push_back(-0.0103792);	FrUp.push_back(0.00238789);
//// ttUp
F0Up.push_back(0.00246484);	FlUp.push_back(-0.00239301);	FrUp.push_back(-7.18353e-05);
//// tUp
F0Up.push_back(-0.00143364);	FlUp.push_back(0.00146941);	FrUp.push_back(-3.57708e-05);
//// ewkUp
F0Up.push_back(-0.00110376);	FlUp.push_back(0.00237376);	FrUp.push_back(-0.00127);
//// qcdUp
F0Up.push_back(0.0074836);	FlUp.push_back(-0.0141536);	FrUp.push_back(0.00666999);
//// bUp
F0Up.push_back(0.00126557);	FlUp.push_back(0.0179513);	FrUp.push_back(-0.0192169);
//// cUp
F0Up.push_back(8.73389e-05);	FlUp.push_back(0.0200983);	FrUp.push_back(-0.0201857);
//// PDFUp
F0Up.push_back(0.00500346);	FlUp.push_back(0.00430703);	FrUp.push_back(0.000599068);
//// genUp
F0Up.push_back(-0.00370649);	FlUp.push_back(0.0205806);	FrUp.push_back(-0.0168741);
//// MCstatUp
F0Up.push_back(-0.009);	FlUp.push_back(0.003);	FrUp.push_back(0.004);
//// twbUp
//F0Up.push_back(0.032);	FlUp.push_back(0.008);	FrUp.push_back(0.001);
//// VR
F0Up.push_back(0);	FlUp.push_back(0.051 * 0.308);	FrUp.push_back((0.015)*(-0.030));
//// gR
F0Up.push_back(0);	FlUp.push_back(0);	FrUp.push_back((0.9981-1)*(-0.030));
//// FrefUp
F0Up.push_back(0.717977-0.722384);	FlUp.push_back(0.312398-0.308293);	FrUp.push_back(-0.0303749999-(-0.0306769));
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;
//// btagDown
F0Down.push_back(0.000933218);	FlDown.push_back(-0.00122255);	FrDown.push_back(0.000289337);
//// ctagDown
F0Down.push_back(3.09549e-07);	FlDown.push_back(4.382e-07);	FrDown.push_back(-7.47749e-07);
//// JERDown
F0Down.push_back(7.83235e-06);	FlDown.push_back(0.00114068);	FrDown.push_back(-0.00114851);
//// JESDown
F0Down.push_back(-0.0022121);	FlDown.push_back(0.00377495);	FrDown.push_back(-0.00156285);
//// lumiDown
F0Down.push_back(-0.000344652);	FlDown.push_back(0.000833046);	FrDown.push_back(-0.000488394);
//// massDown
F0Down.push_back(-0.00118821);	FlDown.push_back(-0.000782897);	FrDown.push_back(0.00197111);
//// METDown
F0Down.push_back(-0.00590809);	FlDown.push_back(0.00888205);	FrDown.push_back(-0.002973956);
//// puDown
F0Down.push_back(-0.00142796);	FlDown.push_back(0.00105756);	FrDown.push_back(0.000370396);
//// Q2Down
F0Down.push_back(0.00867106);	FlDown.push_back(-0.00942553);	FrDown.push_back(0.000754471);
//// ttDown
F0Down.push_back(-0.000361522);	FlDown.push_back(0.000350857);	FrDown.push_back(1.06646e-05);
//// tDown
F0Down.push_back(0.0014607);	FlDown.push_back(-0.00149769);	FrDown.push_back(3.69887e-05);
//// ewkDown
F0Down.push_back(0.00108872);	FlDown.push_back(-0.00233763);	FrDown.push_back(0.00124891);
//// qcdDown
F0Down.push_back(0.00806698);	FlDown.push_back(-0.0216323);	FrDown.push_back(0.0135653);
//// bDown
F0Down.push_back(0.0030628);	FlDown.push_back(0.0143776);	FrDown.push_back(-0.0174404);
//// cDown
F0Down.push_back(0.000829335);	FlDown.push_back(0.0184327);	FrDown.push_back(-0.019262);
//// PDFDown
F0Down.push_back(0.00424893);	FlDown.push_back(0.00510569);	FrDown.push_back(0.000623818);
//// genDown
F0Down.push_back(-0.00370649);	FlDown.push_back(0.0205806);	FrDown.push_back(-0.0168741);
//// MCstatDown
F0Down.push_back(-0.009);	FlDown.push_back(0.003);	FrDown.push_back(0.004);
//// twbDown
//F0Down.push_back(0.032);	FlDown.push_back(0.008);	FrDown.push_back(0.001);
//// VR
F0Down.push_back(0);	FlDown.push_back(0.051 * 0.308);	FrDown.push_back((0.015)*(-0.030));
//// gR
F0Down.push_back(0);	FlDown.push_back(0);	FrDown.push_back((0.9981-1)*(-0.030));
//// FrefDown
F0Down.push_back(0.717977-0.722384);	FlDown.push_back(0.312398-0.308293);	FrDown.push_back(-0.0303749999-(-0.0306769));
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
