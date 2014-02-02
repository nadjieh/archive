{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:13:04 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",50,74,525,500);
   Canvas_1->Range(-0.054375,-20.60625,-0.020625,185.4563);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hDFNegUp = new TH1D("hDFNegUp","hDFNegUp",4000,-1,1);
   hDFNegUp->SetBinContent(1917,1);
   hDFNegUp->SetBinContent(1918,2);
   hDFNegUp->SetBinContent(1919,2);
   hDFNegUp->SetBinContent(1920,2);
   hDFNegUp->SetBinContent(1921,9);
   hDFNegUp->SetBinContent(1922,22);
   hDFNegUp->SetBinContent(1923,49);
   hDFNegUp->SetBinContent(1924,56);
   hDFNegUp->SetBinContent(1925,78);
   hDFNegUp->SetBinContent(1926,136);
   hDFNegUp->SetBinContent(1927,157);
   hDFNegUp->SetBinContent(1928,133);
   hDFNegUp->SetBinContent(1929,120);
   hDFNegUp->SetBinContent(1930,96);
   hDFNegUp->SetBinContent(1931,67);
   hDFNegUp->SetBinContent(1932,38);
   hDFNegUp->SetBinContent(1933,12);
   hDFNegUp->SetBinContent(1934,15);
   hDFNegUp->SetBinContent(1935,3);
   hDFNegUp->SetBinContent(1937,1);
   hDFNegUp->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.5834933,0.6059322,0.8944338,0.8855932,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = -0.03652");
   text = ptstats->AddText("RMS   = 0.001402");
   text = ptstats->AddText("Constant = 143.2 ");
   text = ptstats->AddText("Mean     = -0.03651 ");
   text = ptstats->AddText("Sigma    = 0.001362 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hDFNegUp->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hDFNegUp);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.051,-0.024);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(22.07961);
   PrevFitTMP->SetNDF(17);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,143.2134);
   PrevFitTMP->SetParError(0,5.734048);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,-0.03651078);
   PrevFitTMP->SetParError(1,4.385289e-05);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.00136236);
   PrevFitTMP->SetParError(2,3.317289e-05);
   PrevFitTMP->SetParLimits(2,0,0.01401727);
   hDFNegUp->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hDFNegUp->SetLineColor(ci);
   hDFNegUp->GetXaxis()->SetRange(1899,1952);
   hDFNegUp->GetXaxis()->SetLabelFont(42);
   hDFNegUp->GetXaxis()->SetLabelSize(0.035);
   hDFNegUp->GetXaxis()->SetTitleSize(0.035);
   hDFNegUp->GetXaxis()->SetTitleFont(42);
   hDFNegUp->GetYaxis()->SetLabelFont(42);
   hDFNegUp->GetYaxis()->SetLabelSize(0.035);
   hDFNegUp->GetYaxis()->SetTitleSize(0.035);
   hDFNegUp->GetYaxis()->SetTitleFont(42);
   hDFNegUp->GetZaxis()->SetLabelFont(42);
   hDFNegUp->GetZaxis()->SetLabelSize(0.035);
   hDFNegUp->GetZaxis()->SetTitleSize(0.035);
   hDFNegUp->GetZaxis()->SetTitleFont(42);
   hDFNegUp->Draw("");
   
   TPaveText *pt = new TPaveText(0.3709981,0.9339831,0.6290019,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("hDFNegUp");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
