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
    Person first;
    std::vector<Person> studentDB(1);
    
    int x = studentDB.size();
    
    studentDB[0].setName("Harry");
    
    std::cout <<first.getName() << std::endl;
    std::cout << x << std::endl;
    std::cout << studentDB[0] .getName() << std::endl;
    
    studentDB.push_back()
    

    return 0;
}
