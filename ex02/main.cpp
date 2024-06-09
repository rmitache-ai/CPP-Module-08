#include "MutantStack.hpp"
#include <iostream>

// int main() {
// 	MutantStack<int> mstack;

// 	for (int i = 0; i < 10; i++) {
// 		mstack.push(i);
// 	}

// 	MutantStack<int>::iterator it  = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();

// 	it++;
// 	while (it != ite) {
// 		std::cout << *it << std::endl;
// 		it++;
// 	}

// 	return 0;
// }

int main() {
	MutantStack<int> mstack;

	mstack.push(5);  // Stack: [5]
	mstack.push(17); // Stack: [5, 17]

	std::cout
		<< mstack.top()
		<< std::endl; // Output: 17 (top element of the stack)

	mstack.pop(); // Stack: [5]
	std::cout << mstack.size()
			  << std::endl; // Output: 1 (size of the stack)

	mstack.push(3);   // Stack: [5, 3]
	mstack.push(5);   // Stack: [5, 3, 5]
	mstack.push(737); // Stack: [5, 3, 5, 737]
	mstack.push(0);   // Stack: [5, 3, 5, 737, 0]

	MutantStack<int>::iterator it  = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it; // Move iterator to the next element
	--it; // Move iterator back to the previous element
	std::cout << "While loop" << std::endl;

	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
