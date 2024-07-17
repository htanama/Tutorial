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
#include <string>
#include <iterator>

class Student {
    std::string mStudentName;
    int mAge;
    int mId; 
public:
    Student(std::string name, int age, int id) : mStudentName(name), mAge(age), mId(id) {}
    
    std::string studentName() const {
        return mStudentName;
    }
    
    int studentAge() const{
        return mAge;
    }
    
    int studentID() const {
        return mId;
    }
};

int main() {
    // Create a vector with some students
    std::vector<Student> myVector = {
        Student("John", 20, 12345)
        ,Student("Jane", 22, 67890)
        ,Student("Jim", 21, 11223)
        ,Student("Jack", 25, 67123)
        ,Student("Jason", 24, 38414)
    };

    for(auto& student : myVector)
    {
        std::cout << student.studentName() << ", " << student.studentAge() << " year old, Id: " << student.studentID();
        std::cout << " \n";
    }
    std::cout << "\n\n";
    
    Student newStudent("Harry", 40, 23425);
    std::vector<Student>::iterator itr = myVector.begin();
    myVector.insert(itr+2, newStudent);
    
    std::cout << "Using iterator to print name\n";
    itr = myVector.begin();
    while(itr != myVector.end())
    {
        std::cout << itr->studentName() << ", " << itr->studentAge() << " year old, Id: " << itr->studentID();
        std::cout << " \n";
        ++itr;
    }
    std::cout << "\n\n";
    std::cout << "Using for range-based iterator to print name\n";
    for(Student& element : myVector){
        std::cout << element.studentName() << ", " << element.studentAge() << " year old, Id: " << element.studentID();
        std::cout << " \n";
    }
    
    return 0;
}
