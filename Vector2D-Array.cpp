#include <iostream>
#include <vector>

int main() {
   
   const int SIZE = 6;
   std::vector<std::vector<bool>> board2D;
   
   board2D.resize(SIZE, std::vector<bool>(SIZE) );
   
   // resize outer vector - which is row 
   
   // resize inner vector - which is column
   
   // Initialize vector element
   for(int row = 0; row < board2D.size(); ++row){ // board2D.size() - outer vector
       // board2D[row].size() - the size of each column in a vector (inner vector)
       for(int col = 0; col < board2D[row].size(); ++col){
           board2D[row][col] = false;
       }
   }

    
    return 0;
}
