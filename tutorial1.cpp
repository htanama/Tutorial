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
        
    }
    
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
    // first is instant of Person object
    Person first; 
    
    // studentDB is a vector of Person object
    std::vector<Person> studentDB(1);
    
    // use dot to access the std::vector::size() member function 
    int x = studentDB.size();
    
    // use the index of vector [i] and use dot to access the member function inside the Person object
    // studentDB is a vector of object Person
    studentDB[0].setName("Harry");
    
    std::cout <<first.getName() << std::endl;
    std::cout << x << std::endl;
    std::cout << studentDB[0] .getName() << std::endl;
   

    return 0;
}
