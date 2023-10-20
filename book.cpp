#include "book.h"

book::book()
{
	this->id=0;
	this->name="NotFound";
	this->price=0;
}
book::book(int id,string name,double price)
{
	this->id=id;
	this->name=name;
	this->price=price;
}
int book::getID()
{
	return id;
}
string book::getName()
{
	return name;
}
void book::setName(string name)
{
	this->name=name;
}
double book::getPrice()
{
	return price;
}
void book::setPrice(double price)
{
	this->price=price;
}
void book::calTotalPrice(int qty)
{
	double total=qty*price;
	cout<<"Total Price:"<<total;
}
void book::display()
{
	cout<<"ID:"<<id;
	cout<<"Name:"<<name;
	cout<<"Price:"<<price;
}
