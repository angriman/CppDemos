#include <iostream>
#include <list>
#include <vector>

int main(int argn, char **argv) {
	// Vector
	std::vector<int> numberVector = {5, 7, 2, 6, 8, 1};
	std::cout << "My vector: ";
	for (std::vector<int>::iterator it = numberVector.begin();
	     it != numberVector.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// List
	std::list<int> numberList = {5, 7, 2, 6, 8, 1};
	std::cout << "Number list: ";
	for (std::list<int>::iterator it = numberList.begin(); it != numberList.end();
	     it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "Part of vector: ";
	for (std::vector<int>::iterator it = numberVector.begin();
	     it != numberVector.end(); it += 2) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// We can also modify the container's elements while iterating.
	for (std::list<int>::iterator it = numberList.begin(); it != numberList.end();
	     it++) {
		*it += 2;
	}

	std::cout << "Modified vector: ";
	// Implicit notation
	for (int elem : numberList) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return 0;
}
