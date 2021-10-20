#include <iostream>
#include <vector>

int main(int argc, char **argv) {

    // Creating a new STL vector
    std::vector<double> v({1, 2, 3, 4, 5});
    std::cout << "My vector: ";
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    // Iterator pointing at the FIRST element of v
    std::vector<double>::iterator iter = v.begin();

    // Nice trick (only from C++11): use auto
    auto lazyIter = v.begin();

    // Printing the value at which iter is pointing to
    std::cout << "My iterator points to " << *iter << std::endl;

    // Incrementing the pointer
    ++iter;
    std::cout << "After ++ my iterator points to " << *iter << std::endl;

    // Decrementing the poiter so it points again to the first element of the
    // vector.
    --iter;

    *iter = -1;

    // Using pointer to iterate
    for (; iter != v.end(); ++iter)
        std::cout << "Item " << *iter << std::endl;

    return 0;
}
