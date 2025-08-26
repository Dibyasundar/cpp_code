#include <iostream>
using namespace std;

int& getRef(int &x) {
    return x;  // Returns a reference to the argument
}

int main() {
    int num = 50;
    int &refNum = getRef(num);  // refNum becomes an alias of num

    cout << "Before modification: " << num << endl;
    
    refNum = 100;  // Modifies num indirectly

    cout << "After modification: " << num << endl;

    return 0;
}

