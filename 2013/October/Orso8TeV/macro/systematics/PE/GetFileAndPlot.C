#include <TFile.h>
#include <TH2.h>
#include <TProfile.h>
#include <TCanvas.h>
#include <TString.h>
using namespace std;
#include <iostream>
void getMyPlot(TString name, TString canv){
	TFile * f= TFile::Open(name);
   TCanvas *c1 = new TCanvas("c", "c",242,131,604,638);
   c1->Range(0.3110345,-0.07230999,1.01908,0.6295608);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.01);
   c1->SetTopMargin(0.04);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
	c1->Divide(1,3);
	c1->cd(1);
	((TH2D*)f->Get("hFinalFNeg"))->ProfileX()->Draw();
	c1->cd(2);
	((TH2D*)f->Get("hFinalF0"))->ProfileX()->Draw();
	c1->cd(3);
	((TH2D*)f->Get("hFinalFPos"))->ProfileX()->Draw();
	c1->SaveAs(canv+".C");
}
