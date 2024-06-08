#include "Span.hpp"
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <ostream>
#include <vector>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n)
	: _spanSize(n) {
	std::cout << "Span constructor with size of " << _spanSize
			  << " called. " << std::endl;
}

Span::Span(const Span& src)
	: _spanSize(src._spanSize) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {
	std::cout << "Span destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span& Span::operator=(const Span& rhs) {
	if (this != &rhs) {
		_spanVec  = rhs._spanVec;
		_spanSize = rhs._spanSize;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& OUT, Span const& other) {
	std::vector<unsigned int> vec = other.getSpanVec();
	OUT << "[";
	for (size_t i = 0; i < vec.size(); ++i) {
		OUT << vec[i];
		if (i < vec.size() - 1) {
			OUT << ", ";
		}
	}
	OUT << "]";
	return OUT;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Span::fill(Span& begin, int value) {
	 
}

std::vector<unsigned int> Span::getSpanVec() const {
	return _spanVec;
}

void Span::addNumber(unsigned int n) {
	if (_spanVec.size() >= _spanSize) {
		throw maxSizedReached();
	}
	_spanVec.push_back(n);
}

unsigned int Span::shortestSpan() {
	if (_spanVec.size() < 2) {
		throw notEnoughNumbers();
	}
	unsigned int previous_span
		= std::numeric_limits<unsigned int>::max();
	std::vector<unsigned int> sorted = _spanVec;
	std::sort(sorted.begin(), sorted.end());

	for (size_t i = 0; i < sorted.size() - 1; ++i) {
		unsigned int span = sorted[i + 1] - sorted[i];
		if (span < previous_span) {
			previous_span = span;
		}
	}
	return previous_span;
}

unsigned int Span::longestSpan() {
	if (_spanVec.size() < 2) {
		throw notEnoughNumbers();
	}
	std::vector<unsigned int> sorted = _spanVec;
	std::sort(sorted.begin(), sorted.end());

	return (sorted[sorted.size() - 1] - sorted[0]);
}

const char* Span::maxSizedReached::what() const throw() {
	return ("Max sized has been reached\n");
}

const char* Span::notEnoughNumbers::what() const throw() {
	return ("Not enough numbers to search in\n");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */