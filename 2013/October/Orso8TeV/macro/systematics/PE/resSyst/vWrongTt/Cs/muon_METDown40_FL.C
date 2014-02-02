{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:18:40 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(0.15375,-38.45625,0.51625,346.1063);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hFNegDown = new TH1D("hFNegDown","hFNegDown",200,-1,1);
   hFNegDown->SetBinContent(131,11);
   hFNegDown->SetBinContent(132,50);
   hFNegDown->SetBinContent(133,132);
   hFNegDown->SetBinContent(134,241);
   hFNegDown->SetBinContent(135,293);
   hFNegDown->SetBinContent(136,172);
   hFNegDown->SetBinContent(137,69);
   hFNegDown->SetBinContent(138,27);
   hFNegDown->SetBinContent(139,3);
   hFNegDown->SetBinContent(140,1);
   hFNegDown->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.6063218,0.6012658,0.8908046,0.8881857,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.3421");
   text = ptstats->AddText("RMS   = 0.01441");
   text = ptstats->AddText("Constant =   275 ");
   text = ptstats->AddText("Mean     = 0.3419 ");
   text = ptstats->AddText("Sigma    = 0.01442 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hFNegDown->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hFNegDown);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0.19,0.48);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(6.264059);
   PrevFitTMP->SetNDF(7);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,275.0267);
   PrevFitTMP->SetParError(0,11.12605);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.3419032);
   PrevFitTMP->SetParError(1,0.0004613653);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.01442237);
   PrevFitTMP->SetParError(2,0.0003674678);
   PrevFitTMP->SetParLimits(2,0,0.1440941);
   hFNegDown->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hFNegDown->SetLineColor(ci);
   hFNegDown->GetXaxis()->SetRange(120,148);
   hFNegDown->GetXaxis()->SetLabelFont(42);
   hFNegDown->GetXaxis()->SetLabelSize(0.035);
   hFNegDown->GetXaxis()->SetTitleSize(0.035);
   hFNegDown->GetXaxis()->SetTitleFont(42);
   hFNegDown->GetYaxis()->SetLabelFont(42);
   hFNegDown->GetYaxis()->SetLabelSize(0.035);
   hFNegDown->GetYaxis()->SetTitleSize(0.035);
   hFNegDown->GetYaxis()->SetTitleFont(42);
   hFNegDown->GetZaxis()->SetLabelFont(42);
   hFNegDown->GetZaxis()->SetLabelSize(0.035);
   hFNegDown->GetZaxis()->SetTitleSize(0.035);
   hFNegDown->GetZaxis()->SetTitleFont(42);
   hFNegDown->Draw("");
   
   TPaveText *pt = new TPaveText(0.3901437,0.9342405,0.6098563,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("hFNegDown");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
