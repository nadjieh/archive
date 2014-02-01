{

TFile* fOff = TFile::Open("vOfficial/TreesEle_TChannel_plots.root");
TFile* f1st = TFile::Open("vOwn1stOrder/TreesEle_TChannel_plots.root");
TFile* f2nd = TFile::Open("vOwn2ndOrder/TreesEle_TChannel_plots.root");
TFile* f3rd = TFile::Open("vOwn3rdOrder/TreesEle_TChannel_plots.root");
TFile* fbin = TFile::Open("vOwnBinbybin/TreesEle_TChannel_plots.root");
TFile* fpol = TFile::Open("vOwnPol/TreesEle_TChannel_plots.root");



TProfile * px = ((TH2D*)fpol->Get("hMetXNvtx"))->ProfileX();
px->SetNameTitle("hMetXNvtx","Uncorr.");
px->SetMarkerStyle(20);
px->SetMarkerColor(kBlue+3);
px->SetStats(kFALSE);
/*TProfile * pxOff = ((TH2D*)fOff->Get("hMetXNvtxCorr"))->ProfileX();
pxOff->SetLineColor(kRed);
pxOff->SetMarkerColor(kRed);
pxOff->SetNameTitle("official");*/

TProfile * px1st = ((TH2D*)f1st->Get("hMetXNvtxCorr"))->ProfileX();
px1st->SetLineColor(kGreen+2);
px1st->SetMarkerColor(kGreen+2);
px1st->SetNameTitle("1 itr.","1 itr.");
px1st->SetStats(kFALSE);
TProfile * px2nd = ((TH2D*)f2nd->Get("hMetXNvtxCorr"))->ProfileX();
px2nd->SetLineColor(kBlue);
px2nd->SetMarkerColor(kBlue);
px2nd->SetNameTitle("2 itr.","2 itr.");
px2nd->SetStats(kFALSE);
TProfile * px3rd = ((TH2D*)f3rd->Get("hMetXNvtxCorr"))->ProfileX();
px3rd->SetLineColor(kMagenta);
px3rd->SetMarkerColor(kMagenta);
px3rd->SetNameTitle("3 itr.","3 itr.");
px3rd->SetStats(kFALSE);
TProfile * pxbin = ((TH2D*)fbin->Get("hMetXNvtxCorr"))->ProfileX();
pxbin->SetLineColor(kYellow+2);
pxbin->SetMarkerColor(kYellow+2);
pxbin->SetNameTitle("bin-by-bin","bin-by-bin");
pxbin->SetStats(kFALSE);
TProfile * pxpol = ((TH2D*)fpol->Get("hMetXNvtxCorr"))->ProfileX();
pxpol->SetLineColor(kRed);
pxpol->SetMarkerColor(kRed);
pxpol->SetNameTitle("polyNom","polyNom");
pxpol->SetStats(kFALSE);
TCanvas c1;
c1->cd();

px->Draw();

px1st->Draw("sames");
px2nd->Draw("sames");
px3rd->Draw("sames");
pxbin->Draw("sames");
pxpol->Draw("sames");

c1.SaveAs("metx_t.C");



TProfile * py = ((TH2D*)fpol->Get("hMetYNvtx"))->ProfileX();
py->SetNameTitle("hMetYNvtx","Uncorr.");
py->SetMarkerStyle(20);
py->SetMarkerColor(kBlue+3);
py->SetStats(kFALSE);
/*TProfile * pyOff = ((TH2D*)fOff->Get("hMetYNvtxCorr"))->ProfileX();
pyOff->SetLineColor(kRed);
pyOff->SetMarkerColor(kRed);
pyOff->SetNameTitle("official");*/

TProfile * py1st = ((TH2D*)f1st->Get("hMetYNvtxCorr"))->ProfileX();
py1st->SetLineColor(kGreen+2);
py1st->SetMarkerColor(kGreen+2);
py1st->SetNameTitle("1 itr.Y","1 itr.");
py1st->SetStats(kFALSE);
TProfile * py2nd = ((TH2D*)f2nd->Get("hMetYNvtxCorr"))->ProfileX();
py2nd->SetLineColor(kBlue);
py2nd->SetMarkerColor(kBlue);
py2nd->SetNameTitle("2 itr.Y","2 itr.");
py2nd->SetStats(kFALSE);
TProfile * py3rd = ((TH2D*)f3rd->Get("hMetYNvtxCorr"))->ProfileX();
py3rd->SetLineColor(kMagenta);
py3rd->SetMarkerColor(kMagenta);
py3rd->SetNameTitle("3 itr.Y","3 itr.");
py3rd->SetStats(kFALSE);
TProfile * pybin = ((TH2D*)fbin->Get("hMetYNvtxCorr"))->ProfileX();
pybin->SetLineColor(kYellow+2);
pybin->SetMarkerColor(kYellow+2);
pybin->SetNameTitle("bin-by-binY","bin-by-bin");
pybin->SetStats(kFALSE);
TProfile * pypol = ((TH2D*)fpol->Get("hMetYNvtxCorr"))->ProfileX();
pypol->SetLineColor(kRed);
pypol->SetMarkerColor(kRed);
pypol->SetNameTitle("polyNomY","polyNom");
pypol->SetStats(kFALSE);
TCanvas c2;
c2->cd();

py->Draw();

py1st->Draw("sames");
py2nd->Draw("sames");
py3rd->Draw("sames");
pybin->Draw("sames");
pypol->Draw("sames");

c2.SaveAs("mety_t.C");



}
