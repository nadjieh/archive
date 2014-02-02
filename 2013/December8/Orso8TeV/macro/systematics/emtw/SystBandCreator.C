#include <string>
#include <iostream>
#include <vector>
#include <TH1.h>
#include <TFile.h>
using namespace std;

std::vector<std::string> SetDirectories(){
	std::vector<std::string> dirs;
	dirs.push_back("btag"); 
	dirs.push_back("ctag"); 
	dirs.push_back("JER"); 
	dirs.push_back("JES"); 
	dirs.push_back("lumi"); 
	dirs.push_back("mass"); 
	dirs.push_back("MET"); 
	dirs.push_back("pu"); 
	dirs.push_back("Q2"); 
	dirs.push_back("ewknorm"); 
	dirs.push_back("qcdnorm"); 
	dirs.push_back("tt");
	dirs.push_back("cwshape");
	dirs.push_back("bwshape");
	dirs.push_back("generator");
	return dirs;
}

std::vector<TH1D*> hists(std::string dname, std::string fname){
	std::vector<TH1D*> ret;
	std::vector<std::string> dirs = SetDirectories();
	cout<<"directory is done "<<dname<<"\t"<<fname<<endl;
	TFile * f = 0;
	for(unsigned int i = 0; i < dirs.size(); i++){
		std::string filename = dname + "/" + dirs[i] + "/All" + fname + ".root";
		f = TFile::Open(filename.c_str());
		TH1D* h = (TH1D*)f->Get("Default_allW/Default_allWcosTheta");
		h->Rebin(10);
		ret.push_back(h);
		cout<<ret[ret.size()-1]->GetName()<<"\t"<<ret[ret.size()-1]->GetXaxis()->GetNbins()<<endl;
	}
	//delete f;
	return ret;
}
TH1D * GetNominal(std::string fname){
	TFile * f = TFile::Open(fname.c_str());
	TH1D * ret = (TH1D*)f->Get("Default_allW/Default_allWcosTheta");
	ret->Rebin(2);
	//delete f;
	return ret;
}
void doJob(std::string name,std::string nominame){
	std::vector<TH1D*> histUp = hists("up","Up");
	std::vector<TH1D*> histDown = hists("down","Down");
	TH1D * nominal = GetNominal(nominame);
	TH1D * h = new TH1D(name.c_str(), name.c_str(), histUp[0]->GetXaxis()->GetNbins(), -1.,1.);
	cout<<"before loop "<<h->GetXaxis()->GetNbins()<<endl;
	for(int iBin = 0; iBin < h->GetXaxis()->GetNbins(); iBin++){
		double sum = 0;
		cout<<"Bin "<<iBin+1<<"\t"<<histDown.size()<<"\t"<<histUp.size()<<endl;
		for(unsigned int i = 0; i < histDown.size(); i++){
			cout<<"---------- file "<< i+1<<"\t"<<histDown[i]<<"\t"<<histUp[i]<<endl;
			cout<<nominal->GetBinContent(iBin + 1)<<"\t"<<histDown[i]->GetXaxis()->GetNbins()<<endl;
			cout<<"\t"<<histUp[i]->GetBinContent(iBin + 1)<<endl;
			cout<<histDown[i]->GetBinContent(iBin + 1); 
			double iDown = fabs(histDown[i]->GetBinContent(iBin + 1) - nominal->GetBinContent(iBin + 1));
			double iUp = fabs(histUp[i]->GetBinContent(iBin + 1) - nominal->GetBinContent(iBin + 1));
			double iAvg = (iUp + iDown)/2.;
			sum+= pow(iAvg,2);
			cout<<iDown<<"\t"<<iUp<<"\t"<<iAvg<<"\t"<<sum<<endl;
		}
		h->SetBinContent(iBin + 1, nominal->GetBinContent(iBin + 1));
		h->SetBinError(iBin + 1, sqrt(sum));
	}
	cout<<"After loop"<<endl;
	TFile * final = new TFile(name.c_str(),"recreate");
	TDirectory * d = final->mkdir("Default_allW");
	h->SetName("Default_allWcosTheta");
	d->cd();
	h->Write();
	final->Close();

}
