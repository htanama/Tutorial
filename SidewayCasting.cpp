// Sideway casting
/*
Base Class:
A virtual destructor is essential in the base class to enable polymorphic behavior.
Derived Classes:
Derived1 and Derived2 are derived classes that share a common base class (Base).
Sideways Cast:
We attempt to cast a pointer to Derived1 (b) into a pointer to Derived2 using dynamic_cast.
Check for Success:
The dynamic_cast returns nullptr if the cast fails, indicating that the object pointed to by b is not a Derived2 object.
Important Points:
RTTI:
Dynamic casting requires Run-Time Type Information (RTTI) to be enabled in the compiler settings.
dynamic_cast provides a safe way to cast pointers or references, as it checks the actual type of the object at runtime.
Use Case:
Sideways casting can be useful in scenarios where you need to determine the specific type of an object within a complex inheritance hierarchy.
*/

#include <iostream>

class Base {
public:
    virtual ~Base() {} // Virtual destructor for polymorphism
};

class Derived1 : public Base {
public:
    void print() { std::cout << "Derived1\n"; }
};

class Derived2 : public Base {
public:
    void print() { std::cout << "Derived2\n"; }
};

int main() {
    Derived1 d1;
    Base* b = &d1;

    // Sideways cast using dynamic_cast
    Derived2* d2 = dynamic_cast<Derived2*>(b);

    if (d2) {
        d2->print();
    } else {
        std::cout << "Sideways cast failed\n";
    }

    return 0;
}
