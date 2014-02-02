{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jun 19 12:41:06 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.117125,-15.64191,-0.025875,140.7772);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hDFNegDown = new TH1D("hDFNegDown","hDFNegDown",4000,-1,1);
   hDFNegDown->SetBinContent(1866,1);
   hDFNegDown->SetBinContent(1868,1);
   hDFNegDown->SetBinContent(1869,3);
   hDFNegDown->SetBinContent(1870,11);
   hDFNegDown->SetBinContent(1871,16);
   hDFNegDown->SetBinContent(1872,29);
   hDFNegDown->SetBinContent(1873,45);
   hDFNegDown->SetBinContent(1874,76);
   hDFNegDown->SetBinContent(1875,87);
   hDFNegDown->SetBinContent(1876,113);
   hDFNegDown->SetBinContent(1877,109);
   hDFNegDown->SetBinContent(1878,112);
   hDFNegDown->SetBinContent(1879,98);
   hDFNegDown->SetBinContent(1880,88);
   hDFNegDown->SetBinContent(1881,80);
   hDFNegDown->SetBinContent(1882,63);
   hDFNegDown->SetBinContent(1883,34);
   hDFNegDown->SetBinContent(1884,19);
   hDFNegDown->SetBinContent(1885,10);
   hDFNegDown->SetBinContent(1886,1);
   hDFNegDown->SetBinContent(1887,3);
   hDFNegDown->SetEntries(999);
   
   TPaveStats *ptstats = new TPaveStats(0.1479885,0.5421941,0.3663793,0.8670886,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 999    ");
   text = ptstats->AddText("Mean  = -0.06145");
   text = ptstats->AddText("RMS   = 0.001664");
   text = ptstats->AddText("Constant = 120.5 ");
   text = ptstats->AddText("Mean     = -0.06149 ");
   text = ptstats->AddText("Sigma    = 0.001619 ");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(10001);
   ptstats->Draw();
   hDFNegDown->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hDFNegDown);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.108,-0.035);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(22.76637);
   PrevFitTMP->SetNDF(18);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,120.5069);
   PrevFitTMP->SetParError(0,4.558733);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,-0.0614912);
   PrevFitTMP->SetParError(1,5.258647e-05);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.001618695);
   PrevFitTMP->SetParError(2,3.322485e-05);
   PrevFitTMP->SetParLimits(2,0,0.0166354);
   hDFNegDown->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hDFNegDown->SetLineColor(ci);
   hDFNegDown->GetXaxis()->SetRange(1785,1930);
   hDFNegDown->GetXaxis()->SetLabelFont(42);
   hDFNegDown->GetXaxis()->SetLabelSize(0.035);
   hDFNegDown->GetXaxis()->SetTitleSize(0.035);
   hDFNegDown->GetXaxis()->SetTitleFont(42);
   hDFNegDown->GetYaxis()->SetLabelFont(42);
   hDFNegDown->GetYaxis()->SetLabelSize(0.035);
   hDFNegDown->GetYaxis()->SetTitleSize(0.035);
   hDFNegDown->GetYaxis()->SetTitleFont(42);
   hDFNegDown->GetZaxis()->SetLabelFont(42);
   hDFNegDown->GetZaxis()->SetLabelSize(0.035);
   hDFNegDown->GetZaxis()->SetTitleSize(0.035);
   hDFNegDown->GetZaxis()->SetTitleFont(42);
   hDFNegDown->Draw("");
   
   TPaveText *pt = new TPaveText(0.377931,0.9342405,0.622069,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("hDFNegDown");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
