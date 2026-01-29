#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "\nTop of mstack: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "\nSize of mstack: " << mstack.size() << std::endl;
    std::cout << "\nTop of mstack after pop: " << mstack.top() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "\nTop of mstack before iteration: " << mstack.top() << std::endl;
    std::cout << "\nElements in mstack:" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "\nTop of stack s: " << s.top() << std::endl;
    return 0;
}