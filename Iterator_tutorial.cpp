#include <iostream>
#include <vector>

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
    
 
    return 0;
}