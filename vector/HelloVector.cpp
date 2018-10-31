#include <iostream>
#include <vector>

int main(int argc, char **argv) {

	// Creating a new vector of doubles with size 10
	// using a filling constructor.
	std::vector<double> v(10, 0.0);

	/***** ACCESS TO ELEMENTS *****/

	// Writing elements in the vector
	v[7] = 9.81;
	v[0] = 4.21;
	v[9] = -2.4;

	// Accessing an element
	std::cout << "Elment at position 7 = " << v[7] << std::endl;

	// Accessing the first and the last element of a vector
	double front = v.front();
	double back = v.back();
	std::cout << "First element is " << front << ", last is " << back
	          << std::endl;

	// Inserting/deleting at the end
	v.push_back(11.0);
	back = v.back();
	std::cout << "Last element is now " << back << std::endl;

	v.pop_back();
	back = v.back();
	std::cout << "After the pop last element is " << back << std::endl;

	/***** MEMORY MANAGEMENT *****/

	// Resizing the vector
	v.resize(20, 1.0);

	// Getting the size of the vector
	std::cout << "New size of v = " << v.size() << std::endl;

	// Capacity of v: number of elements that can be stored in the
	// memory area of v.
	std::cout << "Capacity of v = " << v.capacity() << std::endl;

	// We can reserve in advance some space for v to avoid dynamic
	// memory allocation
	v.reserve(40);
	std::cout << "New capacity of v = " << v.capacity() << std::endl;
	std::cout << "But the size of v is still " << v.size() << std::endl;
	return 0;
}
