#include <TF1.h>
#include <TCanvas.h>
#include "TMath.h"
#include "TGraph.h"
#define mtop 172.5
#define MW 80.39
#define mB 4.8
double MojtabaWidth(double VL, double VR, double gL, double gR, double mt = mtop, double mW = MW/*, double mb = 4.8*/) {
    double r = mt / mW;
    const double Gf = 1.166364 * pow(10., -5);
    double massTerm = mt * pow(mW, 2.);
    const double OtherCoeffs = pow((8 * sqrt(2) * TMath::Pi()), -1);
    double r2 = pow(r, 2);
    double r4 = pow(r, 4);
    double coeff1 = Gf * pow((r2 - 1), 2) * pow(r4, -1) * massTerm * OtherCoeffs;
    double t1 = (r2 + 2)*(pow(VL, 2) + pow(VR, 2));
    double t2 = (2 * r2 + 1)*(pow(gL, 2) + pow(gR, 2));
    double t3 = 6 * r * (VL * gR + VR * gL);
    return (coeff1 * (t1 + t2 + t3));
}
double Gamma(double * x, double * par) {
    /*
     * x[0]: VL
     * x[1]: VR
     * x[2]: gL
     * x[3]: gR

     * par[0]: mt
     * par[1]: mW
     * par[2]: mb
     */
    double xb = (double) par[2] / (double) par[0];
    double xW = (double) par[1] / (double) par[0];
    double xW2 = pow(xW, 2);
    double xb2 = pow(xb, 2);
    double xW4 = pow(xW2, 2);
    double xb4 = pow(xb2, 2);
    //double q = q(par[0],par[1],par[2]);
    double t1 = (pow(x[0], 2) + pow(x[1], 2))*(1 + xW2 - 2 * xb2 - 2 * xW4 + xW2 * xb2 + xb4);
    double t2 = (12 * xW2 * xb * x[0] * x[1]);
    double t3 = 2 * (pow(x[2], 2) + pow(x[3], 2)) * (1 - (xW2 / 2.) - 2 * xb2 - (xW4 / 2.) - (xW2 * xb2 / 2.) + xb4);
    double t4 = (12 * xW2 * xb * x[2] * x[3]);
    double t5 = 6 * xW * (x[0] * x[3] + x[1] * x[2]) * (1 - xW2 - xb2);
    double t6 = 6 * xW * (x[0] * x[2] + x[1] * x[3]) * (1 + xW2 - xb2);
    return (pow(xW2, -1)*(t1 - t2 + t3 - t4 - t5 + t6));
}

