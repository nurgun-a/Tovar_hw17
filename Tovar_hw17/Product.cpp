#include "Product.h"

Product::Product()
{
}

Product::Product(string _name, double _price, double _weight, Date _dd, 
	int _quantity, int _expiration):Tovar(_name,_price,_weight,_dd, _quantity, _expiration)
{

}

void Product::print()
{
	Tovar::print();
}

void Product::postuplenie(int n)
{
	set_kol('+', n);
}

void Product::prodaza(int n)
{
	set_kol('-', n);
}

double Product::sum()
{
	return Tovar::sum();
}

double Product::all_weight()
{
	return Tovar::all_weight();
}

void Product::set_kol(char n, int k)
{
	Tovar::set_kol(n,k);
}

Milk::Milk(string _name, double _price, double _weight, Date _dd, int _quantity, 
	int _expiration): Product(_name,_price,_weight,_dd,_quantity,_expiration)
{
}

void Milk::print()
{
	Product::print(); 
}

void Milk::postuplenie(int n)
{
	set_kol('+', n);
}

void Milk::prodaza(int n)
{
	set_kol('-', n);
}

double Milk::sum()
{
	return Tovar::sum();
}

double Milk::all_weight()
{
	return Tovar::all_weight();
}

void Milk::set_kol(char n, int k)
{
	Tovar::set_kol(n,k);
}

Bread::Bread(string _name, double _price, double _weight, Date _dd, int _quantity, 
	int _expiration) : Product(_name, _price, _weight, _dd, _quantity, _expiration)
{	
}

void Bread::print()
{
	Product::print(); 
}

void Bread::postuplenie(int n)
{
	set_kol('+', n);
}

void Bread::prodaza(int n)
{
	set_kol('-', n);
}

double Bread::sum()
{
	return Tovar::sum();
}

double Bread::all_weight()
{
	return Tovar::all_weight();
}

void Bread::set_kol(char n, int k)
{
	Tovar::set_kol(n,k);
}

Rice::Rice(string _name, double _price, double _weight, Date _dd, 
	int _quantity, int _expiration) : Product(_name, _price, _weight, _dd, _quantity, _expiration)
{
}

void Rice::print()
{
	Product::print();
}

void Rice::postuplenie(int n)
{
	set_kol('+', n);
}

void Rice::prodaza(int n)
{
	set_kol('-', n);
}

double Rice::sum()
{
	return Tovar::sum();
}

double Rice::all_weight()
{
	return Tovar::all_weight();
}

void Rice::set_kol(char n, int k)
{
	Tovar::set_kol(n,k);
}