{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:36:57 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.0525,-42.18157,0.4725,379.6341);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hFNegDown = new TH1D("hFNegDown","hFNegDown",200,-1,1);
   hFNegDown->SetBinContent(120,1);
   hFNegDown->SetBinContent(121,10);
   hFNegDown->SetBinContent(122,86);
   hFNegDown->SetBinContent(123,218);
   hFNegDown->SetBinContent(124,307);
   hFNegDown->SetBinContent(125,256);
   hFNegDown->SetBinContent(126,101);
   hFNegDown->SetBinContent(127,20);
   hFNegDown->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.6077586,0.57173,0.8893678,0.8839662,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.2359");
   text = ptstats->AddText("RMS   = 0.01225");
   text = ptstats->AddText("Constant = 322.7 ");
   text = ptstats->AddText("Mean     = 0.2361 ");
   text = ptstats->AddText("Sigma    = 0.01234 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hFNegDown->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hFNegDown);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0,0.42);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(3.688599);
   PrevFitTMP->SetNDF(5);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,322.6641);
   PrevFitTMP->SetParError(0,12.35564);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.2361002);
   PrevFitTMP->SetParError(1,0.0003972938);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.01233607);
   PrevFitTMP->SetParError(2,0.0002715225);
   PrevFitTMP->SetParLimits(2,0,0.1225013);
   hFNegDown->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hFNegDown->SetLineColor(ci);
   hFNegDown->GetXaxis()->SetRange(101,142);
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
