#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"


int main()
{
    std::vector<int> vec;
    for (int i = 0; i < 5; ++i)
    {
        vec.push_back(i);
    }
    std::vector<int>::iterator it = easyfind(vec, 3);
    if (it != vec.end())
    {
        std::cout << "Found at index " << it - vec.begin() << std::endl;
    }
    else
    {
        std::cout << "Not found" << std::endl;
    }
    it = easyfind(vec, 99);
    if (it != vec.end())
        std::cout << "Found: " << *it << std::endl;
    else
        std::cout << "Not found" << std::endl;

    std::list<int> lit;
    for (int i = 0; i < 10; ++i)
    {
        lit.push_back(i);
    }
    std::list<int>::iterator lit_it = easyfind(lit, 5);
    if (lit_it != lit.end())
    {
        std::cout << "Founr " << std::distance(lit.begin(), lit_it) << std::endl;
    }
    else
        std::cout << "Not found" << std::endl;
    return 0;
}