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
#include <iterator>
#include <iostream>

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

        template <typename It>
        void addNumbers(It begin, It end)
        {
            size_t distance = std::distance(begin, end);
            if(_numbers.size() + distance > _maxsize)
                throw Span::SpanFullException();
            _numbers.insert(_numbers.end(), begin, end);
        }

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