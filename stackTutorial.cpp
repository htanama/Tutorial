#include <iostream>
#include <stack>
#include <string>
#include <vector> // To temporarily store popped elements

// stack does not have bottom member fuction, stack only has pop member function. 

int main() {
    std::stack<std::string> myStack;

    myStack.push("Matthew");
    myStack.push("Mark");
    myStack.push("Luke");
    myStack.push("John");

    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
        return 0;
    }
    std::cout << "Top element: " << myStack.top() << std::endl; 

    // Since stack does not have bottom member function we need temporary vector to store the data.

    std::vector<std::string> tempElements;

    // Pop all elements and store them
    while (!myStack.empty()) {
        tempElements.push_back(myStack.top());
        myStack.pop();
    }

    // The first element pushed is now the last one in tempElements
    // The bottom of the original stack is now the last element in tempElements
    if (!tempElements.empty()) {
        std::cout << "Bottom element: " << tempElements.back() << std::endl;
    } else {
        std::cout << "Stack was empty." << std::endl;
    }

    // Restore the stack (optional, but usually desired)
    for (int i = tempElements.size() - 1; i >= 0; --i) {
        myStack.push(tempElements[i]);
    }

    std::cout << "Top element after restoration: " << myStack.top() << std::endl; // Should be "John"

    std::cout << "stack size: " << myStack.size() << std::endl;

    return 0;
}
