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

   // Resize 2D vector
   //              ROW , COL
   board2D.resize(SIZE, std::vector<bool>(SIZE) );
    /* or 
    matrix.resize(ROW, vector<char>(COL));
    or
    matrix = vector<vector<char> >(ROW, vector<char>(COL));
    
    or 
    myVector.resize(n); // this is the outer vector - row
    for (int i = 0; i < n; ++i) // this is the inner vector - col
        myVector[i].resize(m);
    */
   // resize outer vector - which is  row 
   // resize inner vector - which is column

    /*
    Each element of board2D is itself a vector.
    board2D.size(): This gives the number of rows in the 2D vector. It returns the size of the outer vectors (i.e., the number of rows).
    board2D[row]: This accesses the row at index row in the 2D vector. board2D[row] itself is a vector representing that specific row.
    board2D[row].size(): This gives the number of columns in the row at index row. Each row is a vector, 
    it returns the size of elements (i.e., the number of columns in that row).
    */
    
   // Initialize vector element
   for(int row = 0; row < board2D.size(); ++row){ // board2D.size() - outer vector
       // board2D[row].size() - This is the size of the row. It returns the number of elements in the row-th row of the 2D vector. 
       // Essentially, it gives you the size of that specific row, which is the number of columns in that row.
       for(int col = 0; col < board2D[row].size(); ++col){
           board2D[row][col] = true;
       }
   }
    // board2D.size() gives you the number of rows in the 2D vector.
    // board2D[row].size() gives you the number of columns in the specific row at index row.
   
   // Display the vector on the screen
    std::cout<< "The first method to print the elements of vector on the screen using nested for loop\n" << std::endl;
   for(int y = 0; y < board2D.size(); ++y){ // row - outer vector
       // board2D[0].size() - we assumed that all the row sizes are the same with the  index of row zero [0]. This is the inner vector - col
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
        for(std::vector<bool>::iterator itInner = itOuter->begin(); itInner != itOuter->end(); ++itInner ){ // inner vector
            std::cout << *itInner << " ";
        }
        std::cout << std::endl;
        
    }
    
    return 0;
}
