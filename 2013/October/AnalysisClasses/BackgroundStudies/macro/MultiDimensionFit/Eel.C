{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Wed Aug  7 19:53:21 2013) by ROOT version5.32/00
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   c1_n2->Range(0,0,1,1);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(4);
   graph->SetName("def");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,0,1);
   graph->SetPoint(1,1,0);
   graph->SetPoint(2,1,1);
   graph->SetPoint(3,0,0);
   graph->Draw("ap");
   
   TEllipse *ellipse = new TEllipse(0.648717,0.283083,0.06663056,0.01415516,0,360,-39.78123);
   ellipse->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
