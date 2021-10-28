#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

void printVector(const std::vector<int> &v) {
    for (auto iter = v.begin(); iter != v.end(); ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

int main(int argn, char **argv) {
    std::vector<int> intVector = {5, 7, 2, 6, 8, 1};

    std::cout << "Data: ";
    printVector(intVector);

    std::sort(intVector.begin(), intVector.end());
    std::cout << "Sorted: ";
    printVector(intVector);

    // We can specify our own comparator function.
    std::sort(intVector.begin(), intVector.end(), [&](int a, int b) { return a > b; });
    std::cout << "Sorted in decreasing order: ";
    printVector(intVector);

    std::vector<int>::iterator minit = std::min_element(intVector.begin(), intVector.begin() + 3);
    std::cout << "Min value in the first three elements: " << *minit << std::endl;

    int sum = std::accumulate(intVector.begin(), intVector.begin() + 3, 0);
    std::cout << "Sum of the first three elements: " << sum << std::endl;

    return 0;
}
