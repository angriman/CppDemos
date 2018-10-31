#include <iostream>
#include <stack>
#include <vector>

// Note: we are using a const reference to v.
void printVector(const std::vector<int> &v) {
	std::cout << "{ ";
	for (int i : v) {
		std::cout << i << " ";
	}
	std::cout << "}" << std::endl;
}

int main(int argc, char **argv) {
	// We define a new stack of vectors of integers.
	std::stack<std::vector<int>> stack;

	std::vector<int> first = {0, 1, 2};
	std::vector<int> second = {3, 4, 5};

	stack.push(first);
	stack.push(second);

	std::cout << "Size of the stack " << stack.size() << std::endl;

	std::cout << "Top element of the stack = ";

	// NB: top() returns a const reference to the top element, not a copy.
	printVector(stack.top());
	return 0;
}
