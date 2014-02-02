#include <TMath.h>
#include <TF1.h>
#include <TH1.h>
#include <TFile.h>
#include <TList.h>
#include <TDirectory.h>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

double MyFunc (double *x, double *p ) { 
   return TMath::Gaus(x[0],p[0],p[1] );
}

 /*--------------------------------------------------------------------*/
 Double_t myGauss(Double_t *x, Double_t *par)
 /*--------------------------------------------------------------------*/
 {
//par[0]: mean
//par[1]: sigma
//par[2]: normalization
	Double_t coeff = (double)par[2]/(double)sqrt(2 * M_PI * par[1]);
	Double_t power = (-1)*(double)((x[0]-par[0])*(x[0]-par[0]))/(double)(2*par[1]*par[1]);
	return (coeff*exp(power));
 }

void singleFit(TH1* h, double& mean, double& sigma, double& norm){
 TF1 *f = new TF1("f",myGauss, 0, 1 ,3);

 Double_t par[3];
 par[0] = mean;
 par[1] = sigma;
 par[2] = norm;

 f->SetParameters(par);
 h->Fit("gaus", "RBQ");
 TF1 *gaus = h->GetFunction("gaus");
 norm = gaus->GetParameter(2);
 sigma = gaus->GetParameter(1);
 mean = gaus->GetParameter(0);
 delete f;
 delete gaus;
}

void singleFitErr(TH1* h, double& mean, double& sigma, double& norm){
 TF1 *f = new TF1("ferr",myGauss, -0.2, 0.2 ,3);

 Double_t par[3];
 par[0] = mean;
 par[1] = sigma;
 par[2] = norm;

 f->SetParameters(par);
 h->Fit("gaus", "RBQ");
 TF1 *gaus = h->GetFunction("gaus");
 norm = gaus->GetParameter(2);
 sigma = gaus->GetParameter(1);
 mean = gaus->GetParameter(0);
 delete f;
 delete gaus;
}
void dirFit(TDirectory * d, string unc){
	std::cout.setf(std::ios::fixed);
	std::cout.precision(3);
	TList * l = d->GetListOfKeys();
	cout<<"\t\t| *"<<unc<<"* ";
    for(int i = 0; i < l->GetSize(); i++){
		TH1* h = (TH1*)d->Get(l->At(i)->GetName());
	    double sigma = 0.01;
	    double mean = 0;
	    double norm = 999;
	    double sigma2 = 0.001;
	    double mean2 = 0.0;
	    double norm2 = 999;
		if(string(d->GetName()) == "FNeg")
			mean = 0.3;
		if(string(d->GetName()) == "F0")
			mean = 0.7;
		if(string(d->GetName()) == "FPos")
			mean = 0.0001;
		if(i < 3){
			singleFit(h, mean, sigma, norm);
			cout<< "|"<<mean <<" +- "<< sigma ;
			continue;
		} else {
			singleFitErr(h, mean2, sigma2, norm2);
			cout<< "|"<<mean2 <<" +- "<< sigma2 ;
		}
		delete h;
    }
	cout<<"|"<<endl;
}

void doPolFit(std::vector<TFile*> fs, std::vector<string> uncs, string F){
	cout<<"\t\t| *syst source* | *up* | *down* | *nominal* | *Dup* | *Ddown* | *Davg* |"<<endl;
	for(unsigned int i = 1; i < 2/*uncs.size()*/; i++){
		TDirectory * d = (TDirectory*)fs[i]->Get(F.c_str());
		dirFit(d, uncs[i]);
	}
}

void doChannelJetPt(std::string channel, std::string jetpt){
	std::vector<string> unc;
	unc.push_back("JES");
	unc.push_back("MET");
	unc.push_back("Q2");
	unc.push_back("QCD");
	std::vector<TFile*> files;
	for(unsigned int i = 0; i < unc.size(); i++)
		files.push_back(TFile::Open(string(channel+"_"+unc[i]+jetpt+".root").c_str()));
    cout<<"- "<<channel<<endl;
	cout<<"\t- *FNeg*"<<endl;
	doPolFit(files,unc, "FNeg");
	cout<<"\n\t- *F0*"<<endl;
	doPolFit(files,unc, "F0");
	cout<<"\n\t- *FPos*"<<endl;
	doPolFit(files,unc, "FPos");
	cout<<"\n\n\n"<<endl;
	for(unsigned int i = 0; i < unc.size(); i++)
		delete files[i];
}

void doFitJob(){
	doChannelJetPt("muon", "40");
   // doChannelJetPt("muon", "60");
//	cout<<"---------------------------------------------------------"<<endl;
	//doChannelJetPt("electron", "40");
	//doChannelJetPt("electron", "60");
}

int main(){
	doFitJob();
	return 1;
}
