#include<iostream>
#include "book.h"
using namespace std;

int main()
{
	int id;
	string name;
	double price;
	cout<<"Enter id:";
	cin>>id;
	cout<<"Enter book name:";
	cin>> name;
	cout<<"Enter price:";
	cin>>price;
	book b1;
	book b2(id,name,price);
	cout<<"Display Details:";
	b1.display();
	cout<<"Show Book Id:"<<b1.getID();
	cout<<"Show Book Name:"<<b1.getName();
	cout<<"Show Book Price:"<<b1.getPrice();
	int qty=20;
	b1.calTotalPrice(qty);
}
