#include <iostream>
using namespace std;

int main() {
    char name[30];
    cout << "Enter your full name: ";
    cin.getline(name, 30);  // Reads the entire line
    cout << "Hello, " << name << "!" << endl;
    return 0;
}
