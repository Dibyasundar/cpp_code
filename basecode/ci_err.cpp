#include <iostream>
using namespace std;

int main() {
	int age;
	cout << "Enter your age: ";
	cin >> age;
	
	if (cin.fail()) { // Check if cin is in a fail state
	    cout << "Invalid input! Please enter a number." << endl;
	    cin.clear();   // Clear the error flag
	    cin.ignore(1000, '\n'); // Ignore invalid input
	}
    return 0;
}
