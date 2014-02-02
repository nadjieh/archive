HOMELIB		= $(HOME)/lib
ROOTINC		=-I$(shell root-config --incdir)
ROOTLIBS	=$(shell root-config --libs) -lMinuit
ROOTCFLAGS	=$(shell root-config --cflags)
ROOTGLIBS	=$(shell root-config --glibs) -lMinuit
TROOTLIBS	= -L$(HOMELIB) -lToto.2013
ESLIBS 		= -L$(HOMELIB) -lEventSelection.2013
PHYSOBJLIB	=-L$(HOMELIB) -lPhysObj.2013
TOYLIB	=-L$(HOMELIB) -lToyAnalysis.2013
ORSOLIB = -L$(HOMELIB) -lOrsoNtuples.2013
TROOTINCLUDES = -I../../../../TopBrussels/TopTreeProducer/interface
PHYSOBJINC = -I../../../AnalysisClasses/PhysicsObjects/interface/
TOYINCLUDES = -I../../../AnalysisClasses/ToyAnalysis/interface/
MYHEADERS=-I../../interface

CXX=g++

GLIBS		=$(ROOTGLIBS) 
LIBS		= $(ROOTLIBS)



all:  sys clean

non: NON clean

write: W clean


sys:
	@echo "Compiling the fitGauss .... \n"
	$(CXX) fitGauss.C -c -o fitGauss.o -O0 $(ROOTCFLAGS) -fPIC -g
	@echo "Linking ...... \n"
	g++ fitGauss.o -o doFit $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread 
NON:
	@echo "Compiling the SystOrsoHistogramCreator .... \n"
	$(CXX) SystOrsoHistogramCreator.C -c -o SystOrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ SystOrsoHistogramCreator.o -o SystNon2J1T $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

W:
	@echo "Compiling the WritePDFs .... \n"
	$(CXX) WritePDFs.C -c -o WritePDFs.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ WritePDFs.o -o writePDFs $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)


clean:
	@echo "Cleaning..."
	@rm -f *.o


