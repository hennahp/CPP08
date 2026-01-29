#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << BLUE << "\nTop of mstack: " << RESET << mstack.top() << std::endl;
    mstack.pop();
    std::cout << BLUE << "\nSize of mstack: " << RESET << mstack.size() << std::endl;
    std::cout << BLUE << "\nTop of mstack after pop: " << RESET << mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << BLUE << "\nTop of mstack before iteration: " << RESET << mstack.top() << std::endl;
    std::cout << BLUE << "\nElements in mstack:" << RESET << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << BLUE << "\nTop of stack s: " << RESET << s.top() << std::endl;
    return 0;
}