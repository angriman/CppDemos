#include <deque>
#include <iostream>

// Function that prints the content of the deque
void printDequeContent(std::deque<int> d) {
	std::cout << "Deque content: ";
	for (int i = 0; i < d.size(); ++i) {
		std::cout << d[i] << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char **argv) {

	// We use a fill constructor to fill the deque with 10 zeros.
	std::deque<int> deque(10, 0);

	// We use the function defined above to print the content of the deque.
	printDequeContent(deque);

	// Modifying the elements in the deque.
	for (int i = 0; i < deque.size(); ++i) {
		deque[i] = i + 1;
	}

	printDequeContent(deque);

	// Pushing new elements in the queue on both front and back.
	int newElements = 10;
	for (int i = 0; i < newElements; ++i) {
		// Even number
		if (i % 2 == 0) {
			deque.push_front(i);
		} else {
			deque.push_back(i);
		}
	}

	printDequeContent(deque);

	return 0;
}
