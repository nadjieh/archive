{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Oct 27 11:05:28 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.625,-2.625,0.625,23.625);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *dFL = new TH1D("dFL","dFL",20,-0.5,0.5);
   dFL->SetBinContent(5,2);
   dFL->SetBinContent(6,4);
   dFL->SetBinContent(7,6);
   dFL->SetBinContent(8,5);
   dFL->SetBinContent(9,10);
   dFL->SetBinContent(10,18);
   dFL->SetBinContent(11,20);
   dFL->SetBinContent(12,10);
   dFL->SetBinContent(13,11);
   dFL->SetBinContent(14,10);
   dFL->SetBinContent(15,3);
   dFL->SetBinContent(16,1);
   dFL->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.6422414,0.6708861,0.9798851,0.9367089,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("dFL");
   text->SetTextSize(0.0244557);
   text = ptstats->AddText("Entries = 100    ");
   text = ptstats->AddText("Mean  = 0.008705");
   text = ptstats->AddText("RMS   = 0.1192");
   text = ptstats->AddText("Underflow =      0");
   text = ptstats->AddText("Overflow  =      0");
   text = ptstats->AddText("#chi^{2} / ndf = 8.501 / 9");
   text = ptstats->AddText("Constant = 15.04 ");
   text = ptstats->AddText("Mean     = 0.01408 ");
   text = ptstats->AddText("Sigma    = 0.1232 ");
   ptstats->SetOptStat(111111);
   ptstats->SetOptFit(101);
   ptstats->Draw();
   dFL->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(dFL);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.5,0.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(8.500831);
   PrevFitTMP->SetNDF(9);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,15.03748);
   PrevFitTMP->SetParError(0,2.135492);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.01408168);
   PrevFitTMP->SetParError(1,0.01430104);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.1232035);
   PrevFitTMP->SetParError(2,0.01311625);
   PrevFitTMP->SetParLimits(2,0,1.203121);
   dFL->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   dFL->SetLineColor(ci);
   dFL->GetXaxis()->SetLabelFont(42);
   dFL->GetXaxis()->SetLabelSize(0.035);
   dFL->GetXaxis()->SetTitleSize(0.035);
   dFL->GetXaxis()->SetTitleFont(42);
   dFL->GetYaxis()->SetLabelFont(42);
   dFL->GetYaxis()->SetLabelSize(0.035);
   dFL->GetYaxis()->SetTitleSize(0.035);
   dFL->GetYaxis()->SetTitleFont(42);
   dFL->GetZaxis()->SetLabelFont(42);
   dFL->GetZaxis()->SetLabelSize(0.035);
   dFL->GetZaxis()->SetTitleSize(0.035);
   dFL->GetZaxis()->SetTitleFont(42);
   dFL->Draw("");
   
   TPaveText *pt = new TPaveText(0.4583908,0.94,0.5416092,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("dFL");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
