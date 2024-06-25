#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    
    std::string fileName="tempData.csv";
    std::ofstream outFile(fileName);
    char delimiter = ';';
    outFile << "Apple" << delimiter << "Strawberry" << delimiter << "Banana";
    
    outFile.cloes();
    std::stringstream strStream;
    
    return 0;
}
