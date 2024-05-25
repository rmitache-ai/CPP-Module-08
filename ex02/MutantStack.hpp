#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator
		iterator;

	MutantStack()
		: std::stack<T>() {
		std::cout << "Constructor called" << std::endl;
	}
	MutantStack(MutantStack const& src)
		: std::stack<T>(src) {
		std::cout << "Copy Constructor called" << std::endl;
	}
	~MutantStack() {
		std::cout << "Destructor called" << std::endl;
	};

	MutantStack& operator=(MutantStack const& rhs) {
		if (*this != rhs) {
			*this = rhs;
		}
		return *this;
	};

	iterator begin() { return (std::stack<T>::c.begin()); }
	iterator end() { return (std::stack<T>::c.end()); }
};

#endif /* ***************************************************** MUTANTSTACK_H */