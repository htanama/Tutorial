#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator> 

struct Interest
{
    std::vector<std::string> listDB
    { 
        "Reading", 
        "Writing",
        "Running", 
        "Biking", 
        "Walking",
        "Swimming"
    };
};

class Person
{
private:
    int mAge;
    std::string mName;
    std::vector<Interest> mHobby;
    
public:
    Person() : mAge(18), mName("John Doe")
    {
        // default constructor body
    }
    
    // overloading constructor
    Person(int age, std::string name) : mAge(age), mName(name)
    {
    }
    
    int getAge() const{
        return mAge;
    }
    
    void setAge(int age){
        mAge = age;
    }
    
    std::string getName() const{
        return mName;
    }
    
    void setName(std::string name){
        mName = name;
    }
    
    std::string getHobby() const
    {
         return "";
    }
    
};

int main()
{
    // he and she are an object of a Person class
    // both have default name to "John Doe"
    Person he, she; 
    
    // to access object member function use (dot)
    std::cout <<"she: "<< she.getName() << std::endl;
    std::cout <<"he: " << he.getName() << std::endl;
    
    std::cout  << std::endl;
    //change the name of object she to "Lara Croft"
    she.setName("Lara Croft");
    
    std::cout <<"she: "<< she.getName() << std::endl;
    std::cout <<"he: " << he.getName() << std::endl;
    
    // studentDB is a vector of Person object
    std::vector<Person> studentDB(1);
    
    // use dot to access the std::vector::size() member function 
    std::cout <<"size of studentDB vector " << studentDB.size() << std::endl;
    
    // use the index of vector [i] and use dot to access the member function inside the Person object
    // studentDB is a vector of object Person
    studentDB[0].setName("Harry");
    
    std::cout << studentDB[0] .getName() << std::endl;
    
    // inserting object into vector 
    // make sure the data type inside the vector match with the data type 
    // we are inserting Person data type into studentDB vector
    studentDB.push_back(he);
    studentDB.push_back(she);
    
     std::cout  << std::endl;
     
    std::cout << "Using for range-based loop to print the name of student from studentDB vector of Person object" << std::endl; 
    // using for range-based loop to print the name of student from studentDB vector of Person object
    for(Person found : studentDB){
        std::cout << found.getName() << std::endl;
    }
    
    int vecSize = studentDB.size();
    
    // use dot to access the std::vector::size() member function 
    std::cout <<"size of studentDB vector after inserting Person objects: " << vecSize << "\n\n";
    
    std::cout << "Using iterator inside for loop to print the name of student from studentDB vector of Person object\n"; 
    // using iterator inside for loop to print the name of student from studentDB vector of Person object
    std::vector<Person>::iterator itr = studentDB.begin();
    for(; itr != studentDB.end(); ++itr)
        std::cout << itr->getName() << std::endl;    
    
    return 0;
}
