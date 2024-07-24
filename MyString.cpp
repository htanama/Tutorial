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
        //strcpy(mBuffer, str);
        for(int i = 0; i < mSize; ++i)
            mBuffer[i] = str[i];
    }
    
    //Destructor
    ~MyString(){
        delete[] mBuffer;
    }
    // Overloading Assignment Operator
    MyString& operator=(const MyString &original){
        *mBuffer = *original.GetBuffer();
        
        return *this;
    }
    
    void Print() const{
        printf("%s", mBuffer); // C style print
        //std::cout << mBuffer; // C++ style print
    }
    
    char* GetBuffer() const{
        return mBuffer;
    }
};

int main() {

    MyString myFirstStr("hello world");
    //myFirstStr.Print();
    std::cout << std::endl;
    std::cout << myFirstStr.GetBuffer();
    return 0;
}
