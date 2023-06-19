#include <iostream>
#include "XMLAnalyzerAdapter.h"
#include <iostream>

using namespace std;

int main() {
    string xmlData = "<data><symbol>ABC</symbol><price>10.50</price></data>";

    XMLAnalyzerAdapter adapter;
    adapter.analyzeXML(xmlData);

    return 0;
}
