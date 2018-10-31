#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>

int main(int argc, char **argv) {
    Rectangle t;
    t.setValues(10, 5);
    std::cout << "Area = " << t.area() << '\n';
    return 0;
}
