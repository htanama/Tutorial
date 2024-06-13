#include <iostream>
#include <vector>
#include <map>
#include <string>

// Define the Food class
class Food {
private:
    std::string name;

public:
    // Constructor
    Food(const std::string& foodName) : name(foodName) {}

    // Getter for the name
    std::string getName() const {
        return name;
    }
};

int main() {
    // Create a vector of Food objects
    std::vector<Food> foods_vector;
    
    // Populate the foods_vector with Food objects
    foods_vector.push_back(Food("Pizza"));
    foods_vector.push_back(Food("Burger"));
    foods_vector.push_back(Food("Pasta"));
    foods_vector.push_back(Food("Salad"));

    // Create a map to store menu items
    std::map<char, std::vector<Food>> menuItem;

    // Define a key for the menu item
    char key = 'A';

    // Insert the vector into the map using the insert method
    menuItem.insert(std::make_pair(key, foods_vector));

    // Verify insertion by printing the contents of the map
    if (menuItem.find(key) != menuItem.end()) {
        std::cout << "Insertion successful!" << std::endl;
        std::cout << "Menu items for key '" << key << "':" << std::endl;

        for (const Food& food : menuItem[key]) {
            std::cout << " - " << food.getName() << std::endl;
        }
    } else {
        std::cout << "Insertion failed!" << std::endl;
    }

    return 0;
}
