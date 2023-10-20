#include<iostream>
using namespace std;
class book
{
	private:
		int id;
		string name;
		double price;
	public:
		book();
		book(int id,string name,double price);
		int getID();
		string getName();
		void setName(string name);
		double getPrice();
		void setPrice(double price);
		void display();
		void calTotalPrice(int qty);
};
