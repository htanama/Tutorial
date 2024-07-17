/*
    MIT License
    
    Copyright (c) 2024 Harry Tanama
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the 
    "Software"), to deal in the Software without restriction, including 
    without limitation the rights to use, copy, modify, merge, publish, 
    distribute, sublicense, and/or sell copies of the Software, and to 
    permit persons to whom the Software is furnished to do so, subject to 
    the following conditions:
    
    The above copyright notice and this permission notice shall be 
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF 
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
    CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
    SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

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
    
    // Create a pair to insert
    std::pair<char, std::vector<int>> pair_to_insert = std::make_pair('a', int_vec);
    // Insert the pair into the map   
    std::pair<std::map<char, std::vector<int>>::iterator, bool> result = data_map.insert(pair_to_insert);

    
    for(std::pair<const char, std::vector<int>> &iter : data_map)
    {
        std::cout << iter.first << ": ";
        for(int num : iter.second){
            std::cout << num << " \n";
        }
    }
    return 0;
}
