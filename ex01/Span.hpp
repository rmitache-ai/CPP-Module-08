#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
	std::vector<unsigned int> _spanVec;
	unsigned int              _spanSize;

public:
	Span(unsigned int n);
	Span(Span const& src);
	~Span();

	Span& operator=(Span const& rhs);

	void         addNumber(unsigned int n);
	void         fill(std::vector<unsigned int>::iterator start,
					  std::vector<unsigned int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	std::vector<unsigned int> getSpanVec() const;

	class maxSizedReached : public std::exception {
	public:
		const char* what() const throw();
	};
	class notEnoughNumbers : public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& OUT, Span const& other);

#endif /* ************************************************************ SPAN_H */