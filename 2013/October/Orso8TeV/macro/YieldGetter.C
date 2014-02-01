#include <string>
#include <vector>
#include <iostream>
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TFile.h"
#include "TDirectory.h"
#include <TApplication.h>
using namespace std;

int main(int argc, char** argv) {
    TApplication theApp("App", &argc, argv);
    vector<TH1*> MCHists;
    vector<TH1*> MCHistsPU;
    vector<TH1*> MCHistsPUB;
    vector<TH1*> MCHistsAll;
    vector<string> MCName;
    TString addressANDprefix = "";
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));

        if (arg_fth == "prefix") {
            //            cout << "I saw PREFIX" << endl;
            f++;
            std::string Xsec(*(argv + f));
            addressANDprefix = Xsec.c_str();
        } else if (arg_fth == "mcinput") {
            //cout << "mcinput -------------------------" << endl;
            f++;
            std::string Xsec(*(argv + f));
            MCName.push_back(Xsec);
            Xsec = string(addressANDprefix) + Xsec + "_plots.root";
            TFile * tmp = TFile::Open(Xsec.c_str());
            TH1 * my2D = ((TH2*) tmp->Get("Default_Def/Default_DefcosTheta2D"))->ProjectionY();
            if (my2D->GetEntries() != 0) {
                MCHists.push_back(((TH1*) tmp->Get("Default_Def/Default_DefcosTheta")));
                MCHists[MCHists.size() - 1]->Add(my2D);
            } else
                MCHists.push_back((TH1*) tmp->Get("Default_Def/Default_DefcosTheta"));
            my2D = ((TH2*) tmp->Get("Default_PuW/Default_PuWcosTheta2D"))->ProjectionY();
            if (my2D->GetEntries() != 0) {
                MCHistsPU.push_back(((TH1*) tmp->Get("Default_PuW/Default_PuWcosTheta")));
                MCHistsPU[MCHists.size() - 1]->Add(my2D);
            } else
                MCHistsPU.push_back((TH1*) tmp->Get("Default_PuW/Default_PuWcosTheta"));
            my2D = ((TH2*) tmp->Get("Default_BtagPuW/Default_BtagPuWcosTheta2D"))->ProjectionY();
            if (my2D->GetEntries() != 0) {
                MCHistsPUB.push_back(((TH1*) tmp->Get("Default_BtagPuW/Default_BtagPuWcosTheta")));
                MCHistsPUB[MCHists.size() - 1]->Add(my2D);
            } else
                MCHistsPUB.push_back((TH1*) tmp->Get("Default_BtagPuW/Default_BtagPuWcosTheta"));
            my2D = ((TH2*) tmp->Get("Default_allW/Default_allWcosTheta2D"))->ProjectionY();
            if (my2D->GetEntries() != 0) {
                MCHistsAll.push_back(((TH1*) tmp->Get("Default_allW/Default_allWcosTheta")));
                MCHistsAll[MCHists.size() - 1]->Add(my2D);
            } else
                MCHistsAll.push_back((TH1*) tmp->Get("Default_allW/Default_allWcosTheta"));
            delete my2D;

        }
    }
    cout << "|\t| *bare* | *a = weight x PUWeight* |  *b = a x bWeight* | *all* |" << endl;
    for (unsigned int s = 0; s < MCHists.size(); s++) {
        cout << "| *" << MCName[s] << "* |" << MCHists[s]->GetEntries() << "|" <<
                MCHistsPU[s]->Integral() << "|" << MCHistsPUB[s]->Integral()  << "|" <<
                MCHistsAll[s]->Integral() << "|" << endl;
    }

    return 0;
}
