#include<iostream>
using namespace std;

struct item{
	char ItemName[20];
	float ItemCost;
	int ItemCount;
};

class cart
{
private:
	int n;
	item *itm;
	float TotalCost;
public:
	void getdata()
	{
		cout << "Enter the number of item :";
		cin >> n;
		itm = new item[n];
	}
	void getItemDetails()
	{
		for(int i=0;i<n;i++)
		{
			cout << "Item Name : ";
			cin.ignore();
			cin.getline(itm[i].ItemName,20);
			cout << "Item Cost : ";
			cin >> itm[i].ItemCost;
			cout << "Item count : ";
			cin >> itm[i].ItemCount;
		} 
	}
	void calculatePrice()
	{
		TotalCost = 0;
		for(int i=0;i<n;i++)
		{
			TotalCost = TotalCost + (itm[i].ItemCost * itm[i].ItemCount);
		}
		cout << "Total cost : " << TotalCost << endl;
	}
};
int main()
{
	cart c1;
	c1.getdata();
	c1.getItemDetails();
	c1.calculatePrice();
	return(0);
}
