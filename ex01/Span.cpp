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

