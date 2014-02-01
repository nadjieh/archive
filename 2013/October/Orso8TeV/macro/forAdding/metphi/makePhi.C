#include <vector>
#include <iostream>
int makePhi(){

TFile* fOff = TFile::Open("vOfficial/TreesEle_TChannel_plots.root");
TFile* f1st = TFile::Open("vOwn1stOrder/TreesEle_TChannel_plots.root");
TFile* f2nd = TFile::Open("vOwn2ndOrder/TreesEle_TChannel_plots.root");
TFile* f3rd = TFile::Open("vOwn3rdOrder/TreesEle_TChannel_plots.root");
TFile* fbin = TFile::Open("vOwnBinbybin/TreesEle_TChannel_plots.root");
TFile* fpol = TFile::Open("vOwnPol/TreesEle_TChannel_plots.root");

std::vector<TH1D*> hists;

TH1D * px = ((TH1D*)fpol->Get("hMetPhi"));
px->SetNameTitle("hMetPhi","Uncorr.");
//px->SetMarkerStyle(20);
//px->SetMarkerColor(kBlue+3);
px->SetStats(kFALSE);
hists.push_back(px);

TH1D * pxOff = ((TH1D*)fOff->Get("hMetPhi"));
pxOff->SetLineColor(kYellow);
pxOff->SetMarkerColor(kYellow);
pxOff->SetNameTitle("official","official");
pxOff->SetStats(kFALSE);
hists.push_back(pxOff);

TH1D * px1st = ((TH1D*)f1st->Get("hMetphiCorr"));
px1st->SetLineColor(kGreen+2);
px1st->SetMarkerColor(kGreen+2);
px1st->SetNameTitle("itr1","1 itr.");
px1st->SetStats(kFALSE);
hists.push_back(px1st);

TH1D * px2nd = ((TH1D*)f2nd->Get("hMetphiCorr"));
px2nd->SetLineColor(kBlue);
px2nd->SetMarkerColor(kBlue);
px2nd->SetNameTitle("itr2","2 itr.");
px2nd->SetStats(kFALSE);
hists.push_back(px2nd);

TH1D * px3rd = ((TH1D*)f3rd->Get("hMetphiCorr"));
px3rd->SetLineColor(kMagenta);
px3rd->SetMarkerColor(kMagenta);
px3rd->SetNameTitle("itr3","3 itr.");
px3rd->SetStats(kFALSE);
hists.push_back(px3rd);

TH1D * pxbin = ((TH1D*)fbin->Get("hMetphiCorr"));
pxbin->SetLineColor(kYellow+2);
pxbin->SetMarkerColor(kYellow+2);
pxbin->SetNameTitle("bin_by_bin","bin-by-bin");
pxbin->SetStats(kFALSE);
hists.push_back(pxbin);

TH1D * pxpol = ((TH1D*)fpol->Get("hMetphiCorr"));
pxpol->SetLineColor(kRed);
pxpol->SetMarkerColor(kRed);
pxpol->SetNameTitle("polyNom","polyNom");
pxpol->SetStats(kFALSE);
hists.push_back(pxpol);
TCanvas c1;
c1->cd();
hists[2]->Rebin(4);
hists[2]->Draw();
for(unsigned int i = 3; i < hists.size(); i++){
hists[i]->Rebin(4);
hists[i]->Draw("sames");
}
hists[0]->Rebin(4);
hists[0]->SetLineWidth(2);
hists[0]->Draw("sames");
hists[1]->Rebin(4);
hists[1]->SetLineWidth(2);
hists[1]->Draw("sames");
std::cout<<"---"<<std::endl;
c1.SaveAs("phi_t.C");

return 1;


}
