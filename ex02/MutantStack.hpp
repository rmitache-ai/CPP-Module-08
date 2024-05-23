#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>

template <typename T> class MutantStack : public std::stack<T> {
public:
	MutantStack();
	MutantStack(MutantStack const& src);
	~MutantStack();

	MutantStack& operator=(MutantStack const& rhs);

	std::vector<int> iterators();
};

#endif /* ***************************************************** MUTANTSTACK_H */