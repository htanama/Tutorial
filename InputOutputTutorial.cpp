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
    inFile.close();
    
    std::string myLine = "Apple;Strawberry;Banana;Pineapple";
    std::stringstream strStream(myLine);
    std::string outPutLine;
    
    std::getline(strStream, outPutLine, delimiter);
    std::cout << outPutLine << "\n";
    
    std::getline(strStream, outPutLine, delimiter);
    std::cout << outPutLine << "\n";
    
    std::getline(strStream, outPutLine, delimiter);
    std::cout << outPutLine << "\n";
    
    std::getline(strStream, outPutLine, delimiter);
    std::cout << outPutLine << "\n";
      
    return 0;
}
