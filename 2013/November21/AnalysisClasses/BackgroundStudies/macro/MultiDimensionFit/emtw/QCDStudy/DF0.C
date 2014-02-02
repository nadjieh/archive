{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Oct 27 11:04:45 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.625,-1.96875,0.625,17.71875);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *dFZ = new TH1D("dFZ","dFZ",20,-0.5,0.5);
   dFZ->SetBinContent(0,2);
   dFZ->SetBinContent(2,4);
   dFZ->SetBinContent(3,3);
   dFZ->SetBinContent(4,4);
   dFZ->SetBinContent(5,4);
   dFZ->SetBinContent(6,6);
   dFZ->SetBinContent(7,6);
   dFZ->SetBinContent(8,6);
   dFZ->SetBinContent(9,7);
   dFZ->SetBinContent(10,8);
   dFZ->SetBinContent(11,15);
   dFZ->SetBinContent(12,8);
   dFZ->SetBinContent(13,10);
   dFZ->SetBinContent(14,3);
   dFZ->SetBinContent(15,1);
   dFZ->SetBinContent(16,4);
   dFZ->SetBinContent(17,3);
   dFZ->SetBinContent(18,2);
   dFZ->SetBinContent(19,2);
   dFZ->SetBinContent(21,2);
   dFZ->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.7787356,0.7763713,0.9798851,0.9367089,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("dFZ");
   text->SetTextSize(0.02107294);
   text = ptstats->AddText("Entries = 100    ");
   text = ptstats->AddText("Mean  = -0.02448");
   text = ptstats->AddText("RMS   = 0.2043");
   text = ptstats->AddText("Underflow =      2");
   text = ptstats->AddText("Overflow  =      2");
   text = ptstats->AddText("#chi^{2} / ndf = 16.58 / 15");
   ptstats->SetOptStat(111111);
   ptstats->SetOptFit(100);
   ptstats->Draw();
   dFZ->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(dFZ);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.5,0.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(16.58002);
   PrevFitTMP->SetNDF(15);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,7.434441);
   PrevFitTMP->SetParError(0,1.306765);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,-0.07426336);
   PrevFitTMP->SetParError(1,0.03252096);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.2262486);
   PrevFitTMP->SetParError(2,0.04177169);
   PrevFitTMP->SetParLimits(2,0,2.053319);
   dFZ->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   dFZ->SetLineColor(ci);
   dFZ->GetXaxis()->SetLabelFont(42);
   dFZ->GetXaxis()->SetLabelSize(0.035);
   dFZ->GetXaxis()->SetTitleSize(0.035);
   dFZ->GetXaxis()->SetTitleFont(42);
   dFZ->GetYaxis()->SetLabelFont(42);
   dFZ->GetYaxis()->SetLabelSize(0.035);
   dFZ->GetYaxis()->SetTitleSize(0.035);
   dFZ->GetYaxis()->SetTitleFont(42);
   dFZ->GetZaxis()->SetLabelFont(42);
   dFZ->GetZaxis()->SetLabelSize(0.035);
   dFZ->GetZaxis()->SetTitleSize(0.035);
   dFZ->GetZaxis()->SetTitleFont(42);
   dFZ->Draw("");
   
   TPaveText *pt = new TPaveText(0.4583908,0.94,0.5416092,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("dFZ");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
