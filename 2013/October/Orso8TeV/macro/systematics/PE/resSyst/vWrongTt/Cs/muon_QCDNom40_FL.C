{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:38:03 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(0.12375,-37.5802,0.48625,338.2218);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hFNegNominal = new TH1D("hFNegNominal","hFNegNominal",200,-1,1);
   hFNegNominal->SetBinContent(126,2);
   hFNegNominal->SetBinContent(127,17);
   hFNegNominal->SetBinContent(128,84);
   hFNegNominal->SetBinContent(129,194);
   hFNegNominal->SetBinContent(130,275);
   hFNegNominal->SetBinContent(131,242);
   hFNegNominal->SetBinContent(132,138);
   hFNegNominal->SetBinContent(133,44);
   hFNegNominal->SetBinContent(134,3);
   hFNegNominal->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.5948276,0.521097,0.8936782,0.8670886,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.2974");
   text = ptstats->AddText("RMS   = 0.01377");
   text = ptstats->AddText("Constant = 290.3 ");
   text = ptstats->AddText("Mean     = 0.2973 ");
   text = ptstats->AddText("Sigma    = 0.01364 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hFNegNominal->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hFNegNominal);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",0.16,0.45);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(7.501282);
   PrevFitTMP->SetNDF(6);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,290.2774);
   PrevFitTMP->SetParError(0,10.91949);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.2972583);
   PrevFitTMP->SetParError(1,0.0004371378);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.01363859);
   PrevFitTMP->SetParError(2,0.0002778332);
   PrevFitTMP->SetParLimits(2,0,0.1377228);
   hFNegNominal->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hFNegNominal->SetLineColor(ci);
   hFNegNominal->GetXaxis()->SetRange(117,145);
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
