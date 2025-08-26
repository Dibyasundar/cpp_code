// WAP to find LCM two given number using recursion 
#include<iostream>
using namespace std;
int lcm(int m, int n, int a)
{
	if((a%m == 0) && (a%n ==0))
		return(a);
	else
		return(lcm(m,n, a+n));
}
int main()
{
	int m, n;
	cout << "Enter the 1st Num :";
	cin >> m;
	cout << "Enter the 2nd Num :";
	cin >> n;
	cout << "LCM of " << m << " & " << n << "is : " << lcm(m,n,n) << endl;
	return(0);
}
