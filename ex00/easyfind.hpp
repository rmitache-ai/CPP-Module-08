#pragma once

#include <algorithm>
#include <iostream>

template <typename T> void easyfind(T& container, int value) {
	if (std::find(container.begin(), container.end(), value)
		!= container.end()) {
		std::cout << "Value has been found in Container"
				  << std::endl;
	} else {
		std::cerr << "No occurance has been found" << std::endl;
	}
}