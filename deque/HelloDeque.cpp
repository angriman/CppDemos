#include <deque>
#include <iostream>

// Function that prints the content of the deque
void printDequeContent(std::deque<int> d) {
    std::cout << "Deque content: ";
    for (int i = 0; i < d.size(); ++i) {
        std::cout << d[i] << " ";
    }
    std::cout << '\n';
}

int main() {

    // 10 zero-initialized elements
    std::deque<int> deque(10, 0);

    printDequeContent(deque);
    
    // Inserting elements in the deque
    for (int i = 0; i < deque.size(); ++i) {
        deque[i] = i + 1;
    }

    printDequeContent(deque);


    // Pushing new elements in the queue
    int newElements = 10;
    for (int i = 0; i < newElements; ++i) {
        // Even number
        if (i % 2 == 0) {
            deque.push_front(i);
        }
        else {
            deque.push_back(i);
        }
    }

    printDequeContent(deque);

    return 0;
}
