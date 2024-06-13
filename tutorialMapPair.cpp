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
    
    return 0;
}
