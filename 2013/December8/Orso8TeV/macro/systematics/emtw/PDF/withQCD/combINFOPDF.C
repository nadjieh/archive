{
	std::vector<double> F0UpOdd;
	std::vector<double> F0UpEven;
	std::vector<double> FlUpOdd;
	std::vector<double> FlUpEven;
	std::vector<double> FrUpOdd;
	std::vector<double> FrUpEven;
	double df0 = 0.701567 - 0.702836;
	double dfl = 0.3092 - 0.31072;
	double dfr = (1 - 0.701567 - 0.3092) + 0.0135558;
	F0UpOdd.push_back(0.000798594+ df0);	FlUpOdd.push_back(0.00193738+ dfl);	FrUpOdd.push_back(dfr + -0.00273597);
	F0UpOdd.push_back(0.00137148+ df0);	FlUpOdd.push_back(0.00136015+ dfl);	FrUpOdd.push_back(dfr + -0.00273163);
	F0UpOdd.push_back(0.0013987+ df0);	FlUpOdd.push_back(0.00147682+ dfl);	FrUpOdd.push_back(dfr + -0.00287552);
	F0UpOdd.push_back(0.00140621+ df0);	FlUpOdd.push_back(0.00143193+ dfl);	FrUpOdd.push_back(dfr + -0.00283814);
	F0UpOdd.push_back(0.00183213+ df0);	FlUpOdd.push_back(0.00109871+ dfl);	FrUpOdd.push_back(dfr + -0.00293085);
	F0UpOdd.push_back(0.000751439+ df0);	FlUpOdd.push_back(0.00185095+ dfl);	FrUpOdd.push_back(dfr + -0.00260239);
	F0UpOdd.push_back(0.00191903+ df0);	FlUpOdd.push_back(0.000626555+ dfl);	FrUpOdd.push_back(dfr + -0.00254559);
	F0UpOdd.push_back(0.00115429+ df0);	FlUpOdd.push_back(0.00172083+ dfl);	FrUpOdd.push_back(dfr + -0.00287512);
	F0UpOdd.push_back(0.00134197+ df0);	FlUpOdd.push_back(0.00151176+ dfl);	FrUpOdd.push_back(dfr + -0.00285373);
	F0UpOdd.push_back(0.000571654+ df0);	FlUpOdd.push_back(0.00275398+ dfl);	FrUpOdd.push_back(dfr + -0.00332564);
	F0UpOdd.push_back(2.94312e-05+ df0);	FlUpOdd.push_back(0.00227196+ dfl);	FrUpOdd.push_back(dfr + -0.00230139);
	F0UpOdd.push_back(0.000661444+ df0);	FlUpOdd.push_back(0.00207892+ dfl);	FrUpOdd.push_back(dfr + -0.00274036);
	F0UpOdd.push_back(0.00115644+ df0);	FlUpOdd.push_back(0.00150421+ dfl);	FrUpOdd.push_back(dfr + -0.00266065);
	F0UpOdd.push_back(0.00165358+ df0);	FlUpOdd.push_back(0.00119298+ dfl);	FrUpOdd.push_back(dfr + -0.00284656);
	F0UpOdd.push_back(0.000541114+ df0);	FlUpOdd.push_back(0.00208151+ dfl);	FrUpOdd.push_back(dfr + -0.00262262);
	F0UpOdd.push_back(0.00143865+ df0);	FlUpOdd.push_back(0.00189965+ dfl);	FrUpOdd.push_back(dfr + -0.0033383);
	F0UpOdd.push_back(0.000911065+ df0);	FlUpOdd.push_back(0.00183269+ dfl);	FrUpOdd.push_back(dfr + -0.00274375);
	F0UpOdd.push_back(0.00110636+ df0);	FlUpOdd.push_back(0.00167546+ dfl);	FrUpOdd.push_back(dfr + -0.00278181);
	F0UpOdd.push_back(0.000995735+ df0);	FlUpOdd.push_back(0.00185575+ dfl);	FrUpOdd.push_back(dfr + -0.00285148);
	F0UpOdd.push_back(-0.00229677+ df0);	FlUpOdd.push_back(0.00518626+ dfl);	FrUpOdd.push_back(dfr + -0.00288949);
	F0UpOdd.push_back(0.00119856+ df0);	FlUpOdd.push_back(0.00159501+ dfl);	FrUpOdd.push_back(dfr + -0.00279356);
	F0UpOdd.push_back(0.00120586+ df0);	FlUpOdd.push_back(0.00139698+ dfl);	FrUpOdd.push_back(dfr + -0.00260284);
	F0UpOdd.push_back(0.00126489+ df0);	FlUpOdd.push_back(0.00152365+ dfl);	FrUpOdd.push_back(dfr + -0.00278853);
	F0UpOdd.push_back(0.00125031+ df0);	FlUpOdd.push_back(0.00147564+ dfl);	FrUpOdd.push_back(dfr + -0.00272595);
	F0UpOdd.push_back(0.000860204+ df0);	FlUpOdd.push_back(0.00202522+ dfl);	FrUpOdd.push_back(dfr + -0.00288542);
	F0UpOdd.push_back(0.00234919+ df0);	FlUpOdd.push_back(0.000568663+ dfl);	FrUpOdd.push_back(dfr + -0.00291786);

	F0UpEven.push_back(0.0016766+ df0);	FlUpEven.push_back(0.00116007+ dfl);	FrUpEven.push_back(dfr + -0.00283667);
	F0UpEven.push_back(-0.000374778+ df0);	FlUpEven.push_back(0.00298424+ dfl);	FrUpEven.push_back(dfr + -0.00260946);
	F0UpEven.push_back(0.0012007+ df0);	FlUpEven.push_back(0.00164318+ dfl);	FrUpEven.push_back(dfr + -0.00284388);
	F0UpEven.push_back(0.00118715+ df0);	FlUpEven.push_back(0.00154661+ dfl);	FrUpEven.push_back(dfr + -0.00273377);
	F0UpEven.push_back(0.00114211+ df0);	FlUpEven.push_back(0.00160094+ dfl);	FrUpEven.push_back(dfr + -0.00274305);
	F0UpEven.push_back(0.000967045+ df0);	FlUpEven.push_back(0.00169562+ dfl);	FrUpEven.push_back(dfr + -0.00266267);
	F0UpEven.push_back(0.000823907+ df0);	FlUpEven.push_back(0.00206702+ dfl);	FrUpEven.push_back(dfr + -0.00289093);
	F0UpEven.push_back(0.0018031+ df0);	FlUpEven.push_back(0.00118607+ dfl);	FrUpEven.push_back(dfr + -0.00298917);
	F0UpEven.push_back(0.00138777+ df0);	FlUpEven.push_back(0.00131253+ dfl);	FrUpEven.push_back(dfr + -0.0027003);
	F0UpEven.push_back(0.00126519+ df0);	FlUpEven.push_back(0.00147702+ dfl);	FrUpEven.push_back(dfr + -0.00274221);
	F0UpEven.push_back(0.00244484+ df0);	FlUpEven.push_back(4.30289e-05+ dfl);	FrUpEven.push_back(dfr + -0.00248786);
	F0UpEven.push_back(0.00180061+ df0);	FlUpEven.push_back(0.00119165+ dfl);	FrUpEven.push_back(dfr + -0.00299226);
	F0UpEven.push_back(0.00181126+ df0);	FlUpEven.push_back(0.00101445+ dfl);	FrUpEven.push_back(dfr + -0.00282571);
	F0UpEven.push_back(0.0015198+ df0);	FlUpEven.push_back(0.00143156+ dfl);	FrUpEven.push_back(dfr + -0.00295136);
	F0UpEven.push_back(0.000625375+ df0);	FlUpEven.push_back(0.00216817+ dfl);	FrUpEven.push_back(dfr + -0.00279355);
	F0UpEven.push_back(0.00118245+ df0);	FlUpEven.push_back(0.00109106+ dfl);	FrUpEven.push_back(dfr + -0.00227351);
	F0UpEven.push_back(0.00187218+ df0);	FlUpEven.push_back(0.00107841+ dfl);	FrUpEven.push_back(dfr + -0.00295059);
	F0UpEven.push_back(0.00355948+ df0);	FlUpEven.push_back(-0.00075937+ dfl);	FrUpEven.push_back(dfr + -0.00280011);
	F0UpEven.push_back(0.0015293+ df0);	FlUpEven.push_back(0.00127072+ dfl);	FrUpEven.push_back(dfr + -0.00280002);
	F0UpEven.push_back(0.00165212+ df0);	FlUpEven.push_back(0.00105866+ dfl);	FrUpEven.push_back(dfr + -0.00271079);
	F0UpEven.push_back(0.00549092+ df0);	FlUpEven.push_back(-0.0027231+ dfl);	FrUpEven.push_back(dfr + -0.00276781);
	F0UpEven.push_back(0.00155072+ df0);	FlUpEven.push_back(0.00122174+ dfl);	FrUpEven.push_back(dfr + -0.00277245);
	F0UpEven.push_back(0.00128231+ df0);	FlUpEven.push_back(0.00168034+ dfl);	FrUpEven.push_back(dfr + -0.00296266);
	F0UpEven.push_back(0.00127815+ df0);	FlUpEven.push_back(0.00151678+ dfl);	FrUpEven.push_back(dfr + -0.00279493);
	F0UpEven.push_back(0.00137453+ df0);	FlUpEven.push_back(0.00154931+ dfl);	FrUpEven.push_back(dfr + -0.00292384);
	F0UpEven.push_back(0.000324346+ df0);	FlUpEven.push_back(0.00234128+ dfl);	FrUpEven.push_back(dfr + -0.00266562);
	
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
	cout<<"Combination (MT):"<<endl;
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
	
	
