#pragma once

#include <algorithm>
#include <iostream>
template <typename T>
/**
 * @brief Searches for the container occurrence of a given value in a container.
 * 
 * This function searches for the container occurrence of the given value in the container specified by the container parameter.
 * It returns an iterator pointing to the found element if it exists, otherwise it returns an iterator pointing to the end of the container.
 * 
 * @tparam T The type of the container.
 * @param container The container to search in.
 * @param value The value to search for.
 * @return An iterator pointing to the found element, or an iterator pointing to the end of the container if the value is not found.
 */
void easyfind(T& container, int value) {
	if (std::find(container.begin(), container.end(), value)
		!= container.end()) {
		std::cout << "Value has been found in Container"
				  << std::endl;
	} else {
		std::cerr << "No occurance has been found" << std::endl;
	}
}