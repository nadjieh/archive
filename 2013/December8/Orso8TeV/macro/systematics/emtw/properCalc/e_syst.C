{
//=========Macro generated from canvas: c1/c1
//=========  (Mon Nov 11 09:56:41 2013) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TEllipse *ellipse = new TEllipse(0.676909,0.314307,0.0286944,0.03912311,0,360,10.49897);
   ellipse->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
