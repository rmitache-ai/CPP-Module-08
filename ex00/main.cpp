#include "easyfind.hpp"
#include <vector>

int main() {
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);

	easyfind(vec, -1);
	return 0;
}
