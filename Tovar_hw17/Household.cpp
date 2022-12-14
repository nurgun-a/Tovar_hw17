#include "Household.h"

Household::Household()
{
}

Household::Household(string _name, double _price, double _weight, Date _dd,
	int _quantity, int _expiration) :Tovar(_name, _price, _weight, _dd, _quantity, _expiration)
{
}

void Household::print()
{
	Tovar::print();
}

void Household::postuplenie(int n)
{
	set_kol('+', n);
}

void Household::prodaza(int n)
{
	set_kol('-', n);
}

double Household::sum()
{
	return Tovar::sum();
}

double Household::all_weight()
{
	return Tovar::all_weight();
}

void Household::set_kol(char n, int k)
{
	Tovar::set_kol(n,k);
}


Washing::Washing(string _name, double _price, double _weight, Date _dd,
	int _quantity, int _expiration) : Household(_name, _price, _weight, _dd, _quantity, _expiration)
{
}

void Washing::print()
{
	Household::print(); 
}

void Washing::postuplenie(int n)
{
	set_kol('+', n);
}

void Washing::prodaza(int n)
{
	set_kol('-', n);
}

double Washing::sum()
{
	return Tovar::sum();
}

double Washing::all_weight()
{
	return Tovar::all_weight();
}

void Washing::set_kol(char n, int k)
{
	Tovar::set_kol(n,k);
}
//

Soap::Soap(string _name, double _price, double _weight, Date _dd,
	int _quantity, int _expiration) : Household(_name, _price, _weight, _dd, _quantity, _expiration)
{
}

void Soap::print()
{
	Household::print(); 
}

void Soap::postuplenie(int n)
{
	set_kol('+', n);
}

void Soap::prodaza(int n)
{
	set_kol('-', n);
}

double Soap::sum()
{
	return Tovar::sum();
}

double Soap::all_weight()
{
	return Tovar::all_weight();
}

void Soap::set_kol(char n, int k)
{
	Tovar::set_kol(n,k);
}

Air_frash::Air_frash(string _name, double _price, double _weight, Date _dd,
	int _quantity, int _expiration) : Household(_name, _price, _weight, _dd, _quantity, _expiration)
{
}

void Air_frash::print()
{
	Household::print(); 
}

void Air_frash::postuplenie(int n)
{
	set_kol('+', n);
}

void Air_frash::prodaza(int n)
{
	set_kol('-', n);
}

double Air_frash::sum()
{
	return Tovar::sum();
}

double Air_frash::all_weight()
{
	return Tovar::all_weight();
}

void Air_frash::set_kol(char n, int k)
{
	Tovar::set_kol(n,k);
}