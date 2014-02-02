{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:35:47 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.15875,-40.46333,0.52875,364.17);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hFNegUp = new TH1D("hFNegUp","hFNegUp",200,-1,1);
   hFNegUp->SetBinContent(121,1);
   hFNegUp->SetBinContent(122,16);
   hFNegUp->SetBinContent(123,92);
   hFNegUp->SetBinContent(124,217);
   hFNegUp->SetBinContent(125,299);
   hFNegUp->SetBinContent(126,240);
   hFNegUp->SetBinContent(127,111);
   hFNegUp->SetBinContent(128,23);
   hFNegUp->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.670977,0.5696203,0.8922414,0.8860759,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = 0.2458");
   text = ptstats->AddText("RMS   = 0.01277");
   text = ptstats->AddText("Constant = 309.2 ");
   text = ptstats->AddText("Mean     = 0.246 ");
   text = ptstats->AddText("Sigma    = 0.0129 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hFNegUp->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hFNegUp);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.09,0.46);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(2.93153);
   PrevFitTMP->SetNDF(5);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,309.1528);
   PrevFitTMP->SetParError(0,11.78291);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.2459633);
   PrevFitTMP->SetParError(1,0.0004185578);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.01289931);
   PrevFitTMP->SetParError(2,0.0002825056);
   PrevFitTMP->SetParLimits(2,0,0.1277318);
   hFNegUp->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hFNegUp->SetLineColor(ci);
   hFNegUp->GetXaxis()->SetRange(92,146);
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
