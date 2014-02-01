#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TCanvas.h"
#include "TString.h"  
#include "TLegend.h" 
#include "TLatex.h" 
#include "TPaveStats.h" 
#include "TROOT.h" 
#include "TStyle.h" 
using namespace std;
std::pair<TH1*, TH1*> DrawPlots(TH1* h1, TH1* h2, TString name){
	h1->SetLineColor(kRed);
	h2->SetLineColor(kBlue);
//	TCanvas	c;
//	c.cd();
//	h1->DrawNormalized();
// 	h2->DrawNormalized("sames");
//	c.SaveAs(name+".C");
	return make_pair(h1,h2);
}

std::pair<TH1*, TH1*> DrawPlots2D(TH2* h1, TH2* h2, TString name, TString proj){
	TH1 * h1p = 0;
	TH1 * h2p = 0;
	if(proj == "X"){
		h1p = h1->ProjectionX("h1X");
		h2p = h2->ProjectionX("h2X");
		h1p->Rebin(100);
		h2p->Rebin(100);
	} else if(proj == "Y") {
		h1p = h1->ProjectionY("h1Y");
		h2p = h2->ProjectionY("h2Y");
	}
	h1p->SetLineColor(kRed);
	h2p->SetLineColor(kBlue);
	h1p->Sumw2();
   	h2p->Sumw2();
	return make_pair(h1p,h2p);
/*	TCanvas	c;
	c.cd();
	h1p->DrawNormalized();
   	h2p->DrawNormalized("sames");
	c.SaveAs(name+".C");
	delete h1p;
	delete h2p;*/
}

std::pair<TH1*, TH1*> DrawPlots3D(TH3* h1, TH3* h2, TString name){
	TH1 * h1p = 0;
	TH1 * h2p = 0;
	h1p = h1->ProjectionZ("h13");
	h2p = h2->ProjectionZ("h23");
	h1p->Rebin(10);
	h2p->Rebin(10);
	h1p->SetLineColor(kRed);
	h2p->SetLineColor(kBlue);
	return make_pair(h1p,h2p);
	/*TCanvas	c;
	c.cd();
	h1p->Sumw2();
   	h2p->Sumw2();
	h1p->DrawNormalized();
   	h2p->DrawNormalized("sames");
	c.SaveAs(name+".C");*/
}

TH3* GetThreeD(TFile * f){
	return (TH3*)f->Get("Default_allW/Default_allWcosTheta3D");
}
TH2* GetTwoD(TFile * f){
	return (TH2*)f->Get("Default_allW/Default_allWcosTheta2D");
}

TH1* GetOneD(TFile * f){
	return (TH1*)f->Get("Default_allW/Default_allWcosTheta");
}

TH1* GetTopMass(TFile * f){
	return (TH1*)f->Get("Default_allW/Default_allW_topMass");
}

TH1* GetWMass(TFile * f){
	return (TH1*)f->Get("Default_allW/Default_allW_Wmass");
}
TH1* GetMT(TFile * f){
	return (TH1*)f->Get("allW_finalMT");
}

void DrawMine(std::pair<TH1*,TH1*> h,TCanvas *canvas, TString NAME){
   double max = -999.;
   if( h.first->GetMaximum()>h.second->GetMaximum() ) 
		max = h.first->GetMaximum();
   else
		max = h.second->GetMaximum();
   h.first->SetMaximum(max*1.3);

   h.first->SetLineWidth(3);
   h.first->Draw("eh");

   //h.second->SetMarkerStyle(23);
   //h.second->SetMarkerSize(2);
   h.second->SetLineWidth(3);
   h.second->Draw("esames");

   gPad->Update();
   TPaveStats* stats1 = (TPaveStats*)gPad->GetPrimitive("stats");
   Double_t coords[4];
   coords[0] = stats1->GetX1NDC();
   coords[1] = stats1->GetX2NDC();
   coords[2] = stats1->GetY1NDC();
   coords[3] = stats1->GetY2NDC();
   stats1->Draw();
   gPad->Update();

   TPaveStats* stats2 =(TPaveStats*)gPad->GetPrimitive("stats");  
   stats2->SetX1NDC(coords[0]);
   stats2->SetX2NDC(coords[1]);
   stats2->SetY1NDC(2 * coords[2] - coords[3]);
   stats2->SetY2NDC(coords[2]);
   stats2->SetTextColor(kBlue);
   stats2->Draw();
   gPad->Update();
   

   gPad->Update();
   TLatex* text_norm = new TLatex(0.92, 0.43, "Normalized to Unity");
   text_norm->SetTextAngle(270);  
   text_norm->SetNDC(true);
   text_norm->SetTextFont(42);
   text_norm->SetTextSize(0.04); 
   text_norm->Draw("same");
   TLegend *tleg = new TLegend(0.35,0.75,0.5,0.89);
   tleg->SetTextSize(0.045);
   tleg->SetBorderSize(0);
   tleg->SetFillColor(10);
   tleg->AddEntry(h.second, "ele" , "lp");
   tleg->AddEntry(h.first, "mu" , "le");
   tleg->Draw("same");
   canvas->Print(NAME + ".ps");	
   //canvas->SaveAs(NAME + ".C");	
}

