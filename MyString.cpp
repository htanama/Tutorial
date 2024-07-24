#include <iostream>
#include <cstring>

class MyString
{
private: 
    char *mBuffer;
    unsigned int mSize;
    
public: 
    MyString(const char *str){
        mSize = strlen(str);
        mBuffer = new char();
        strcpy(mBuffer, str);
    }
    
    ~MyString(){
        delete[] mBuffer;
    }
    
    void Print() const{
        printf("%s", mBuffer); // C style print
        //std::cout << mBuffer; // C++ style print
    }
};

int main() {

    MyString myFirstStr("hello world");
    myFirstStr.Print();
    
    return 0;
}
