#include <iostream>
#include <map>
#include <vector>

int main()
{
    std::map<std::string, float> weather_vec;
    weather_vec["Los Angeles"] = 80.40f; // 80.40 deg fahrenheit. 
    weather_vec["San Francisco"] = 70.50f; 
    
    std::pair<std::string, float> itemToInsert = 
        std::make_pair("New York", 86.50f);
    weather_vec.insert(itemToInsert);
    
    for(std::pair<const std::string, float> &iter : weather_vec)
    {
        std::cout << iter.first << ": " << iter.second << " degree fahrenheit\n";
    }
    
    std::vector<int> int_vec = {1, 2, 3, 4, 5, 6, 7};
    
    std::map<char, std::vector<int>> data_map;
    std::pair<char, std::vector<int>> dataToInsert =
        std::make_pair('a', int_vec);
    data_map['b'].push_back(int_vec[4]);
    data_map['c'].push_back(int_vec[0]);
    data_map['d'].push_back(int_vec[6]);
    
    for(std::pair<const char, std::vector<int>> &iter : data_map)
    {
        std::cout << iter.first << ": ";
        for(int num : iter.second){
            std::cout << num << " \n";
        }
    }
    return 0;
}
