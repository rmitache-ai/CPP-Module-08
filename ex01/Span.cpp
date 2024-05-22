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

void Span::fill() {
	unsigned int i = -1;
	while (++i < _spanSize) {
		_spanVec.push_back(rand());
		std::cout << "Filled i: [" << i << "] with "
				  << _spanVec[i] << std::endl;
	}
}

std::vector<unsigned int> Span::getSpanVec() const {
	return _spanVec;
}

void Span::addNumber(unsigned int n) {
	if (_spanVec.size() >= _spanSize) {
		std::cout << "Span size has reached" << std::endl;
		return;
	}
	try {
		if (std::find(_spanVec.begin(), _spanVec.end(), n)
			!= _spanVec.end()) {
			throw _spanSize;
		}
	} catch (unsigned int _spanSize) {
		std::cout << "Number already added. Please use a "
					 "different number"
				  << std::endl;
		return;
	}
	_spanVec.push_back(n);
}

unsigned int Span::shortestSpan() {

	unsigned int previous_span
		= std::numeric_limits<unsigned int>::max();
	if (_spanVec.size() < 2) {
		previous_span = 0;
	}
	unsigned int              span   = 0;
	std::vector<unsigned int> sorted = _spanVec;
	std::sort(sorted.begin(), sorted.end());

	for (size_t i = 0; i < sorted.size() - 1; ++i) {
		span = sorted[i + 1] - sorted[i];
		if (span < previous_span) {
			previous_span = span;
		}
	}
	return previous_span;
}

unsigned int Span::longestSpan() {
	std::vector<unsigned int> sorted = _spanVec;
	unsigned int              start  = -1;
	unsigned int              end    = -1;

	std::sort(sorted.begin(), sorted.end());
	for (unsigned int i = 0; i < sorted.size(); i++) {
		if (i == 0) {
			start = sorted[i];
		}
		if (i == sorted.size() - 1) {
			end = sorted[i];
		}
	}
	return (end - start);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */