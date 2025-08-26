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
	void driver()
	{
		int i;
		cout << "Enter 1 : for entring information " << endl;
		cout << "Enter 2 : for showing information " << endl;
		cout << "Enter 3 : for changing cgpa value " << endl;
		cout << "enter your choice :";
		cin >> i; 
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
	student s1;
	for(int i=0;i<4;i++)
		s1.driver();
	return(0);
}
