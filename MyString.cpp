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
    MyString() : mSize(0), mBuffer(nullptr) {}
    
    MyString(const char *str){
        mSize = strlen(str);
        mBuffer = new char[mSize + 1]; // add 1 for null terminator '\0'
        // There are 3 ways to copy array of char:
        // First Way:
        //strcpy(mBuffer, str);
        
        /*/Seoncd Way:
        for(int i = 0; i < mSize; ++i)
            mBuffer[i] = str[i]; */
            
        // Third Way: never do memcopy
        memmove(mBuffer, str, mSize);
    }
    
    //Destructor
    ~MyString(){
        delete[] mBuffer;
    }
    // Copy Constructor
    MyString(const MyString &original){
        *this = original;
    }
    
    // Overloading Assignment Operator
    MyString& operator=(const MyString &original){
        // if(this == &original) return *this;
        if(this != &original){
            SetString(original.mBuffer);
        }
        
        return *this;
    }
    
    // Move Constructor
    MyString(MyString&& original){
        mBuffer = original.mBuffer;
        original.mBuffer = nullptr;
    }
    
    // Move Assignment Operator
    MyString &operator=(MyString&& original) noexcept{
        if(this == &original) return *this;

        SetString(original.mBuffer);
        original.mBuffer = nullptr;

        return *this;
    }
    
    void Print() const{
        printf("%s", mBuffer); // C style print
        //std::cout << mBuffer; // C++ style print
    }
    
    // Mutator function
    void SetString(const char *str){
        if(mBuffer != nullptr){
            delete[] mBuffer;
        }
        mSize = strlen(str + 1); // add 1 for null terminator '\0'
        mBuffer = new char[mSize]; 
        strcpy(mBuffer, str);
    }
    
    char* GetBuffer() const{
        return mBuffer;
    }
    
    /*/ Implementation of the operator<<
    std::ostream& operator<<(std::ostream& stream, const MyString& string) {
        stream << string.mBuffer;
        return stream;
    }*/
};

int main() {

    MyString myFirstStr("Hello world");
    myFirstStr.Print();
    std::cout << std::endl;
    myFirstStr.SetString("Welcome");
    std::cout << myFirstStr.GetBuffer();
    
    return 0;
}
