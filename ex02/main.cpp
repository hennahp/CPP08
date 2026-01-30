#include "MutantStack.hpp"

int main()
{
    std::cout << BLUE << "======== MutantStack Test ========" << RESET << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << BLUE << "\nTop of mstack: " << RESET << mstack.top() << std::endl;
    mstack.pop();
    std::cout << BLUE << "\nSize of mstack after pop: " << RESET << mstack.size() << std::endl;
    std::cout << BLUE << "\nTop of mstack after pop: " << RESET << mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << BLUE <<"\n======== Iterating through MutantStack ========" << RESET << std::endl;
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
    std::cout << BLUE <<"\n======== Reverse Iterating through MutantStack ========" << RESET << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    std::cout << BLUE << "\nElements in mstack (reverse):" << RESET << std::endl;
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    std::cout << BLUE << "\n======== Copying MutantStack to std::stack ========" << RESET << std::endl;
    MutantStack<int> copyStack(mstack);
    std::cout << BLUE << "\nTop of copied stack: " << RESET << copyStack.top() << std::endl;

    std::cout << BLUE << "\nPopping all elements from copied stack:" << RESET << std::endl;
    while (!copyStack.empty())
    {
        std::cout << copyStack.top() << std::endl;
        copyStack.pop();
    }

    std::cout <<BLUE << "\n========Large MutantStack Test ========" << RESET << std::endl;
    MutantStack<int> largeStack;
    for (int i = 0; i < 10000; ++i)
    {
        largeStack.push(i);
    }
    std::cout << BLUE << "\nSize of largeStack: " << RESET << largeStack.size() << std::endl;
    std::cout << BLUE << "\nFirst 5 elements in largeStack:" << RESET << std::endl;
    MutantStack<int>::iterator lit = largeStack.begin();
    for (int i = 0; i < 5; ++i, ++lit)
    {
        std::cout << *lit << std::endl;
    }
    
    std::stack<int> s(mstack);
    std::cout << BLUE << "\nTop of stack s: " << RESET << s.top() << std::endl;
    return 0;
}