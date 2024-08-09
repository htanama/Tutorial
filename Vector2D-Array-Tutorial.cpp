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
#include <vector>

int main() {
   
   const int SIZE = 4;
   std::vector<std::vector<bool>> board2D;
   
   board2D.resize(SIZE, std::vector<bool>(SIZE) );
   
   // resize outer vector - which is row 
   
   // resize inner vector - which is column
   
   // Initialize vector element
   for(int row = 0; row < board2D.size(); ++row){ // board2D.size() - outer vector
       // board2D[row].size() - the size of each column in a vector (inner vector)
       for(int col = 0; col < board2D[row].size(); ++col){
           board2D[row][col] = true;
       }
   }
   
   // Display the vector on the screen
    std::cout<< "The first method to print the elements of vector on the screen using nested for loop\n" << std::endl;
   for(int y = 0; y < board2D.size(); ++y){ // row - outer vector
       // board2D[0].size() - we assumed that all the column sizes are the same with index column zero [0]. col - inner vector
       for(int x = 0; x < board2D[0].size(); ++x){ // col - inner vector
           std::cout << board2D[y][x] << " ";
       }
       std::cout << std::endl;
   }
   
    std::cout << std::endl;
    std::cout<< "The second method to print the elements of vector on the screen using range-based for loop\n" << std::endl;
    for(auto& outerArrayRow : board2D){ // outer vector - row
        for (bool innerArrayCol : outerArrayRow){ // inner vector - col
            std::cout << innerArrayCol << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
    std::cout<< "The third method to print the elements of vector on the screen using iterator \n" << std::endl;
    for(std::vector<std::vector<bool>>::iterator itOuter = board2D.begin(); itOuter != board2D.end(); ++itOuter){ // outer vector
        for(std::vector<bool>::iterator itInner = itOuter->begin(); itInner != itOuter->end(); ++itInner ){
            std::cout << *itInner << " ";
        }
        std::cout << std::endl;
        
    }
    
    return 0;
}
