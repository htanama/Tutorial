#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display function" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() {
        std::cout << "Derived class display function" << std::endl;
    }

    void callBaseDisplay() {
        Base::display();  // Calling the base class function without an object
    }
};

int main() {
    Derived derivedObj;
    derivedObj.display();       // Calls Derived::display
    derivedObj.callBaseDisplay();  // Calls Base::display

    return 0;
}