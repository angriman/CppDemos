#include <iostream>
#include <vector>

int main() {

	// Creating a new STL vector
	std::vector<double> v({1, 2, 3, 4, 5});

	// Iterator pointing at the FIRST element of v
	std::vector<double>::iterator iter = v.begin();

	// Nice trick (only from C++11): use auto
	auto lazyIter = v.begin();

	// Printing the value at which iter is pointing to
	std::cout << "\nMy iterator points to " << *iter << "\n\n";

	// Incrementing the pointer
	++iter;
	std::cout << "After ++ my iterator points to " << *iter << "\n\n";

	// Decrementing the poiter so it points again to the first element of the vector.
	--iter;

	// Using pointer to iterate
	for (; iter != v.end(); ++iter) {
		std::cout << "Item " << *iter << '\n';
	}

	return 0;
}
