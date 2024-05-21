#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n)
	: _maxNumIntegers(n) {
	std::cout << "Span constructor with maxNumIntegers of " << n
			  << " called. " << std::endl;
}

Span::Span(const Span& src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {
	std::cout << "Span destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span& Span::operator=(Span const& rhs) {
	if (this != &rhs) {
		this->_maxNumIntegers = rhs.getMaxNumIntegers();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& OUT, Span const& other) {
	OUT << other.getMaxNumIntegers() << std::endl;
	return OUT;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
std::vector<unsigned int> Span::getMaxNumIntegers() const {
	return _maxNumIntegers;
}

void Span::addNumber(unsigned int n) {}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */