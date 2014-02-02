{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:10:19 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(0.10375,-36.80768,0.46625,331.2691);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hFNegNominal = new TH1D("hFNegNominal","hFNegNominal",200,-1,1);
   hFNegNominal->SetBinContent(125,1);
   hFNegNominal->SetBinContent(126,4);
   hFNegNominal->SetBinContent(127,15);
   hFNegNominal->SetBinContent(128,73);
   hFNegNominal->SetBinContent(129,209);
   hFNegNominal->SetBinContent(130,265);
   hFNegNominal->SetBinContent(131,249);
   hFNegNominal->SetBinContent(132,135);
   hFNegNominal->SetBinContent(133,39);
   hFNegNominal->SetBinContent(134,8);
   hFNegNominal->SetBinContent(135,1);
   hFNegNominal->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.6278736,0.5843882,0.8965517,0.8839662,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.2975");
   text = ptstats->AddText("RMS   = 0.01399");
   text = ptstats->AddText("Constant = 285.5 ");
   text = ptstats->AddText("Mean     = 0.2976 ");
   text = ptstats->AddText("Sigma    = 0.01389 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hFNegNominal->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hFNegNominal);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0.14,0.43);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(4.983931);
   PrevFitTMP->SetNDF(8);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,285.4808);
   PrevFitTMP->SetParError(0,11.12195);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.2976223);
   PrevFitTMP->SetParError(1,0.0004410282);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.01389175);
   PrevFitTMP->SetParError(2,0.0003145988);
   PrevFitTMP->SetParLimits(2,0,0.139871);
   hFNegNominal->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hFNegNominal->SetLineColor(ci);
   hFNegNominal->GetXaxis()->SetRange(115,143);
   hFNegNominal->GetXaxis()->SetLabelFont(42);
   hFNegNominal->GetXaxis()->SetLabelSize(0.035);
   hFNegNominal->GetXaxis()->SetTitleSize(0.035);
   hFNegNominal->GetXaxis()->SetTitleFont(42);
   hFNegNominal->GetYaxis()->SetLabelFont(42);
   hFNegNominal->GetYaxis()->SetLabelSize(0.035);
   hFNegNominal->GetYaxis()->SetTitleSize(0.035);
   hFNegNominal->GetYaxis()->SetTitleFont(42);
   hFNegNominal->GetZaxis()->SetLabelFont(42);
   hFNegNominal->GetZaxis()->SetLabelSize(0.035);
   hFNegNominal->GetZaxis()->SetTitleSize(0.035);
   hFNegNominal->GetZaxis()->SetTitleFont(42);
   hFNegNominal->Draw("");
   
   TPaveText *pt = new TPaveText(0.3693103,0.9342405,0.6306897,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("hFNegNominal");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
