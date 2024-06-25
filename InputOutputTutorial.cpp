#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    
    std::string fileName="tempData.csv";
    
    std::ofstream outFile(fileName);
    char delimiter = ';';
    outFile << "Apple" << delimiter << "Strawberry" << delimiter << "Banana" << delimiter << "Pineapple";
    outFile.close();
    
    std::ifstream inFile(fileName);
    if(inFile.is_open()){
        std::string perLine;
        std::getline(inFile, perLine);
        std::cout << perLine << "\n";
    }
    
    std::stringstream strStream;
    
    return 0;
}
