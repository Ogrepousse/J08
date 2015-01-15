
#ifndef SPAN_H
# define SPAN_H

# include <vector>

class Span
{
	public:
		Span();
		~Span();
		Span(int n);
		Span(const Span & src);
		Span & operator=(const Span & rhs);

		void addNumber(int i);
		int shortestSpan();
		int longestSpan() const;

	private:
		unsigned int _n;
		std::vector<int> _v;
};

#endif
