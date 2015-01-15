#include "Span.hpp"
#include <iostream>

int		main()
{
	Span s(5);

	s.addNumber(4);
	s.addNumber(1);
//	s.addNumber(4);
	s.addNumber(105);
	s.addNumber(5);

	std::cout << s.longestSpan() << " " << s.shortestSpan() << std::endl;

	return (0);
}