double GammaZero(double * x, double * par) {
    /*
     * x[0]: VL
     * x[1]: VR
     * x[2]: gL
     * x[3]: gR

     * par[0]: mt
     * par[1]: mW
     * par[2]: mb
     */
    double xb = (double) par[2] / (double) par[0];
    double xW = (double) par[1] / (double) par[0];
    double xW2 = pow(xW, 2);
    double xb2 = pow(xb, 2);
    //	double xW4 = pow(xW2,2);
    double xb4 = pow(xb2, 2);
    //double q = q(par[0],par[1],par[2]);
    double t1 = pow(xW2, -1) * (pow(x[0], 2) + pow(x[1], 2))*(1 - xW2 - 2 * xb2 - xW2 * xb2 + xb4);
    double t2 = 4 * xb * x[0] * x[1];
    double t3 = (pow(x[2], 2) + pow(x[3], 2)) * (1 - xW2 + xb2);
    double t4 = 4 * xb * x[2] * x[3];
    double t5 = (2 * pow(xW, -1) * (x[0] * x[3] + x[1] * x[2]) * (1 - xW2 - xb2));
    double t6 = 2 * pow(xW, -1) * xb * (x[1] * x[3] + x[0] * x[2]) * (1 + xW2 - xb2);
    return (t1 - t2 + t3 - t4 - t5 + t6);
}
double q(double mt, double mw, double mb) {
    return (1. / (2 * mt))*sqrt((pow(mt, 4) + pow(mw, 4) + pow(mb, 4))-(2 * pow((mt * mw), 2) + 2 * pow((mt * mb), 2) + 2 * pow((mb * mw), 2)));
}
double commonTerm(double * x, double * par) {
    /*
     * x[0]: VL
     * x[1]: VR
     * x[2]: gL
     * x[3]: gR

     * par[0]: mt
     * par[1]: mW
     * par[2]: mb
     */
    double xb = (double) par[2] / (double) par[0];
    double xW = (double) par[1] / (double) par[0];
    double xW2 = pow(xW, 2);
    double xb2 = pow(xb, 2);
    double xW4 = pow(xW2, 2);
    double xb4 = pow(xb2, 2);
    double Q = q(par[0], par[1], par[2]);
    double coeff1 = 0.5 * pow(Q, -1) * par[0] * pow(xW2, -1);
    double coeff2 = 1 - 2 * xW2 - 2 * xb2 + xW4 - 2 * xW2 * xb2 + xb4;
    double t1 = -1 * xW2 * (pow(x[0], 2) - pow(x[1], 2));
    double t2 = (pow(x[2], 2) - pow(x[3], 2)) * (1 - xb2);
    double t3 = 2 * xW * (x[0] * x[3] - x[1] * x[2]);
    double t4 = 2 * xW * xb * (x[0] * x[1] - x[3] * x[2]);
    return (coeff1 * coeff2 * (t1 + t2 + t3 + t4));
}

double GammaT(double * x, double * par) {
    /*
     * x[0]: VL
     * x[1]: VR
     * x[2]: gL
     * x[3]: gR

     * par[0]: mt
     * par[1]: mW
     * par[2]: mb
     */
    double xb = (double) par[2] / (double) par[0];
    double xW = (double) par[1] / (double) par[0];
    double xW2 = pow(xW, 2);
    double xb2 = pow(xb, 2);
    //	double xW4 = pow(xW2,2);
    double xb4 = pow(xb2, 2);
    //double q = q(par[0],par[1],par[2]);
    double t1 = (pow(x[0], 2) + pow(x[1], 2)) * (1 - xW2 + xb2);
    double t2 = 4 * xb * x[0] * x[1];
    double t3 = pow(xW2, -1) * (pow(x[2], 2) + pow(x[3], 2))*(1 - xW2 - 2 * xb2 - xW2 * xb2 + xb4);
    double t4 = 4 * xb * x[2] * x[3];
    double t5 = 2 * pow(xW, -1) * (x[0] * x[3] + x[1] * x[2]) * (1 - xW2 - xb2);
    double t6 = 2 * pow(xW, -1) * xb * (x[1] * x[3] + x[0] * x[2]) * (1 + xW2 - xb2);
    return (t1 - t2 + t3 - t4 - t5 + t6);
}

double GammaL(double * x, double * par) {
    /*
     * x[0]: VL
     * x[1]: VR
     * x[2]: gL
     * x[3]: gR

     * par[0]: mt
     * par[1]: mW
     * par[2]: mb
     */

    double T = GammaT(x, par);
    double C = commonTerm(x, par);
    return T - C;
}

double GammaR(double * x, double * par) {
    /*
     * x[0]: VL
     * x[1]: VR
     * x[2]: gL
     * x[3]: gR

     * par[0]: mt
     * par[1]: mW
     * par[2]: mb
     */

    double T = GammaT(x, par);
    double C = commonTerm(x, par);
    return T + C;
}

double FZero(double * x, double * par) {
    double G0 = GammaZero(x, par);
    double G = Gamma(x, par);
    return G0 / G;
}

double FNeg(double * x, double * par) {
    double G = Gamma(x, par);
    double GL = GammaL(x, par);
    return GL / G;
}

double FR(double * x, double * par) {
    double G = Gamma(x, par);
    double GR = GammaR(x, par);
    return GR / G;
}

double FNegVR(double * x, double * par){
	double y[4] = {1, x[0], 0, 0};
	return FNeg(y,par);
}
double FNegLT(double * x, double * par){
	double y[4] = {1, 0, x[0], 0};
	return FNeg(y,par);
}

double FPosVR(double * x, double * par){
	double y[4] = {1, x[0], 0, 0};
	return FR(y,par);
}
double FPosLT(double * x, double * par){
	double y[4] = {1, 0, x[0], 0};
	return FR(y,par);
}

double FZeroVR(double * x, double * par){
	double y[4] = {1, x[0], 0, 0};
	return FZero(y,par);
}
double FZeroLT(double * x, double * par){
	double y[4] = {1, 0, x[0], 0};
	return FZero(y,par);
}

void FindFuncsVR(){
	TGraph * FNegvsVR = new TGraph();
    FNegvsVR->SetName("FNegvsVR");
	double par[3] = {mtop, MW, mB};
	for(int i = 0; i<1000; i++){
	    double x[4] = {1, i*0.001, 0, 0};
		cout<<x[1]<<"\t"<<FNeg(x, par)<<endl;
		FNegvsVR->SetPoint(i, (i*0.001), FNeg(x, par));
	}
	FNegvsVR->SaveAs("FNegvsVR.C");

	TGraph * FPosvsVR = new TGraph();
    FPosvsVR->SetName("FPosvsVR");
	for(int i = 0; i<1000; i++){
	    double x[4] = {1, i*0.001, 0, 0};
		cout<<x[1]<<"\t"<<FR(x, par)<<endl;
		FPosvsVR->SetPoint(i, (i*0.001), FR(x, par));
	}
	FPosvsVR->SaveAs("FPosvsVR.C");



	TGraph * FZerovsVR = new TGraph();
    FZerovsVR->SetName("FZerovsVR");
	for(int i = 0; i<1000; i++){
	    double x[4] = {1, i*0.001, 0, 0};
		cout<<x[1]<<"\t"<<FZero(x, par)<<endl;
		FZerovsVR->SetPoint(i, (i*0.001), FZero(x, par));
	}
	FZerovsVR->SaveAs("FZerovsVR.C");
}

void FindFuncsLT(){
	TGraph * FNegvsLT = new TGraph();
    FNegvsLT->SetName("FNegvsLT");
	double par[3] = {mtop, MW, mB};
	for(int i = 0; i<1000; i++){
	    double x[4] = {1, 0, i*0.001, 0};
		cout<<x[1]<<"\t"<<FNeg(x, par)<<endl;
		FNegvsLT->SetPoint(i, (i*0.001), FNeg(x, par));
	}
	FNegvsLT->SaveAs("FNegvsLT.C");

	TGraph * FPosvsLT = new TGraph();
    FPosvsLT->SetName("FPosvsLT");
	for(int i = 0; i<1000; i++){
	    double x[4] = {1, 0, i*0.001, 0};
		cout<<x[1]<<"\t"<<FR(x, par)<<endl;
		FPosvsLT->SetPoint(i, (i*0.001), FR(x, par));
	}
	FPosvsLT->SaveAs("FPosvsLT.C");



	TGraph * FZerovsLT = new TGraph();
    FZerovsLT->SetName("FZerovsLT");
	for(int i = 0; i<1000; i++){
	    double x[4] = {1, 0, i*0.001, 0};
		cout<<x[1]<<"\t"<<FZero(x, par)<<endl;
		FZerovsLT->SetPoint(i, (i*0.001), FZero(x, par));
	}
	FZerovsLT->SaveAs("FZerovsLT.C");
}

/*void GetFs(double VL, double VR, double gL, double gR, double mt = mtop, double mW = MW, double mb = mB) {
    double par[3] = {mt, mW, mb};
    double x[4] = {VL, VR, gL, gR};
    Coefficients ceof;
    ceof.m = FNeg(x, par);
    ceof.n = FZero(x, par);
    ceof.k = FR(x, par);
    return ceof;
}*/
