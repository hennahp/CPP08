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

int Span::shortestSpan() const
{
    if(_numbers.size() < 2)
        throw Span::NoSpanException();

    std::vector<int> tmp = _numbers;
    std::sort(tmp.begin(), tmp.end());

    int minSpan = std::numeric_limits<int>::max();

    for(size_t i = 1; i < tmp.size(); ++i)
    {
        int diff = tmp[i] - tmp[i - 1];
        if(diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan() const
{
    if(_numbers.size() < 2)
        throw Span::NoSpanException();

    int minNum = *std::min_element(_numbers.begin(), _numbers.end());
    int maxNum = *std::max_element(_numbers.begin(), _numbers.end());

    return maxNum - minNum; 
}

