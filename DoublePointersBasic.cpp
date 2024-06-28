#include <bits/stdc++.h>
using namespace std;

int main() {

    int num = 3;
    int *ptrInt = &num;
    
    // double pointer variable can only point to a pointer variable
    int **dbPtrInt = &ptrInt;
    
    cout << std::setw(25) << std::left << "address of num: " << &num << endl;
    cout << std::setw(25) << std::left <<"address of *ptrInt: " << ptrInt << endl;
    cout << std::setw(25) << std::left <<"address of *dbPtrInt: " << *dbPtrInt << endl << endl;
    cout << std::setw(25) << std::left <<"address &ptrInt: "<< &ptrInt << endl;
    cout << std::setw(25) << std::left <<"Who address is this? "<< dbPtrInt << endl << endl;
    
    cout << std::setw(25) << std::left << "The value of num: "<< num << endl;
    cout << std::setw(25) << std::left <<"The value of ptrInt: " << *ptrInt << endl;
    cout << std::setw(25) << std::left << "The value of dbPtrInt: " << **dbPtrInt << endl;
    
    ptrInt=NULL;
    dbPtrInt=NULL; 
    
    return 0;
}
