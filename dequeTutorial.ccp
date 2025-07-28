#include <iostream>
#include <deque> // Include the deque header
#include <string>

int main(){
    
    // std::deque (double-ended queue) is an indexed sequence container that allows fast
    // insertion and deletion at both its beginning and its end
    
    std::deque<std::string> myDeque; 
    
    myDeque.push_back("Matthew");
    myDeque.push_back("Mark");
    myDeque.push_back("Luke");
    myDeque.push_back("John");
    
    std::cout << "Front: " << myDeque.front() << std::endl;
    
    std::cout << "Back: " << myDeque.back() << std::endl;
    
    myDeque.pop_back();
    
    std::cout << "Aftar pop_back\nBack: " << myDeque.back() << std::endl;
    
    std::cout << "Deque size: " << myDeque.size() << std::endl;
    
    return 0; 
}
