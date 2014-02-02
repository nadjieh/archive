{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Oct 20 15:51:08 2013) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TEllipse *ellipse = new TEllipse(0.804803,0.285783,0.1256919,0.04528272,0,360,-31.55106);
   ellipse->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
