#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    try
    {
        std::cout << BLUE << "Creating a Span of size 5..." << RESET << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
       
        std::cout << GREEN << "Shortest Span: " << RESET << sp.shortestSpan() << std::endl;
        std::cout << GREEN << "Longest Span : " << RESET << sp.longestSpan() << std::endl;

        std::cout << BLUE << "\nCreating a large Span of size 10000 and adding random numbers..." << RESET << std::endl;
        srand(time(NULL));
        Span largeSpan(100000);
        std::vector<int> v;

        for(int i = 0; i < 100000; i++)
            v.push_back(rand());
        
        largeSpan.addNumbers(v.begin(), v.end());
        std::cout << GREEN << "Shortest Span: " << RESET << largeSpan.shortestSpan() << std::endl;
        std::cout << GREEN << "Longest Span: " << RESET << largeSpan.longestSpan() << std::endl;

        std::cout << BLUE << "\nAttempting to add a number to a full Span..." << RESET << std::endl;
        sp.addNumber(42);
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }
    try
    {
        std::cout << BLUE << "\nCreating a Span of size 1 and trying to find spans..." << RESET << std::endl;
        Span smallSpan(1);
        smallSpan.addNumber(10);
        std::cout << GREEN << "Shortest Span: " << RESET << smallSpan.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    return 0;
}
