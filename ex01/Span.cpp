#include "Span.hpp"

Span::Span() : _maxsize(0), _numbers()
{
}

Span::Span(unsigned int N) : _maxsize(N), _numbers()
{
}

Span::Span(const Span &other)
{
    *this = other;
}

Span &Span::operator=(const Span &other)
{
    if(this != &other)
    {
        _maxsize = other._maxsize;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
    if(_numbers.size() >= _maxsize)
        throw Span::SpanFullException();
    _numbers.push_back(number);
}

const char* Span::SpanFullException::what() const throw()
{
    return "Span is full. Cannot add more numbers.";
}

const char* Span::NoSpanException::what() const throw()
{
    return "Not enough numbers to find a span.";
}