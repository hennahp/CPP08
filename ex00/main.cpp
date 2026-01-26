#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
    std::vector<int> vec;
    std::list<int> lst;
    std::deque<int> deq;

    for(int i = 0; i <5; i++)
    {
        vec.push_back(i * 10);
        lst.push_back(i + 1);
        deq.push_back(i * 5);
    }
    try
    {
        std::cout << BLUE << "Found in vector: " << RESET << *easyfind(vec, 20) << std::endl;
        std::cout << BLUE << "Found in list: " << RESET << *easyfind(lst, 3) << std::endl;
        std::cout << BLUE << "Found in deque: " << RESET << *easyfind(deq, 15) << std::endl;
        std::cout << BLUE << "Searching missing value in vector: " << RESET;
        std::cout << *easyfind(vec, 25) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "Value not found: " << e.what() << RESET << std::endl;
    }
    return 0;
}