#include "HyperGraph.h"
#include <iostream>

int main() {
    HyperGraph hp("Cool HyperGraph", 10);
    if (hp.addEdge({1,2,3})) {
        std::cout << "Added" << '\n';
    }
    else {
        std::cout << "Not added" << '\n';
    }

    std::cout << hp.numberOfNodes() << " nodes " << '\n';
    return 0;
}
