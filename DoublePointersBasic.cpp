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
    
#include <bits/stdc++.h>
using namespace std;

int main() {

    int num = 3;
    int *ptrInt = &num;
    
    // double pointer variable can only point to a pointer variable
    int **dbPtrInt = &ptrInt;
    
    cout << std::setw(30) << std::left << "address of num: " << &num << endl;
    cout << std::setw(30) << std::left <<"address of *ptrInt: " << &ptrInt << endl;
    cout << std::setw(30) << std::left <<"address of *dbPtrInt: " << &dbPtrInt << endl << endl;
    
    cout << std::setw(30) << std::left << "address of num: " << &num << endl;
    cout << std::setw(30) << std::left <<"ptrInt point to address &num "<< ptrInt << endl << endl;
    
    cout << std::setw(50) << std::left <<"dbPtrInt point to &ptrInt's address "<< dbPtrInt << endl;
    
    cout << std::setw(50) << std::left <<"dbPtrInt have access to &num's address too "<< *dbPtrInt << endl << endl;
    
    cout << std::setw(30) << std::left << "The value of num: "<< num << endl;
    cout << std::setw(30) << std::left <<"The value of ptrInt: " << *ptrInt << endl;
    cout << std::setw(30) << std::left << "The value of dbPtrInt: " << **dbPtrInt << endl;
    
    ptrInt=nullptr;
    dbPtrInt=nullptr; 
    
    return 0;
}
