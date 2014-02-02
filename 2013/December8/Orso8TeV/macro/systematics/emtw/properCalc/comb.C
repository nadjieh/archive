{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Nov 11 17:28:54 2013) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TEllipse *ellipse = new TEllipse(0.705517,0.312592,0.05747312,0.0266152,0,360,-40.91356);
   ellipse->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
