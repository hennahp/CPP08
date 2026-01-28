#ifndef SPAN_HPP
# define SPAN_HPP

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

#include <vector>
#include <algorithm>
#include <exception>
#include <limits>

class Span
{
    private:
        unsigned int _maxsize;
        std::vector<int> _numbers;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();

        void addNumber(int number);

        int shortestSpan() const;
        int longestSpan() const;

        template <typename InputIterator>
        void addNumbers(InputIterator begin, InputIterator end);


        class SpanFullException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class NoSpanException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif