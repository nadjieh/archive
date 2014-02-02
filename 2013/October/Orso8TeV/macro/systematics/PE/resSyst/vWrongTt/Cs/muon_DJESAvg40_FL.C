{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:15:24 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(0.018,-61.71714,0.028,555.4542);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hDFNegAvg = new TH1D("hDFNegAvg","hDFNegAvg",4000,-1,1);
   hDFNegAvg->SetBinContent(2044,20);
   hDFNegAvg->SetBinContent(2045,225);
   hDFNegAvg->SetBinContent(2046,469);
   hDFNegAvg->SetBinContent(2047,246);
   hDFNegAvg->SetBinContent(2048,37);
   hDFNegAvg->SetBinContent(2049,2);
   hDFNegAvg->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.612069,0.6160338,0.8692529,0.8691983,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.02278");
   text = ptstats->AddText("RMS   = 0.0004225");
   text = ptstats->AddText("Constant = 471.4 ");
   text = ptstats->AddText("Mean     = 0.02278 ");
   text = ptstats->AddText("Sigma    = 0.0004221 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hDFNegAvg->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hDFNegAvg);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0.019,0.027);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(2.266597);
   PrevFitTMP->SetNDF(3);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,471.384);
   PrevFitTMP->SetParError(0,18.45351);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.0227796);
   PrevFitTMP->SetParError(1,1.353098e-05);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.0004220636);
   PrevFitTMP->SetParError(2,9.78689e-06);
   PrevFitTMP->SetParLimits(2,0,0.004224894);
   hDFNegAvg->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hDFNegAvg->SetLineColor(ci);
   hDFNegAvg->GetXaxis()->SetRange(2039,2054);
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