void MakeComparisons(TString muname, TString ename, TString outDir, TString name, bool do3 = false){
	TFile * fMu = TFile::Open(muname);
	TFile * fE = TFile::Open(ename);
    gROOT->SetStyle("Plain");
    gStyle->SetOptStat(1);
	TString NAME = outDir+ "/" + name ;
	TCanvas *c= new TCanvas("c","c",10,10,800,600);
	c->Print(NAME + ".ps["); 
	if(do3){
		TH3* Mu3 = GetThreeD(fMu);
		TH3* E3 = GetThreeD(fE);
		std::pair<TH1*, TH1*> h = DrawPlots3D(Mu3, E3, NAME);
		h.first->SetTitle(name);
		h.second->SetTitle(name);
		DrawMine(h, c, NAME);
		/*delete Mu3;
		delete E3;
		delete h.first;
		delete h.second;*/
	}
	TH2* Mu2 = GetTwoD(fMu);
	TH2* E2 = GetTwoD(fE);
   	//TString NAME = outDir+ "/" + name + "_rec";
	std::pair<TH1*,TH1*> h2 = DrawPlots2D(Mu2, E2, NAME, "Y");
	h2.first->SetTitle(name);
	h2.second->SetTitle(name);
	DrawMine(h2, c, NAME);
	/*delete Mu2;
	delete E2;
	delete h2.first;
	delete h2.second;
	delete c;*/
/*
   	NAME = outDir+ "/" + name + "_gen";
	DrawPlots2D(Mu2, E2, NAME, "X");
   	NAME = outDir+ "/" + name + "_bkgCosTheta";	
	DrawPlots(GetOneD(fMu), GetOneD(fE), NAME);
   	NAME = outDir+ "/" + name + "_topMass";	
	DrawPlots(GetTopMass(fMu), GetTopMass(fE), NAME);
   	NAME = outDir+ "/" + name + "_MT";	
	DrawPlots(GetMT(fMu), GetMT(fE), NAME);
   	NAME = outDir+ "/" + name + "_WMass";	
	DrawPlots(GetWMass(fMu), GetWMass(fE), NAME);*/
}

void doJob(){
	TString dirE = "/home/nadjieh/work/Orso8TeV/macro/forAdding/emtw/TreesEle_";
	TString dirMu = "/home/nadjieh/work/Orso8TeV/macro/forAdding/TreesMu_";
	TString end = "_plots.root";
	MakeComparisons(dirMu+"dimu_TTBar"+end, dirE+"die_TTBar"+end, "tt", "diL", true);
	/*MakeComparisons(dirMu+"muhad_TTBar"+end, dirE+"ehad_TTBar"+end, "tt", "Lhad", true);
	MakeComparisons(dirMu+"mue_TTBar"+end, dirE+"mue_TTBar"+end, "tt", "ME", true);
	MakeComparisons(dirMu+"mutau_TTBar"+end, dirE+"etau_TTBar"+end, "tt", "Ltau", true);
	MakeComparisons(dirMu+"disemitau_TTBar"+end, dirE+"disemitau_TTBar"+end, "tt", "resttau", true);

	MakeComparisons(dirMu+"TWChannel"+end, dirE+"TWChannel"+end, "tWchan", "t");
	MakeComparisons(dirMu+"TbarWChannel"+end, dirE+"TbarWChannel"+end, "tWchan", "tbar");

	MakeComparisons(dirMu+"TChannel"+end, dirE+"TChannel"+end, "tchan", "t");
	MakeComparisons(dirMu+"TbarChannel"+end, dirE+"TbarChannel"+end, "tchan", "tbar");*/

}



