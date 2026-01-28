#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), value);
    if(it == container.end())
        throw std::exception();
    return it;
}

template <typename T>
typename T::const_iterator easyfind(const T &container, int value)
{
    typename T::const_iterator it;
    it = std::find(container.begin(), container.end(), value);
    if(it == container.end())
        throw std::exception();
    return it;
}

#endif