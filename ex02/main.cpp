#include "MutantStack.hpp"
#include <iostream>

int main() {
	MutantStack<int> mstack;

	for (int i = 0; i < 10; i++) {
		mstack.push(i);
	}

	MutantStack<int>::iterator it  = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	it++;
	while (it != ite) {
		std::cout << *it << std::endl;
		it++;
	}

	return 0;
}

// int main() {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);

// 	std::cout << mstack.top() << std::endl;

// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);

// 	MutantStack<int>::iterator it  = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	++it;
// 	// Begin = 737
// 	--it;
// 	// Begin = 0
// 	std::cout << "While loop" << std::endl;
// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }