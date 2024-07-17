/*
    MIT License
    
    Copyright (c) 2024 Harry Tanama
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the 
    "Software"), to deal in the Software without restriction, including 
    without limitation the rights to use, copy, modify, merge, publish, 
    distribute, sublicense, and/or sell copies of the Software, and to 
    permit persons to whom the Software is furnished to do so, subject to 
    the following conditions:
    
    The above copyright notice and this permission notice shall be 
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
    CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
    SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

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
