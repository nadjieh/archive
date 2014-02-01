#MC
./TOPOrsoHistogramCreator input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu > TreesMu_WW.txt
./TOPOrsoHistogramCreator input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_SbarChannel.txt
./TOPOrsoHistogramCreator input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_SChannel.txt
./TOPOrsoHistogramCreator input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TbarChannel.txt
./TOPOrsoHistogramCreator input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TbarWChannel.txt
./TOPOrsoHistogramCreator input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TChannel.txt
./TOPOrsoHistogramCreator input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TWChannel.txt
./TOPOrsoHistogramCreator input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_WJets.txt
./TOPOrsoHistogramCreator input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_WZ.txt
./TOPOrsoHistogramCreator input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_ZJets.txt
./TOPOrsoHistogramCreator input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_ZZ.txt
./TOPOrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu > TreesMu_TTBar.txt

#./DataTOPOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu > TreesMu_data.txt
#./QCDTOPOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu > TreesMu_qcd.txt

#./DefWTOPOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu > TreesMu_DefW.txt
#./WTemplatePlots input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu > TreesMu_Wtemp.txt

mv TreesMu*.root TreesMu*.txt forAdding/2J2T/; 



#MC
./TOPOrsoHistogramCreator input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no dirName TreesMu stack yes > TreesMu_WW.txt
./TOPOrsoHistogramCreator input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SbarChannel.txt
./TOPOrsoHistogramCreator input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_SChannel.txt
./TOPOrsoHistogramCreator input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarChannel.txt
./TOPOrsoHistogramCreator input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TbarWChannel.txt
./TOPOrsoHistogramCreator input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TChannel.txt
./TOPOrsoHistogramCreator input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TWChannel.txt
./TOPOrsoHistogramCreator input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WJets.txt
./TOPOrsoHistogramCreator input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_WZ.txt
./TOPOrsoHistogramCreator input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZJets.txt
./TOPOrsoHistogramCreator input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_ZZ.txt
./TOPOrsoHistogramCreator input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData no  dirName TreesMu stack yes > TreesMu_TTBar.txt


./QCDTOPOrsoHistogramCreator input Data METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root isData yes  dirName TreesMu stack yes > TreesMu_qcd.txt



mv TreesMu*.root TreesMu*.txt forStack/2J2T/; 
