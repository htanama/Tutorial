#include <iostream>
#include <vector>

class Food
{
private:
    std::vector<std::string> vector_of_Foods = {
        "Hot Dogs",
        "Pizza",
        "Hamburger",
        "Chicken Salad",
        "Tacos",
        "Burrito"
    };
    
public:
    Food () {};
    
    std::string getFood(int index) const{
        return vector_of_Foods[index];
    }
    
    std::string getFood() const{
        return "Getting Food";
    }
    
    std::vector<std::string> getVectorFood() const{
        return vector_of_Foods;
    }
};


int main()
{
    // Declaring a vector
    std::vector<int> myVector = { 1, 2, 3, 4 };

    // Accessing the elements without using iterators
    std::cout <<"Accessing the elements without using iterators\n";
    for (int i = 0; i < myVector.size(); ++i) 
    {
        std::cout << myVector[i] << " ";
    }
 
    std::cout << "\n";
    
    // Declaring an iterator
    std::vector<int>::iterator iter_int;
    
    // Accessing the elements using iterators
    std::cout <<"Accessing the elements with using iterators\n";
    for (iter_int = myVector.begin(); iter_int != myVector.end(); ++iter_int)
    {
        std::cout << *iter_int << " ";
    }
    std::cout << "\n";
    
    std::vector<std::string> myDrinkVector = {"Beer","Coca-Cola", "Water", "Orange Juice", "Wine"};
    
    // Declaring an iterator type std::string
    std::vector<std::string>::iterator iter_string;
    
    // Accessing the elements using iterators
    std::cout <<"Accessing the elements with using iterators\n";
    std::cout <<"Using asterisk (*) to access regular data type (like int, char, string, etc):\n";
    for (iter_string = myDrinkVector.begin(); iter_string != myDrinkVector.end(); ++iter_string)
    {
        std::cout << *iter_string << " ";
    }
    
    std::cout <<"\n\n";
    
    // create one element of myVectorFood vector of Food object 
    // the element will take default value that exist in Food class
    std::vector<Food> myVectorFood(1);
    
    // Declaring an iterator type Food
    std::vector<Food>::iterator iter_Food;
    
    // Accessing the elements using iterators
    std::cout <<"Accessing the elements with using iterators\n";
    
    for (iter_Food = myVectorFood.begin(); iter_Food != myVectorFood.end(); ++iter_Food)
    {
        std::cout <<"Using arrow (->) to access Food object calling member function getVectorFood:\n"; 
        
        for(int i = 0; i < iter_Food->getVectorFood().size(); ++i)
            std::cout << iter_Food->getVectorFood()[i] << ", ";
    }
    
    
    std::cout << "\n\n";
    
    for(std::vector<Food>::iterator iter_vector = myVectorFood.begin(); iter_vector != myVectorFood.end(); ++iter_vector)
    {
        std::vector<std::string> string_food = iter_vector->getVectorFood();
        std::cout <<"Using arrow (->) to access Food object and calling member function getVectorFood() and\naccess vector_of_Foods element using std::at(1): " << iter_vector->getVectorFood().at(1) << " ";
    }
    
    return 0;
}