{
//=========Macro generated from canvas: c/c
//=========  (Sat Oct 19 16:51:19 2013) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",67,53,604,630);
   c->Range(-1.275862,-0.009302326,1.022989,0.08372093);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.01);
   c->SetTopMargin(0.04);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
  

TH1D *Default_allWcosTheta__14__1 = new TH1D("Default_allWcosTheta__14__1","data",20,-1,1);
   Default_allWcosTheta__14__1->SetBinContent(1,0.03573506);
   Default_allWcosTheta__14__1->SetBinContent(2,0.03377093);
   Default_allWcosTheta__14__1->SetBinContent(3,0.03684509);
   Default_allWcosTheta__14__1->SetBinContent(4,0.04054022);
   Default_allWcosTheta__14__1->SetBinContent(5,0.04197326);
   Default_allWcosTheta__14__1->SetBinContent(6,0.04372496);
   Default_allWcosTheta__14__1->SetBinContent(7,0.04539045);
   Default_allWcosTheta__14__1->SetBinContent(8,0.04700931);
   Default_allWcosTheta__14__1->SetBinContent(9,0.04826207);
   Default_allWcosTheta__14__1->SetBinContent(10,0.04849606);
   Default_allWcosTheta__14__1->SetBinContent(11,0.04965696);
   Default_allWcosTheta__14__1->SetBinContent(12,0.050452);
   Default_allWcosTheta__14__1->SetBinContent(13,0.05209108);
   Default_allWcosTheta__14__1->SetBinContent(14,0.053016);
   Default_allWcosTheta__14__1->SetBinContent(15,0.05472402);
   Default_allWcosTheta__14__1->SetBinContent(16,0.05584183);
   Default_allWcosTheta__14__1->SetBinContent(17,0.05821304);
   Default_allWcosTheta__14__1->SetBinContent(18,0.06087822);
   Default_allWcosTheta__14__1->SetBinContent(19,0.06705353);
   Default_allWcosTheta__14__1->SetBinContent(20,0.07632593);
   Default_allWcosTheta__14__1->SetBinError(1,0.0002767207);
   Default_allWcosTheta__14__1->SetBinError(2,0.0002703494);
   Default_allWcosTheta__14__1->SetBinError(3,0.0002810248);
   Default_allWcosTheta__14__1->SetBinError(4,0.0002911077);
   Default_allWcosTheta__14__1->SetBinError(5,0.0002978034);
   Default_allWcosTheta__14__1->SetBinError(6,0.0003044643);
   Default_allWcosTheta__14__1->SetBinError(7,0.0003111463);
   Default_allWcosTheta__14__1->SetBinError(8,0.0003178069);
   Default_allWcosTheta__14__1->SetBinError(9,0.0003227192);
   Default_allWcosTheta__14__1->SetBinError(10,0.0003268487);
   Default_allWcosTheta__14__1->SetBinError(11,0.0003326747);
   Default_allWcosTheta__14__1->SetBinError(12,0.000337193);
   Default_allWcosTheta__14__1->SetBinError(13,0.000346426);
   Default_allWcosTheta__14__1->SetBinError(14,0.0003540382);
   Default_allWcosTheta__14__1->SetBinError(15,0.0003662945);
   Default_allWcosTheta__14__1->SetBinError(16,0.0003790169);
   Default_allWcosTheta__14__1->SetBinError(17,0.0003947407);
   Default_allWcosTheta__14__1->SetBinError(18,0.0004174214);
   Default_allWcosTheta__14__1->SetBinError(19,0.0004464247);
   Default_allWcosTheta__14__1->SetBinError(20,0.0004873205);
   Default_allWcosTheta__14__1->SetMinimum(0);
   Default_allWcosTheta__14__1->SetMaximum(0.1);
   Default_allWcosTheta__14__1->SetEntries(811346);
   Default_allWcosTheta__14__1->SetDirectory(0);
   Default_allWcosTheta__14__1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta__14__1->SetLineColor(ci);
   Default_allWcosTheta__14__1->SetMarkerStyle(20);
   Default_allWcosTheta__14__1->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__14__1->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__14__1->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14__1->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14__1->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__14__1->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__14__1->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14__1->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14__1->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__14__1->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__14__1->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14__1->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14__1->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta__14__1->Draw("");
   
   TH1D *mc = new TH1D("mc","2J1T MC",20,-1,1);
   mc->SetBinContent(1,0.03216555);
   mc->SetBinContent(2,0.02729709);
   mc->SetBinContent(3,0.0332566);
   mc->SetBinContent(4,0.03898219);
   mc->SetBinContent(5,0.03826905);
   mc->SetBinContent(6,0.03954366);
   mc->SetBinContent(7,0.04232971);
   mc->SetBinContent(8,0.04722224);
   mc->SetBinContent(9,0.04697035);
   mc->SetBinContent(10,0.04979412);
   mc->SetBinContent(11,0.05178504);
   mc->SetBinContent(12,0.05154034);
   mc->SetBinContent(13,0.05453236);
   mc->SetBinContent(14,0.05525529);
   mc->SetBinContent(15,0.0599811);
   mc->SetBinContent(16,0.06113041);
   mc->SetBinContent(17,0.06363179);
   mc->SetBinContent(18,0.06716162);
   mc->SetBinContent(19,0.06591162);
   mc->SetBinContent(20,0.07323987);
   mc->SetBinError(1,0.001867703);
   mc->SetBinError(2,0.001672653);
   mc->SetBinError(3,0.001780866);
   mc->SetBinError(4,0.002176426);
   mc->SetBinError(5,0.001921229);
   mc->SetBinError(6,0.001969017);
   mc->SetBinError(7,0.002023652);
   mc->SetBinError(8,0.002213992);
   mc->SetBinError(9,0.002157342);
   mc->SetBinError(10,0.002288608);
   mc->SetBinError(11,0.002229226);
   mc->SetBinError(12,0.002352795);
   mc->SetBinError(13,0.002283307);
   mc->SetBinError(14,0.002485576);
   mc->SetBinError(15,0.002488858);
   mc->SetBinError(16,0.002456402);
   mc->SetBinError(17,0.002570539);
   mc->SetBinError(18,0.002619365);
   mc->SetBinError(19,0.002482548);
   mc->SetBinError(20,0.002716695);
   mc->SetEntries(14217);
   mc->SetDirectory(0);
   mc->SetStats(0);
