#include <iomanip>

const bool savePDF = false;
const bool saveEPS = false;
const bool saveGIF = false;
const bool savePNG = false;
const bool saveC   = false;

void compTopValidation()
{
   gROOT->SetStyle("Plain");
   gStyle->SetOptStat(1);
   
   TString sel  = "tt";

   TCanvas *c= new TCanvas("c","c",10,10,800,600);
   c->Print(sel + "/" + sel + ".ps[");    

   DrawMine("dimu_TTBar", "die_TTBar", sel, "diL", "otherTop", c);
   DrawMine("dimu_TTBar", "die_TTBar", sel, "diL","Reco", c);
   DrawMine("dimu_TTBar", "die_TTBar", sel, "diL", "Gen", c);
   DrawMine("dimu_TTBar", "die_TTBar", sel, "diL", "Bkg", c);
   DrawMine("dimu_TTBar", "die_TTBar", sel, "diL", "topMass",c);
//   DrawMine("dimu_TTBar", "die_TTBar", sel, "diL", "Wmass", c);
   DrawMine("dimu_TTBar", "die_TTBar", sel, "diL", "allW_finalMT", c);

   DrawMine("mue_TTBar", "mue_TTBar", sel, "mue", "otherTop", c);
   DrawMine("mue_TTBar", "mue_TTBar", sel, "mue","Reco", c);
   DrawMine("mue_TTBar", "mue_TTBar", sel, "mue", "Gen", c);
   DrawMine("mue_TTBar", "mue_TTBar", sel, "mue", "Bkg", c);
   DrawMine("mue_TTBar", "mue_TTBar", sel, "mue", "topMass",c);
   DrawMine("mue_TTBar", "mue_TTBar", sel, "mue", "Wmass", c);
   DrawMine("mue_TTBar", "mue_TTBar", sel, "mue", "allW_finalMT", c);

   DrawMine("muhad_TTBar", "ehad_TTBar", sel, "Lhad", "otherTop", c);
   DrawMine("muhad_TTBar", "ehad_TTBar", sel, "Lhad","Reco", c);
   DrawMine("muhad_TTBar", "ehad_TTBar", sel, "Lhad", "Gen", c);
   DrawMine("muhad_TTBar", "ehad_TTBar", sel, "Lhad", "Bkg", c);
   DrawMine("muhad_TTBar", "ehad_TTBar", sel, "Lhad", "topMass",c);
//   DrawMine("muhad_TTBar", "ehad_TTBar", sel, "Lhad", "Wmass", c);
   DrawMine("muhad_TTBar", "ehad_TTBar", sel, "Lhad", "allW_finalMT", c);

   DrawMine("mutau_TTBar", "etau_TTBar", sel, "Ltau", "otherTop", c);
   DrawMine("mutau_TTBar", "etau_TTBar", sel, "Ltau","Reco", c);
   DrawMine("mutau_TTBar", "etau_TTBar", sel, "Ltau", "Gen", c);
   DrawMine("mutau_TTBar", "etau_TTBar", sel, "Ltau", "Bkg", c);
   DrawMine("mutau_TTBar", "etau_TTBar", sel, "Ltau", "topMass",c);
//   DrawMine("mutau_TTBar", "etau_TTBar", sel, "Ltau", "Wmass", c);
   DrawMine("mutau_TTBar", "etau_TTBar", sel, "Ltau", "allW_finalMT", c);

   DrawMine("disemitau_TTBar", "disemitau_TTBar", sel, "tauRest", "otherTop", c);
   DrawMine("disemitau_TTBar", "disemitau_TTBar", sel, "tauRest","Reco", c);
   DrawMine("disemitau_TTBar", "disemitau_TTBar", sel, "tauRest", "Gen", c);
   DrawMine("disemitau_TTBar", "disemitau_TTBar", sel, "tauRest", "Bkg", c);
   DrawMine("disemitau_TTBar", "disemitau_TTBar", sel, "tauRest", "topMass",c);
//   DrawMine("disemitau_TTBar", "disemitau_TTBar", sel, "tauRest", "Wmass", c);
   DrawMine("disemitau_TTBar", "disemitau_TTBar", sel, "tauRest", "allW_finalMT", c);

 
   c->Print(sel + "/" + sel + ".ps]");    

	sel  = "tchan";

   TCanvas *c2= new TCanvas("c2","c2",10,10,800,600);
   c2->Print(sel + "/" + sel + ".ps[");

   DrawMine("TChannel", "TChannel", sel, "TChan", "Reco", c2);
   DrawMine("TChannel", "TChannel", sel, "TChan", "Gen", c2);
   DrawMine("TChannel", "TChannel", sel, "TChan", "Bkg", c2);
   DrawMine("TChannel", "TChannel", sel, "TChan", "topMass",c2);
//   DrawMine("TChannel", "TChannel", sel, "TChan", "Wmass", c2);
   DrawMine("TChannel", "TChannel", sel, "TChan", "allW_finalMT", c2);


   DrawMine("TbarChannel", "TbarChannel", sel, "TbarChan", "Reco", c2);
   DrawMine("TbarChannel", "TbarChannel", sel, "TbarChan", "Gen", c2);
   DrawMine("TbarChannel", "TbarChannel", sel, "TbarChan", "Bkg", c2);
   DrawMine("TbarChannel", "TbarChannel", sel, "TbarChan", "topMass",c2);
//   DrawMine("TbarChannel", "TbarChannel", sel, "TbarChan", "Wmass", c2);
   DrawMine("TbarChannel", "TbarChannel", sel, "TbarChan", "allW_finalMT", c2);

   c2->Print(sel + "/" + sel + ".ps]");  


	sel =  "tWchan";
   TCanvas *c3= new TCanvas("c3","c3",10,10,800,600);
   c3->Print(sel + "/" + sel + ".ps[");

   DrawMine("TWChannel", "TWChannel", sel, "TWChan", "Reco", c3);
   DrawMine("TWChannel", "TWChannel", sel, "TWChan", "Gen", c3);
   DrawMine("TWChannel", "TWChannel", sel, "TWChan", "Bkg", c3);
   DrawMine("TWChannel", "TWChannel", sel, "TWChan", "topMass",c3);
//   DrawMine("TWChannel", "TWChannel", sel, "TWChan", "Wmass", c3);
   DrawMine("TWChannel", "TWChannel", sel, "TWChan", "allW_finalMT", c3);


   DrawMine("TbarWChannel", "TbarWChannel", sel, "TbarWChan", "Reco", c3);
   DrawMine("TbarWChannel", "TbarWChannel", sel, "TbarWChan", "Gen", c3);
   DrawMine("TbarWChannel", "TbarWChannel", sel, "TbarWChan", "Bkg", c3);
   DrawMine("TbarWChannel", "TbarWChannel", sel, "TbarWChan", "topMass",c3);
//   DrawMine("TbarWChannel", "TbarWChannel", sel, "TbarWChan", "Wmass", c3);
   DrawMine("TbarWChannel", "TbarWChannel", sel, "TbarWChan", "allW_finalMT", c3);

   c3->Print(sel + "/" + sel + ".ps]");  

	sel =  "qcd";
   TCanvas *c4= new TCanvas("c4","c4",10,10,800,600);
   c4->Print(sel + "/" + sel + ".ps[");
   DrawMine("QCD", "QCD", sel, "QCD", "Bkg", c4);
   DrawMine("QCD", "QCD", sel, "QCD", "topMass",c4);
//   DrawMine("QCD", "QCD", sel, "QCD", "Wmass", c4);
   DrawMine("QCD", "QCD", sel, "QCD", "allW_finalMT", c4);
   c4->Print(sel + "/" + sel + ".ps]");  

	sel =  "wjets";
   TCanvas *c5= new TCanvas("c5","c5",10,10,800,600);
   c5->Print(sel + "/" + sel + ".ps[");
   DrawMine("WJets", "WJets", sel, "WJets", "Bkg", c5);
   DrawMine("WJets", "WJets", sel, "WJets", "topMass",c5);
//   DrawMine("WJets", "WJets", sel, "WJets", "Wmass", c5);
   DrawMine("WJets", "WJets", sel, "WJets", "allW_finalMT", c5);
   c5->Print(sel + "/" + sel + ".ps]");

 	sel =  "dy";
   TCanvas *c6= new TCanvas("c6","c6",10,10,800,600);
   c6->Print(sel + "/" + sel + ".ps[");
   DrawMine("ZJets", "ZJets", sel, "ZJets", "Bkg", c6);
   DrawMine("ZJets", "ZJets", sel, "ZJets", "topMass",c6);
//   DrawMine("ZJets", "ZJets", sel, "ZJets", "Wmass", c6);
   DrawMine("ZJets", "ZJets", sel, "ZJets", "allW_finalMT", c6);
   c6->Print(sel + "/" + sel + ".ps]");

	sel =  "wdata";
   TCanvas *c7= new TCanvas("c7","c7",10,10,800,600);
   c7->Print(sel + "/" + sel + ".ps[");
   DrawMine("WTemplateDefFormat", "WTemplateDefFormat", sel, "WTemplateDefFormat", "Bkg", c7);
   DrawMine("WTemplateDefFormat", "WTemplateDefFormat", sel, "WTemplateDefFormat", "topMass",c7);
//   DrawMine("WTemplateDefFormat", "WTemplateDefFormat", sel, "WTemplateDefFormat", "Wmass", c7);
   DrawMine("WTemplateDefFormat", "WTemplateDefFormat", sel, "WTemplateDefFormat", "allW_finalMT", c7);
   c7->Print(sel + "/" + sel + ".ps]");

	sel =  "qcdele";
   TCanvas *c8= new TCanvas("c8","c8",10,10,800,600);
   c8->Print(sel + "/" + sel + ".ps[");
   DrawMine("QCDEle", "QCDEle", sel, "QCDEle", "Bkg", c8);
   DrawMine("QCDEle", "QCDEle", sel, "QCDEle", "topMass",c8);
//   DrawMine("QCDEle", "QCDEle", sel, "QCDEle", "Wmass", c8);
   DrawMine("QCDEle", "QCDEle", sel, "QCDEle", "allW_finalMT", c8);
   c8->Print(sel + "/" + sel + ".ps]");  


	sel =  "data";
   TCanvas *c9= new TCanvas("c9","c9",10,10,800,600);
   c9->Print(sel + "/" + sel + ".ps[");
   DrawMine("Data", "Data", sel, "Data", "Bkg", c9);
   DrawMine("Data", "Data", sel, "Data", "topMass",c9);
//   DrawMine("Data", "Data", sel, "Data", "Wmass", c9);
   DrawMine("Data", "Data", sel, "Data", "allW_finalMT", c9);
   c9->Print(sel + "/" + sel + ".ps]");  
/*	sel =  "comphep";
   TCanvas *c10= new TCanvas("c10","c10",10,10,800,600);
   c10->Print(sel + "/" + sel + ".ps[");
   DrawMine("powheg", "comphep", sel, "", "Reco", c10);
   DrawMine("powheg", "comphep", sel, "", "Gen", c10);
   DrawMine("powheg", "comphep", sel, "", "Bkg", c10);
   DrawMine("powheg", "comphep", sel, "", "both", c10);
   DrawMine("powheg", "comphep", sel, "", "topMass",c10);
//   DrawMine("powheg", "comphep", sel, "", "Wmass", c10);
   DrawMine("powheg", "comphep", sel, "", "allW_finalMT", c10);
   c10->Print(sel + "/" + sel + ".ps]"); 
	sel =  "wbdown";
   TCanvas *c11= new TCanvas("c11","c11",10,10,800,600);
   c11->Print(sel + "/" + sel + ".ps[");
   DrawMine("WTemplateDefFormat", "bDownWTemplateDefFormat", sel, "", "Bkg", c11);
   c11->Print(sel + "/" + sel + ".ps]"); 

	sel =  "wcdown";
   TCanvas *c12= new TCanvas("c12","c12",10,10,800,600);
   c12->Print(sel + "/" + sel + ".ps[");
   DrawMine("WTemplateDefFormat", "cDownWTemplateDefFormat", sel, "", "Bkg", c12);
   c12->Print(sel + "/" + sel + ".ps]");*/

	/*sel =  "unphys";
   TCanvas *c13= new TCanvas("c13","c13",10,10,800,600);
   c13->Print(sel + "/" + sel + ".ps[");
   DrawMine("unphys", "unphys", sel, "gL", "Reco", c13);
   DrawMine("unphys", "unphys", sel, "gL", "Gen", c13);
   DrawMine("unphys", "unphys", sel, "gL", "Bkg", c13);
   DrawMine("unphys", "unphys", sel, "gL", "both", c13);
   DrawMine("unphys", "unphys", sel, "gL", "topMass",c13);
//   DrawMine("unphys", "unphys", sel, "gL", "Wmass", c13);
   DrawMine("unphys", "unphys", sel, "gL", "def_finalMT", c13);
   c13->Print(sel + "/" + sel + ".ps]"); 

	sel =  "r";
   TCanvas *c14= new TCanvas("c14","c14",10,10,800,600);
   c14->Print(sel + "/" + sel + ".ps[");
   DrawMine("r", "r", sel, "gL", "Reco", c14);
   DrawMine("r", "r", sel, "gL", "Gen", c14);
   DrawMine("r", "r", sel, "gL", "Bkg", c14);
   DrawMine("r", "r", sel, "gL", "both", c14);
   DrawMine("r", "r", sel, "gL", "topMass",c14);
//   DrawMine("r", "r", sel, "gL", "Wmass", c14);
   DrawMine("r", "r", sel, "gL", "def_finalMT", c14);
   c14->Print(sel + "/" + sel + ".ps]"); 



	sel =  "sm";
   TCanvas *c15= new TCanvas("c15","c15",10,10,800,600);
   c15->Print(sel + "/" + sel + ".ps[");
   DrawMine("sm", "sm", sel, "gL", "Reco", c15);
   DrawMine("sm", "sm", sel, "gL", "Gen", c15);
   DrawMine("sm", "sm", sel, "gL", "Bkg", c15);
   DrawMine("sm", "sm", sel, "gL", "both", c15);
   DrawMine("sm", "sm", sel, "gL", "topMass",c15);
//   DrawMine("sm", "sm", sel, "gL", "Wmass", c15);
   DrawMine("sm", "sm", sel, "gL", "def_finalMT", c15);
   c15->Print(sel + "/" + sel + ".ps]"); 



	sel =  "t";
   TCanvas *c16= new TCanvas("c16","c16",10,10,800,600);
   c16->Print(sel + "/" + sel + ".ps[");
   DrawMine("t", "t", sel, "gL", "Reco", c16);
   DrawMine("t", "t", sel, "gL", "Gen", c16);
   DrawMine("t", "t", sel, "gL", "Bkg", c16);
   DrawMine("t", "t", sel, "gL", "both", c16);
   DrawMine("t", "t", sel, "gL", "topMass",c16);
//   DrawMine("t", "t", sel, "gL", "Wmass", c16);
   DrawMine("t", "t", sel, "gL", "def_finalMT", c16);
   c16->Print(sel + "/" + sel + ".ps]"); */
}
//13
void DrawMine(TString muname, TString ename, TString sel, TString chan, TString var,TCanvas *canvas){
 
	TString fileE = "/home/nadjieh/work/Orso8TeV/macro/forAdding/emtw/TreesEle_"+ename+"_plots.root";
	TString fileMu = "/home/nadjieh/work/Orso8TeV/macro/forAdding/TreesMu_"+muname+"_plots.root";
	//TString fileE = "/home/nadjieh/work/Orso8TeV/macro/systematics/emtw/up/ewknorm/TreesEle_"+ename+"_RW.root";
	//TString fileMu = "/home/nadjieh/work/Orso8TeV/macro/systematics/emtw/TreesEle_"+muname+"_RW.root";
    TString step ="Default_allW/Default_allW";
	//TString step ="DefaultTrue_allW/DefaultTrue_allW";
	//TString step ="Default_Def/Default_Def";
    //TString fileE = "/home/nadjieh/work/Orso8TeV/macro/SevenTeV/emtw/forLVLT/TreesEle_"+ename+"_plots.root";
	//TString fileMu = "/home/nadjieh/work/Orso8TeV/macro/SevenTeV/SelectionStudies/forLVLT/TreesMu_"+muname+"_plots.root";
   
   TFile f_old(fileMu);       
   TFile f_new(fileE);       
   
   TH1* h_old = 0;
   TH1* h_new = 0;
   cout<<var<<endl;

   if(var == "otherTop"){
	h_old = ((TH3*)f_old.Get(step+"cosTheta3D"))->ProjectionZ(chan+"_muZ");
	h_new = ((TH3*)f_new.Get(step+"cosTheta3D"))->ProjectionZ(chan+"_eZ");
	h_old->Rebin(10);
	h_new->Rebin(10);
   } else if(var == "Reco"){
	h_old = ((TH2*)f_old.Get(step+"cosTheta2D"))->ProjectionY(chan+"_muY");
	h_new = ((TH2*)f_new.Get(step+"cosTheta2D"))->ProjectionY(chan+"_eY");
   } else if(var == "Gen"){
	h_old = ((TH2*)f_old.Get(step+"cosTheta2D"))->ProjectionX(chan+"_muX");
	h_new = ((TH2*)f_new.Get(step+"cosTheta2D"))->ProjectionX(chan+"_eX");
	h_old->Rebin(100);
	h_new->Rebin(100);
   } else if(var == "topMass" || var == "Wmass"){
   	h_old = (TH1F*)f_old.Get(step+"_"+var);
   	h_new = (TH1F*)f_new.Get(step+"_"+var);
   } else if(var == "Reco"){
	h_old = ((TH2*)f_old.Get(step+"cosTheta2D"))->ProjectionY(chan+"_muY");
	h_new = ((TH2*)f_new.Get(step+"cosTheta2D"))->ProjectionY(chan+"_eY");
   } else if(var == "Bkg"){
	h_old = (TH1*)f_old.Get(step+"cosTheta");
	h_new = (TH1*)f_new.Get(step+"cosTheta");
   } else if(var == "both"){
	h_old = ((TH2*)f_old.Get(step+"cosTheta2D"))->ProjectionY(chan+"_muY");
	h_new = ((TH2*)f_new.Get(step+"cosTheta2D"))->ProjectionY(chan+"_eY");
	h_old->Add((TH1*)f_old.Get(step+"cosTheta"));
	h_new->Add((TH1*)f_new.Get(step+"cosTheta"));
	//h_old->Rebin(10);
	//h_new->Rebin(10);
   } else {
   	h_old = (TH1F*)f_old.Get(var);
   	h_new = (TH1F*)f_new.Get(var);
   }
	if(h_old->Integral() != 0 && h_new->Integral()) {
	h_old->Scale(1./h_old->Integral());
	h_new->Scale(1./h_new->Integral());
   }

   TLegend *tleg = new TLegend(0.35,0.75,0.5,0.89);
   tleg->SetTextSize(0.045);
   tleg->SetBorderSize(0);
   tleg->SetFillColor(10);
   tleg->AddEntry(h_new, "ele_"+chan , "lp");
   tleg->AddEntry(h_old, "mu_"+chan , "le");

   double max = -999.;
   if( h_old->GetMaximum()>h_new->GetMaximum() ) max = h_old->GetMaximum();
   else                                          max = h_new->GetMaximum();
   h_old->SetMaximum(max*1.3);
   h_old->SetMinimum(0);

   h_old->SetLineColor(kBlue);
   h_old->SetLineWidth(3);
   h_old->SetMarkerStyle(20);
   h_old->SetMarkerSize(2);
   h_old->SetMarkerColor(kBlue);
   h_old->Draw("h");

   h_new->SetLineColor(kRed);
   h_new->SetMarkerStyle(23);
   h_new->SetMarkerSize(2);
   h_new->SetMarkerColor(kRed);
   h_new->SetLineWidth(3);
   h_new->Draw("sames");

   gPad->Update();
   TPaveStats* stats1 = (TPaveStats*)gPad->GetPrimitive("stats");
   Double_t coords[4];
   coords[0] = stats1->GetX1NDC();
   coords[1] = stats1->GetX2NDC();
   coords[2] = stats1->GetY1NDC();
   coords[3] = stats1->GetY2NDC();
   stats1->Draw();
   gPad->Update();

   TPaveStats* stats2 =(TPaveStats*)gPad->GetPrimitive("stats");  
   //stats2->SetX1NDC(coords[0]);
   stats2->SetX1NDC(2 * coords[0] - coords[1]);
   stats2->SetX2NDC(coords[0]);
   //stats2->SetY1NDC(2 * coords[2] - coords[3]);
   stats2->SetY1NDC(coords[2]);
   stats2->SetY2NDC(coords[3]);
   //stats2->SetY2NDC(coords[2]);
   stats2->SetTextColor(kBlue);
   stats2->Draw();
   
   
   tleg->Draw("same");

   TLatex* text_norm = new TLatex(0.92, 0.43, "Normalized to Unity");
   text_norm->SetTextAngle(270);  
   text_norm->SetNDC(true);
   text_norm->SetTextFont(42);
   text_norm->SetTextSize(0.04); 
   text_norm->Draw("same");
   
  
   canvas->Print(sel + "/" + sel + ".ps");	 
}
