{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:17:30 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(0.085,-37.0125,0.435,333.1125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hFNegUp = new TH1D("hFNegUp","hFNegUp",200,-1,1);
   hFNegUp->SetBinContent(123,5);
   hFNegUp->SetBinContent(124,28);
   hFNegUp->SetBinContent(125,87);
   hFNegUp->SetBinContent(126,196);
   hFNegUp->SetBinContent(127,282);
   hFNegUp->SetBinContent(128,234);
   hFNegUp->SetBinContent(129,112);
   hFNegUp->SetBinContent(130,46);
   hFNegUp->SetBinContent(131,8);
   hFNegUp->SetBinContent(132,1);
   hFNegUp->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.5905172,0.5527426,0.9281609,0.9113924,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.2666");
   text = ptstats->AddText("RMS   = 0.0145");
   text = ptstats->AddText("Constant = 273.8 ");
   text = ptstats->AddText("Mean     = 0.2665 ");
   text = ptstats->AddText("Sigma    = 0.01453 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hFNegUp->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hFNegUp);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0.12,0.4);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(2.492038);
   PrevFitTMP->SetNDF(7);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,273.7673);
   PrevFitTMP->SetParError(0,10.83094);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.2665417);
   PrevFitTMP->SetParError(1,0.0004622057);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.01453049);
   PrevFitTMP->SetParError(2,0.0003470935);
   PrevFitTMP->SetParLimits(2,0,0.1449757);
   hFNegUp->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hFNegUp->SetLineColor(ci);
   hFNegUp->GetXaxis()->SetRange(113,140);
   hFNegUp->GetXaxis()->SetLabelFont(42);
   hFNegUp->GetXaxis()->SetLabelSize(0.035);
   hFNegUp->GetXaxis()->SetTitleSize(0.035);
   hFNegUp->GetXaxis()->SetTitleFont(42);
   hFNegUp->GetYaxis()->SetLabelFont(42);
   hFNegUp->GetYaxis()->SetLabelSize(0.035);
   hFNegUp->GetYaxis()->SetTitleSize(0.035);
   hFNegUp->GetYaxis()->SetTitleFont(42);
   hFNegUp->GetZaxis()->SetLabelFont(42);
   hFNegUp->GetZaxis()->SetLabelSize(0.035);
   hFNegUp->GetZaxis()->SetTitleSize(0.035);
   hFNegUp->GetZaxis()->SetTitleFont(42);
   hFNegUp->Draw("");
   
   TPaveText *pt = new TPaveText(0.4138506,0.9342405,0.5861494,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("hFNegUp");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
