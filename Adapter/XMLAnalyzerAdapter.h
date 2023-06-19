#ifndef XML_ANALYZER_ADAPTER_H
#define XML_ANALYZER_ADAPTER_H

#include <string>
#include "ThirdPartyJSONAnalyzer.h"
#include <iostream>

using namespace std;

class XMLAnalyzerAdapter {
private:
    ThirdPartyJSONAnalyzer jsonAnalyzer;

public:
    void analyzeXML(const string& xmlData);

private:
    string convertXMLtoJSON(const string& xmlData);
};

#endif  // XML_ANALYZER_ADAPTER_H
