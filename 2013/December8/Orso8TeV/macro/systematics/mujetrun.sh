#MC
./SystNon2J1T input WW METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no dirName TreesMu stack yes > TreesMu_WW.txt
./SystNon2J1T input SbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_SbarChannel.txt
./SystNon2J1T input SChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_SChannel.txt
./SystNon2J1T input TbarChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_TbarChannel.txt
./SystNon2J1T input TbarWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_TbarWChannel.txt
./SystNon2J1T input TChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_TChannel.txt
./SystNon2J1T input TWChannel METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_TWChannel.txt
./SystNon2J1T input WJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_WJets.txt
./SystNon2J1T input WZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_WZ.txt
./SystNon2J1T input ZJets METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_ZJets.txt
./SystNon2J1T input ZZ METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_ZZ.txt
./SystNon2J1T input TTBar METResolFileName /home/nadjieh/work/AnalysisClasses/ToyAnalysis/macro/METresolutions.root dojetpt yes isData no  dirName TreesMu stack yes > TreesMu_TTBar.txt

mv TreesMu*.root forStack/jetCut; 
mv TreesMu*.txt forStack/jetCut/txt/;
