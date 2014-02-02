{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Oct  1 13:37:36 2013) by ROOT version5.32/00
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   c1_n2->Range(0,0,1,1);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(4);
   graph->SetName("syst");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,-0.7,0.7);
   graph->SetPoint(1,0.7,-0.7);
   graph->SetPoint(2,0.7,0.7);
   graph->SetPoint(3,-0.7,-0.7);
   graph->Draw("ap");
   
   TEllipse *ellipse = new TEllipse(-0.0484678,-0.0659442,0.08722958,0.08722958,0,360,-42.97651);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0000ff");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
