#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

#include <iostream>
#include <stack>
#include <deque>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack<T> &other);
        MutantStack<T> &operator=(const MutantStack<T> &other);
        ~MutantStack();
     
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
        
        
        iterator begin();
        iterator end();
        const_iterator begin() const;
        const_iterator end() const;

        reverse_iterator rbegin();
        reverse_iterator rend();
        const_reverse_iterator rbegin() const;
        const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

#endif