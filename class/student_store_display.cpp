#include<iostream>
using namespace std;

class student{
	int id;
	char name[30];
	float cgpa;
	void getdata()
	{
		cout << "Eneter id : ";
		cin >> id;
		cout << "Enter name : ";
		cin.ignore();
		cin.getline(name, 30);
		cout << "Enter the CGPA : ";
		cin >> cgpa; 
	}
	void printdata()
	{
		cout << "Name : " << name << endl;
		cout << "ID : " << id << endl;
		cout << "CGPA : " << cgpa << endl;
	}
	void changecgpa()
	{
		cout << "Enter new CGPA : ";
		cin >> cgpa;
	}
public:
	void driver(int i)
	{
		switch(i)
		{
			case 1: getdata(); break;
			case 2: printdata(); break;
			case 3: changecgpa(); break;
			default: cout << "Wrong Choice ...." << endl;
		}
	}
};
int main()
{
	int n;
	cout << "Enter the number of students : ";
	cin >> n;
	student s[n];
	// Store the details
	for(int i=0;i<n;i++)
		s[i].driver(1);
	// Show the details
	for(int i=0;i<n;i++)
		s[i].driver(2);
	return(0);
}
