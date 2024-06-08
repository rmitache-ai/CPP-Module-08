#include "easyfind.hpp"
#include <vector>

int main() {
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	std::cout << "Test with std::vector:" << std::endl;
	easyfind(vec, 3);  // Should find the value
	easyfind(vec, -1); // Should not find the value

	std::vector<int> emptyVec;
	std::cout << "Test with empty container:" << std::endl;
	easyfind(emptyVec, 1); // Should not find the value

	std::vector<int> multiVec;
	multiVec.push_back(1);
	multiVec.push_back(2);
	multiVec.push_back(3);
	multiVec.push_back(2);
	multiVec.push_back(1);
	std::cout << "Test with multiple occurrences:" << std::endl;
	easyfind(multiVec,
			 2); // Should find the value

	return 0;
}