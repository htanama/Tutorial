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
