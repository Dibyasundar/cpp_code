//WAP to get 5 student details using structure and print on the screen

#include<iostream>
#include<iomanip>
using namespace std;
struct student
{
	char name[30];
	int roll;
	float cgpa;
};
int main()
{
	struct student s[5];
	for(int i=0;i<5;i++)
	{
		cout << "Name of " << i << "th student : ";
		if(i!=0)
			cin.ignore();
		cin.getline(s[i].name, 30);
		cout << "Roll of " << i << "th student : ";
		cin >> s[i].roll;
		cout << "cgpa of " << i << "th student : ";
		cin >> s[i].cgpa;
	}
	
	// Print header with column titles
    cout << left << setw(30) << "Name"    // Left align, width 30
         << setw(10) << "Roll No"        // Left align, width 10
         << setw(10) << "cgpa"          // Left align, width 10
         << endl;

    // Print a separator line
    cout << setfill('-') << setw(50) << "-" << endl;
    cout << setfill(' '); // Reset fill to space

    // Print data in columns
    for (int i = 0; i < 5; i++) {
        cout << left << setw(30) << s[i].name
             << setw(10) << s[i].roll 
             << fixed << setprecision(2) << setw(10) << s[i].cgpa
             << endl;
    }
    return(0);
}
