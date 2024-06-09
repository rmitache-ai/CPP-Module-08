#include "Span.hpp"
#include <cstdlib>

int main() {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// printing porpuses
	std::vector<unsigned int> spanVec = sp.getSpanVec();
	for (size_t i = 0; i < spanVec.size(); ++i) {
		std::cout << "Element at index " << i << ": "
				  << spanVec[i] << std::endl;
	}

	// Span sp1(10000);

	// std::vector<unsigned int> randomNumbers;
	// for (unsigned int i = 0; i < 10000; ++i) {
	// 	randomNumbers.push_back(std::rand());
	// }

	// sp1.fill(randomNumbers.begin(), randomNumbers.end());

	// // printing porpuses
	// std::vector<unsigned int> spanVec = sp1.getSpanVec();
	// for (size_t i = 0; i < 10000; ++i) {
	// 	std::cout << "Element at index " << i << ": "
	// 			  << spanVec[i] << std::endl;
	// }

	// std::cout << "Shortest span in sp1: " << sp1.shortestSpan()
	// 		  << std::endl;
	// std::cout << "Longest span in sp1: " << sp1.longestSpan()
	// 		  << std::endl;
	return 0;
}
