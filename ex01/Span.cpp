#include "Span.hpp"
#include <exception>
#include <stdexcept>
#include <iostream>

Span::Span() : _n(0)
{

}

Span::~Span()
{

}

Span::Span(int n)
{
	_n = n;
	_v.reserve(_n);
}

Span::Span(const Span & src)
{
	*this = src;
}

Span & Span::operator=(const Span & rhs)
{
	_n = rhs._n;
	_v = rhs._v;
	return *this;
}

void	Span::addNumber(int i)
{
	if (_v.size() == _n)
		throw std::logic_error("vector full");
	std::vector<int>::iterator it;
	for (it = _v.begin(); it != _v.end(); it++)
	{
		if (i < *it)
			break ;
	}
	_v.insert(it, i);
}

int		Span::longestSpan() const
{
	if (_v.size() < 2)
		throw std::logic_error("not enough element");
	return (_v[_v.size() - 1] - _v[0]);
}

int		Span::shortestSpan()
{
	if (_v.size() < 2)
		throw std::logic_error("not enough element");
	std::vector<int>::iterator it;
	int min = _v[1] - _v[0];
	for (it = _v.begin(); it != _v.end() - 1; it++)
	{
		if (min > *(it + 1) - *it)
			min = *(it + 1) - *it;
	}
	return (min);
}
