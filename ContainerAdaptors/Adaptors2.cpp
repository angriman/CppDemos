#include <iostream>
#include <stack>
#include <vector>

void printVector(const std::vector<int> &v) {
	std::cout << "{ ";
	for (int i : v) {
		std::cout << i << " ";
	}
	std::cout << "}\n";
}

int main(int argc, char **argv) {
	// Here we create a stack of vectors.
	// In this case, we use a std vector as underlying container.
	std::stack<std::vector<int>, std::vector<std::vector<int>>> stack;

	std::vector<int> first = {0, 1, 2};
	std::vector<int> second = {3, 4, 5};

	stack.push(first);
	stack.push(second);

	std::cout << "Size of the stack " << stack.size() << std::endl;

	std::cout << "Top element of the stack = ";
	printVector(stack.top());
	return 0;
}
