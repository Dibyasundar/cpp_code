#include <iostream>

enum Color { RED, GREEN, BLUE };

int main() {
    Color myColor = GREEN; // GREEN is assigned 1 (by default)
    std::cout << "Color value: " << myColor << std::endl;  // Output: 1
    return 0;
}

