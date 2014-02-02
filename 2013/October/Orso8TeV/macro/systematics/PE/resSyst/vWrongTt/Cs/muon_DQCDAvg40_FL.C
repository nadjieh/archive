{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:42:10 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(0.03375,-17.74361,0.08125,159.6925);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hDFNegAvg = new TH1D("hDFNegAvg","hDFNegAvg",4000,-1,1);
   hDFNegAvg->SetBinContent(2105,3);
   hDFNegAvg->SetBinContent(2107,10);
   hDFNegAvg->SetBinContent(2108,17);
   hDFNegAvg->SetBinContent(2109,46);
   hDFNegAvg->SetBinContent(2110,77);
   hDFNegAvg->SetBinContent(2111,96);
   hDFNegAvg->SetBinContent(2112,112);
   hDFNegAvg->SetBinContent(2113,125);
   hDFNegAvg->SetBinContent(2114,124);
   hDFNegAvg->SetBinContent(2115,131);
   hDFNegAvg->SetBinContent(2116,105);
   hDFNegAvg->SetBinContent(2117,68);
   hDFNegAvg->SetBinContent(2118,43);
   hDFNegAvg->SetBinContent(2119,24);
   hDFNegAvg->SetBinContent(2120,12);
   hDFNegAvg->SetBinContent(2121,4);
   hDFNegAvg->SetBinContent(2122,1);
   hDFNegAvg->SetBinContent(2124,1);
   hDFNegAvg->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.6020115,0.57173,0.8663793,0.8670886,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.05654");
   text = ptstats->AddText("RMS   = 0.001435");
   text = ptstats->AddText("Constant = 136.8 ");
   text = ptstats->AddText("Mean     = 0.05652 ");
   text = ptstats->AddText("Sigma    = 0.00145 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hDFNegAvg->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hDFNegAvg);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0.0385,0.0765);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(10.43398);
   PrevFitTMP->SetNDF(15);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,136.8385);
   PrevFitTMP->SetParError(0,5.291562);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.05652419);
   PrevFitTMP->SetParError(1,4.755886e-05);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.001450129);
   PrevFitTMP->SetParError(2,3.343588e-05);
   PrevFitTMP->SetParLimits(2,0,0.01435227);
   hDFNegAvg->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hDFNegAvg->SetLineColor(ci);
   hDFNegAvg->GetXaxis()->SetRange(2078,2153);
   hDFNegAvg->GetXaxis()->SetLabelFont(42);
   hDFNegAvg->GetXaxis()->SetLabelSize(0.035);
   hDFNegAvg->GetXaxis()->SetTitleSize(0.035);
   hDFNegAvg->GetXaxis()->SetTitleFont(42);
   hDFNegAvg->GetYaxis()->SetLabelFont(42);
   hDFNegAvg->GetYaxis()->SetLabelSize(0.035);
   hDFNegAvg->GetYaxis()->SetTitleSize(0.035);
   hDFNegAvg->GetYaxis()->SetTitleFont(42);
   hDFNegAvg->GetZaxis()->SetLabelFont(42);
   hDFNegAvg->GetZaxis()->SetLabelSize(0.035);
   hDFNegAvg->GetZaxis()->SetTitleSize(0.035);
   hDFNegAvg->GetZaxis()->SetTitleFont(42);
   hDFNegAvg->Draw("");
   
   TPaveText *pt = new TPaveText(0.3930172,0.9342405,0.6069828,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("hDFNegAvg");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
