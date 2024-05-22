#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {

public:
	Span(unsigned int n);
	Span(Span const& src);
	~Span();

	Span& operator=(Span const& rhs);

	void                      addNumber(unsigned int n);
	void                      fill();
	unsigned int              shortestSpan();
	unsigned int              longestSpan();
	std::vector<unsigned int> getSpanVec() const;

private:
	std::vector<unsigned int> _spanVec;
	unsigned int              _spanSize;
};

std::ostream& operator<<(std::ostream& OUT, Span const& other);

#endif /* ************************************************************ SPAN_H */