//mc->Rebin(2);
   ci = TColor::GetColor("#ff0000");
   mc->SetLineColor(ci);
   mc->SetLineStyle(2);
   mc->SetLineWidth(2);
   mc->GetXaxis()->SetTitle("cos(#theta*)");
   mc->GetXaxis()->SetLabelFont(42);
   mc->GetXaxis()->SetLabelSize(0.035);
   mc->GetXaxis()->SetTitleSize(0.035);
   mc->GetXaxis()->SetTitleFont(42);
   mc->GetYaxis()->SetLabelFont(42);
   mc->GetYaxis()->SetLabelSize(0.035);
   mc->GetYaxis()->SetTitleSize(0.035);
   mc->GetYaxis()->SetTitleFont(42);
   mc->GetZaxis()->SetLabelFont(42);
   mc->GetZaxis()->SetLabelSize(0.035);
   mc->GetZaxis()->SetTitleSize(0.035);
   mc->GetZaxis()->SetTitleFont(42);
   mc->Draw("sames");
   TLegend *leg = new TLegend(0.185,0.1528239,0.565,0.3621262,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hbup","2J0T flavor scaled Data stat. band","lpf");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);


   entry=leg->AddEntry("bDataSyst","2J0T Data syst. band","lpf");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(kGreen+2);
   entry->SetFillStyle(0);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);


   entry=leg->AddEntry("Default_DefcosTheta__7","2J0T Data nominal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta__8","2J1T MC","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();


   c->Modified();
   c->cd();
   c->SetSelected(c);
}
