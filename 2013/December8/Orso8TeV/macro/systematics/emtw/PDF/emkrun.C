/*#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;*/

{
	TString p1 = "./Syst2J1T dirName TreesEle dopdf ";
	TString p2 = " input ";
	TString p3 = " METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  emtw yes stack yes ";
	TString p4 = " > TreesEle_";
	TString p5 = ".txt\n";
    TString p7 = " input TTBar ";
    std::vector<TString> names;
    /*names.push_back("WW");
    names.push_back("WZ");
    names.push_back("ZZ");
    names.push_back("ZJets");*/
    names.push_back("SbarChannel");
    names.push_back("SChannel");
    names.push_back("TbarChannel");
    names.push_back("TChannel");
    names.push_back("TbarWChannel");
    names.push_back("TWChannel");
    std::vector<TString> prefix;
    prefix.push_back(" prefix dimu ");
    prefix.push_back(" prefix die ");
    prefix.push_back(" prefix mue ");
    prefix.push_back(" prefix mutau ");
    prefix.push_back(" prefix etau ");
    prefix.push_back(" prefix ehad ");
    prefix.push_back(" prefix muhad ");
    prefix.push_back(" prefix disemitau ");
	for(int s = 1; s < 53; s++){
		stringstream p;
		p<<"ele"<<s<<"/erun_top.sh";
		ofstream myfile;
		myfile.open(p.str().c_str(),ios::out);
	    for(unsigned int i = 0; i < names.size(); i++){
			myfile<<p1<<s<<p2<<names[i]<<p3<<endl;
    	}

	    for(unsigned int i = 0; i < prefix.size(); i++){
			myfile<<p1<<s<<prefix[i]<<p7<<p3;
			if(prefix[i] == " prefix etau ")
				myfile<<" ttDecayMode etau ";
			if(prefix[i] == " prefix mue ")
				myfile<<" ttDecayMode mue ";
			if(prefix[i] == " prefix die ")
				myfile<<" ttDecayMode die ";
			myfile<<endl;
    	}
		myfile.close();
	}
}
