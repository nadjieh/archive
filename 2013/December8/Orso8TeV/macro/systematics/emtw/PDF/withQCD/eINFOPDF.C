{
	std::vector<double> F0UpOdd;
	std::vector<double> F0UpEven;
	std::vector<double> FlUpOdd;
	std::vector<double> FlUpEven;
	std::vector<double> FrUpOdd;
	std::vector<double> FrUpEven;
	double df0 = 0.700762 - 0.70966;
	double dfl = 0.318202 - 0.315887;
	double dfr = (1 - 0.700762 - 0.318202) + 0.0255468;

	F0UpEven.push_back(0.00930742+ df0);	FlUpEven.push_back(-0.00261808+ dfl);	FrUpEven.push_back(dfr + -0.00668934);
	F0UpEven.push_back(0.00689288+ df0);	FlUpEven.push_back(-0.000667612+ dfl);	FrUpEven.push_back(dfr + -0.00622527);
	F0UpEven.push_back(0.00886388+ df0);	FlUpEven.push_back(-0.00223356+ dfl);	FrUpEven.push_back(dfr + -0.00663032);
	F0UpEven.push_back(0.00868525+ df0);	FlUpEven.push_back(-0.00220045+ dfl);	FrUpEven.push_back(dfr + -0.0064848);
	F0UpEven.push_back(0.00880575+ df0);	FlUpEven.push_back(-0.00227387+ dfl);	FrUpEven.push_back(dfr + -0.00653188);
	F0UpEven.push_back(0.00853555+ df0);	FlUpEven.push_back(-0.00220035+ dfl);	FrUpEven.push_back(dfr + -0.0063352);
	F0UpEven.push_back(0.009594+ df0);	FlUpEven.push_back(-0.00258785+ dfl);	FrUpEven.push_back(dfr + -0.00700615);
	F0UpEven.push_back(0.00839115+ df0);	FlUpEven.push_back(-0.001643+ dfl);	FrUpEven.push_back(dfr + -0.00674814);
	F0UpEven.push_back(0.00888689+ df0);	FlUpEven.push_back(-0.00249519+ dfl);	FrUpEven.push_back(dfr + -0.0063917);
	F0UpEven.push_back(0.00869386+ df0);	FlUpEven.push_back(-0.002194+ dfl);	FrUpEven.push_back(dfr + -0.00649986);
	F0UpEven.push_back(0.009948+ df0);	FlUpEven.push_back(-0.00387901+ dfl);	FrUpEven.push_back(dfr + -0.00606899);
	F0UpEven.push_back(0.00957403+ df0);	FlUpEven.push_back(-0.0025776+ dfl);	FrUpEven.push_back(dfr + -0.00699643);
	F0UpEven.push_back(0.00956431+ df0);	FlUpEven.push_back(-0.00285586+ dfl);	FrUpEven.push_back(dfr + -0.00670845);
	F0UpEven.push_back(0.00909273+ df0);	FlUpEven.push_back(-0.00222034+ dfl);	FrUpEven.push_back(dfr + -0.00687239);
	F0UpEven.push_back(0.00815505+ df0);	FlUpEven.push_back(-0.00159965+ dfl);	FrUpEven.push_back(dfr + -0.0065554);
	F0UpEven.push_back(0.00949365+ df0);	FlUpEven.push_back(-0.00272868+ dfl);	FrUpEven.push_back(dfr + -0.00676497);
	F0UpEven.push_back(0.00847184+ df0);	FlUpEven.push_back(-0.00278702+ dfl);	FrUpEven.push_back(dfr + -0.00568482);
	F0UpEven.push_back(0.0114538+ df0);	FlUpEven.push_back(-0.00479386+ dfl);	FrUpEven.push_back(dfr + -0.0066599);
	F0UpEven.push_back(0.00903033+ df0);	FlUpEven.push_back(-0.00249097+ dfl);	FrUpEven.push_back(dfr + -0.00653936);
	F0UpEven.push_back(0.00917187+ df0);	FlUpEven.push_back(-0.00273932+ dfl);	FrUpEven.push_back(dfr + -0.00643254);
	F0UpEven.push_back(0.0134798+ df0);	FlUpEven.push_back(-0.00684934+ dfl);	FrUpEven.push_back(dfr + -0.0066305);
	F0UpEven.push_back(0.00916104+ df0);	FlUpEven.push_back(-0.00261672+ dfl);	FrUpEven.push_back(dfr + -0.00654432);
	F0UpEven.push_back(0.00901056+ df0);	FlUpEven.push_back(-0.00210593+ dfl);	FrUpEven.push_back(dfr + -0.00690463);
	F0UpEven.push_back(0.00895194+ df0);	FlUpEven.push_back(-0.00236482+ dfl);	FrUpEven.push_back(dfr + -0.00658711);
	F0UpEven.push_back(0.00914421+ df0);	FlUpEven.push_back(-0.0022783+ dfl);	FrUpEven.push_back(dfr + -0.00686592);
	F0UpEven.push_back(0.00764294+ df0);	FlUpEven.push_back(-0.00140852+ dfl);	FrUpEven.push_back(dfr + -0.00623443);

	F0UpOdd.push_back(0.00845745+ df0);	FlUpOdd.push_back(-0.00199639+ dfl);	FrUpOdd.push_back(dfr + -0.00646107);
	F0UpOdd.push_back(0.00918854+ df0);	FlUpOdd.push_back(-0.00245585+ dfl);	FrUpOdd.push_back(dfr + -0.0067327);
	F0UpOdd.push_back(0.00895435+ df0);	FlUpOdd.push_back(-0.00241947+ dfl);	FrUpOdd.push_back(dfr + -0.00653488);
	F0UpOdd.push_back(0.00899607+ df0);	FlUpOdd.push_back(-0.00235855+ dfl);	FrUpOdd.push_back(dfr + -0.00663752);
	F0UpOdd.push_back(0.00953787+ df0);	FlUpOdd.push_back(-0.00266742+ dfl);	FrUpOdd.push_back(dfr + -0.00687045);
	F0UpOdd.push_back(0.00820215+ df0);	FlUpOdd.push_back(-0.00201506+ dfl);	FrUpOdd.push_back(dfr + -0.00618709);
	F0UpOdd.push_back(0.00891067+ df0);	FlUpOdd.push_back(-0.00214015+ dfl);	FrUpOdd.push_back(dfr + -0.00677052);
	F0UpOdd.push_back(0.00962644+ df0);	FlUpOdd.push_back(-0.00346637+ dfl);	FrUpOdd.push_back(dfr + -0.00616007);
	F0UpOdd.push_back(0.0091209+ df0);	FlUpOdd.push_back(-0.00242341+ dfl);	FrUpOdd.push_back(dfr + -0.00669749);
	F0UpOdd.push_back(0.00856222+ df0);	FlUpOdd.push_back(-0.00102539+ dfl);	FrUpOdd.push_back(dfr + -0.00753684);
	F0UpOdd.push_back(0.00733701+ df0);	FlUpOdd.push_back(-0.00174562+ dfl);	FrUpOdd.push_back(dfr + -0.00559139);
	F0UpOdd.push_back(0.00814155+ df0);	FlUpOdd.push_back(-0.00171524+ dfl);	FrUpOdd.push_back(dfr + -0.00642631);
	F0UpOdd.push_back(0.00882451+ df0);	FlUpOdd.push_back(-0.00245877+ dfl);	FrUpOdd.push_back(dfr + -0.00636574);
	F0UpOdd.push_back(0.00941245+ df0);	FlUpOdd.push_back(-0.00266699+ dfl);	FrUpOdd.push_back(dfr + -0.00674547);
	F0UpOdd.push_back(0.00813814+ df0);	FlUpOdd.push_back(-0.00173864+ dfl);	FrUpOdd.push_back(dfr + -0.0063995);
	F0UpOdd.push_back(0.0094415+ df0);	FlUpOdd.push_back(-0.00189848+ dfl);	FrUpOdd.push_back(dfr + -0.00754302);
	F0UpOdd.push_back(0.0084228+ df0);	FlUpOdd.push_back(-0.00193134+ dfl);	FrUpOdd.push_back(dfr + -0.00649147);
	F0UpOdd.push_back(0.00882115+ df0);	FlUpOdd.push_back(-0.00219743+ dfl);	FrUpOdd.push_back(dfr + -0.00662371);
	F0UpOdd.push_back(0.00869909+ df0);	FlUpOdd.push_back(-0.00199634+ dfl);	FrUpOdd.push_back(dfr + -0.00670275);
	F0UpOdd.push_back(0.00504996+ df0);	FlUpOdd.push_back(0.0016546+ dfl);	FrUpOdd.push_back(dfr + -0.00670456);
	F0UpOdd.push_back(0.00880611+ df0);	FlUpOdd.push_back(-0.0022307+ dfl);	FrUpOdd.push_back(dfr + -0.0065754);
	F0UpOdd.push_back(0.00877871+ df0);	FlUpOdd.push_back(-0.00250759+ dfl);	FrUpOdd.push_back(dfr + -0.00627112);
	F0UpOdd.push_back(0.00880757+ df0);	FlUpOdd.push_back(-0.00221481+ dfl);	FrUpOdd.push_back(dfr + -0.00659276);
	F0UpOdd.push_back(0.00879285+ df0);	FlUpOdd.push_back(-0.00234752+ dfl);	FrUpOdd.push_back(dfr + -0.00644533);
	F0UpOdd.push_back(0.00853856+ df0);	FlUpOdd.push_back(-0.00178579+ dfl);	FrUpOdd.push_back(dfr + -0.00675277);
	F0UpOdd.push_back(0.0102206+ df0);	FlUpOdd.push_back(-0.00338133+ dfl);	FrUpOdd.push_back(dfr + -0.00683925);
	
	double DelF0Plus = 0;
	double DelF0Minus = 0;
	double DelFNegPlus = 0;
	double DelFNegMinus = 0;
	double DelFrPlus = 0;
	double DelFrMinus = 0;
	
	for (int i = 0; i < F0UpEven.size(); i++) {
	    double max = 0;
	    if (F0UpEven[i] > max)
	        max = F0UpEven[i];
	    if (F0UpOdd[i] > max)
	        max = F0UpOdd[i];
	    DelF0Plus += max*max;
	    max = 0;
	    if ((-1 * F0UpEven[i]) > max)
	        max = (-1 * F0UpEven[i]);
	    if ((-1 * F0UpOdd[i]) > max)
	        max = (-1 * F0UpOdd[i]);
	    DelF0Minus += max*max;
	}
	
	for (int i = 0; i < FlUpEven.size(); i++) {
	    double max = 0;
	    if (FlUpEven[i] > max)
	        max = FlUpEven[i];
	    if (FlUpOdd[i] > max)
	        max = FlUpOdd[i];
	    DelFNegPlus += max*max;
	    max = 0;
	    if ((-1 * FlUpEven[i]) > max)
	        max = (-1 * FlUpEven[i]);
	    if ((-1 * FlUpOdd[i]) > max)
	        max = (-1 * FlUpOdd[i]);
	    DelFNegMinus += max*max;
	}

	for (int i = 0; i < FrUpEven.size(); i++) {
	    double max = 0;
	    if (FrUpEven[i] > max)
	        max = FrUpEven[i];
	    if (FrUpOdd[i] > max)
	        max = FrUpOdd[i];
	    DelFrPlus += max*max;
	    max = 0;
	    if ((-1 * FrUpEven[i]) > max)
	        max = (-1 * FrUpEven[i]);
	    if ((-1 * FrUpOdd[i]) > max)
	        max = (-1 * FrUpOdd[i]);
	    DelFrMinus += max*max;
	}
	cout<<"Electron (MT):"<<endl;
	cout<<"$\\Delta F_{0}^{+} = "<<sqrt(DelF0Plus)<<"$"<<endl;
	cout<<"$\\Delta F_{0}^{-} = "<<sqrt(DelF0Minus)<<"$"<<endl;
	cout<<"$\\Delta F_{L}^{+} = "<<sqrt(DelFNegPlus)<<"$"<<endl;
	cout<<"$\\Delta F_{L}^{-} = "<<sqrt(DelFNegMinus)<<"$"<<endl;
	cout<<"$\\Delta F_{R}^{+} = "<<sqrt(DelFrPlus)<<"$"<<endl;
	cout<<"$\\Delta F_{R}^{-} = "<<sqrt(DelFrMinus)<<"$"<<endl;
	cout<<"	F0Up.push_back("<<sqrt(DelF0Plus)<<");	FlUp.push_back("<<sqrt(DelFNegPlus)<<");	FrUp.push_back("<<sqrt(DelFrPlus)<<");"<<endl;
	cout<<"	F0Down.push_back("<<sqrt(DelF0Minus)<<");	FlDown.push_back("<<sqrt(DelFNegMinus)<<");	FrDown.push_back("<<sqrt(DelFrMinus)<<");"<<endl;
}

//Negative correlation
	
	
