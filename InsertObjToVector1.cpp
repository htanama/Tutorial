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
    // Create a new student
    Student newStudent("Harry", 40, 23425);

    // Insert the new student at the second position
    // Note: Indexing starts from 0, so the second position is index 1
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
