#include <vector>
#include <iostream>

int main() {

    // Building a new vector of doubles with size 10
    std::vector<double> v(10, 0.f);

    /***** ACCESS TO ELEMENTS *****/

    // Writing elements in the vector
    v[7] = 9.81;
    v[0] = 4.21;
    v[9] = -2.4;

    // Accessing an element
    std::cout << "Elment at position 7 = " << v[7] << "\n\n";

    // Accessing the first and the last element of a vector
    double front = v.front();
    double back = v.back();
    std::cout << "First element is " << front << ", last is " << back << '\n';

    // Inserting/deleting at the end
    v.push_back(11.f);
    back = v.back();
    std::cout << "Last element is now " << back << '\n';

    v.pop_back();
    back = v.back();
    std::cout << "After the pop last element is " << back << "\n\n";


    /***** MEMORY MANAGEMENT *****/

    // Resizing the vector
    v.resize(20, 1.f);

    // Getting the size of the vector
    std::cout << "New size of v = " << v.size() << '\n';

    // Capacity of v: number of elements that can be stored in the
    // memory area of v.
    std::cout << "Capacity of v = " << v.capacity() << '\n';

    // We can reserve in advance some space for v to avoid dynamic
    // memory allocation
    v.reserve(40);
    std::cout << "New capacity of v = " << v.capacity() << '\n';
    std::cout << "But the size of v is still " << v.size() << '\n';
    return 0;
}
