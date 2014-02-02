{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:39:35 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.071625,-21.56001,-0.030375,194.0401);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hDFNegUp = new TH1D("hDFNegUp","hDFNegUp",4000,-1,1);
   hDFNegUp->SetBinContent(1888,1);
   hDFNegUp->SetBinContent(1890,1);
   hDFNegUp->SetBinContent(1891,7);
   hDFNegUp->SetBinContent(1892,12);
   hDFNegUp->SetBinContent(1893,37);
   hDFNegUp->SetBinContent(1894,72);
   hDFNegUp->SetBinContent(1895,112);
   hDFNegUp->SetBinContent(1896,148);
   hDFNegUp->SetBinContent(1897,156);
   hDFNegUp->SetBinContent(1898,138);
   hDFNegUp->SetBinContent(1899,125);
   hDFNegUp->SetBinContent(1900,98);
   hDFNegUp->SetBinContent(1901,58);
   hDFNegUp->SetBinContent(1902,24);
   hDFNegUp->SetBinContent(1903,7);
   hDFNegUp->SetBinContent(1904,1);
   hDFNegUp->SetBinContent(1905,2);
   hDFNegUp->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.5675287,0.5696203,0.8793103,0.8818565,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = -0.05163");
   text = ptstats->AddText("RMS   = 0.001219");
   text = ptstats->AddText("Constant = 164.9 ");
   text = ptstats->AddText("Mean     = -0.05164 ");
   text = ptstats->AddText("Sigma    = 0.001191 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hDFNegUp->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hDFNegUp);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.0675,-0.0345);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(15.28102);
   PrevFitTMP->SetNDF(14);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,164.9365);
   PrevFitTMP->SetParError(0,6.201358);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,-0.0516426);
   PrevFitTMP->SetParError(1,3.819368e-05);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.001190504);
   PrevFitTMP->SetParError(2,2.391591e-05);
   PrevFitTMP->SetParLimits(2,0,0.01218694);
   hDFNegUp->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hDFNegUp->SetLineColor(ci);
   hDFNegUp->GetXaxis()->SetRange(1866,1931);
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
   
   TPaveText *pt = new TPaveText(0.4009195,0.9342405,0.5990805,0.995,"blNDC");
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
