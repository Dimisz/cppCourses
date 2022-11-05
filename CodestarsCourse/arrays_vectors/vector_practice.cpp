#include <iostream>
#include <vector>


int main()
{
    std::vector <std::string> names;
    names.push_back("John1");
    names.push_back("John2");
    names.push_back("John3");
    names.push_back("John4");
    names.push_back("John5");
    
    names.insert(names.begin()+2, "John Baugh");
    names.pop_back();
    
    for(std::string name : names)
    {
        std::cout << name << std::endl;
    }
    
    
    return 0;
}
