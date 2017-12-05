#include "Rectangle.h"
#include <iostream>

int main() {
    Rectangle t;
    t.setValues(10, 5);
    std::cout << "Area = " << t.area() << '\n';
    return 0;
}
