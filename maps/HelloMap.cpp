#include <iostream>
#include <map>
#include <vector>

int main(int argc, char **argv) {

    // Creating a new mepty map.
    // KEYS: characters
    // VALUES: ints
    std::map<char, int> map;

    // Storing elements in the map
    map['b'] = 100;
    map['a'] = 200;
    map['c'] = 300;

    std::cout << "My map has " << map.size() << " elements." << std::endl;

    // Map iterator: std::map<char,int>::iterator
    // Note: a map is implemented using a search tree (usually red-black trees).
    // Searching goes from the smallest to the biggest key.
    for (auto mapIter = map.begin(); mapIter != map.end(); ++mapIter) {
        std::cout << "Key = " << mapIter->first << " ";
        std::cout << "Value = " << mapIter->second << std::endl;
    }
    std::cout << std::endl;

    // Finding elements in a map
    for (char key : {'x', 'b'}) {
        // I could also have used 'auto'
        std::map<char, int>::iterator find_key = map.find(key);
        if (find_key == map.end()) {
            std::cout << "Element '" << key << "' not found." << std::endl;
        } else {
            std::cout << "Element '" << key << "' was found, its value is: ";
            std::cout << find_key->second << std::endl;
        }
    }
    std::cout << std::endl;

    // Multimap example.
    std::multimap<char, int> multimap;
    multimap.emplace('b', 100);
    multimap.emplace('a', 200);
    multimap.emplace('c', 300);
    
    // Here we add some duplicate elements.
    multimap.emplace('b', 500);
    multimap.emplace('a', 500);
    multimap.emplace('c', 500);

    std::cout << "My multimap has " << multimap.size() << " elements." << std::endl;

    for (auto mapIter = multimap.begin(); mapIter != multimap.end(); ++mapIter) {
        std::cout << "Key = " << mapIter->first << " ";
        std::cout << "Value = " << mapIter->second << std::endl;
    }

    return 0;
}
