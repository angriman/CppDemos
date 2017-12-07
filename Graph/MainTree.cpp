#include "Tree.h"
#include <iostream>

int main() {
    Tree t("Awesome tree", 10);
    int from = 0;
    int to = 1;
    if (t.addEdge(from,to)) {
        std::cout << "I could add edge " << from << ", " << to << '\n';
    }
    from = 1;
    to = 2;
    if (t.addEdge(from,to)) {
        std::cout << "I could also add edge " << from << ", " << to << '\n';
    }
    from = 0;
    to = 2;
    if (!t.addEdge(from,to)) {
        std::cout << "But I could NOT add edge " << from << ", " << to << '\n';
    }
    
    return 0;
}
