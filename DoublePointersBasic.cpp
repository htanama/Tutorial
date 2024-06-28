#include <bits/stdc++.h>
using namespace std;

int main() {

    int num = 3;
    int *ptrInt = &num;
    // double pointer variable can only point to a pointer variable
    int **dbPtrInt = &ptrInt; 
    
    cout <<"address of num:       " << &num << endl;
    cout <<"address of *ptrInt:   " << ptrInt << endl;
    cout <<"address of *dbPtrInt: " << *dbPtrInt << endl << endl;
    cout <<"address &ptrInt      " << &ptrInt << endl;
    cout <<"Who address is this? " << dbPtrInt << endl;
    
    ptrInt=NULL;
    dbPtrInt=NULL; 
    
    return 0;
}
