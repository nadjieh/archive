{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:21:00 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(0.035875,-32.15625,0.052125,289.4063);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hDFNegDown = new TH1D("hDFNegDown","hDFNegDown",4000,-1,1);
   hDFNegDown->SetBinContent(2083,4);
   hDFNegDown->SetBinContent(2084,13);
   hDFNegDown->SetBinContent(2085,67);
   hDFNegDown->SetBinContent(2086,138);
   hDFNegDown->SetBinContent(2087,199);
   hDFNegDown->SetBinContent(2088,245);
   hDFNegDown->SetBinContent(2089,181);
   hDFNegDown->SetBinContent(2090,88);
   hDFNegDown->SetBinContent(2091,40);
   hDFNegDown->SetBinContent(2092,16);
   hDFNegDown->SetBinContent(2093,7);
   hDFNegDown->SetBinContent(2096,1);
   hDFNegDown->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.6408046,0.6054852,0.8908046,0.8902954,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.04367");
   text = ptstats->AddText("RMS   = 0.0008698");
   text = ptstats->AddText("Constant = 233.1 ");
   text = ptstats->AddText("Mean     = 0.04365 ");
   text = ptstats->AddText("Sigma    = 0.000845 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hDFNegDown->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hDFNegDown);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0.0375,0.0505);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(12.71343);
   PrevFitTMP->SetNDF(9);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,233.0545);
   PrevFitTMP->SetParError(0,9.408709);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.04365427);
   PrevFitTMP->SetParError(1,2.751063e-05);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.0008450359);
   PrevFitTMP->SetParError(2,2.122083e-05);
   PrevFitTMP->SetParLimits(2,0,0.008697849);
   hDFNegDown->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hDFNegDown->SetLineColor(ci);
   hDFNegDown->GetXaxis()->SetRange(2076,2101);
   hDFNegDown->GetXaxis()->SetLabelFont(42);
   hDFNegDown->GetXaxis()->SetLabelSize(0.035);
   hDFNegDown->GetXaxis()->SetTitleSize(0.035);
   hDFNegDown->GetXaxis()->SetTitleFont(42);
   hDFNegDown->GetYaxis()->SetLabelFont(42);
   hDFNegDown->GetYaxis()->SetLabelSize(0.035);
   hDFNegDown->GetYaxis()->SetTitleSize(0.035);
   hDFNegDown->GetYaxis()->SetTitleFont(42);
   hDFNegDown->GetZaxis()->SetLabelFont(42);
   hDFNegDown->GetZaxis()->SetLabelSize(0.035);
   hDFNegDown->GetZaxis()->SetTitleSize(0.035);
   hDFNegDown->GetZaxis()->SetTitleFont(42);
   hDFNegDown->Draw("");
   
   TPaveText *pt = new TPaveText(0.377931,0.9342405,0.622069,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("hDFNegDown");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
