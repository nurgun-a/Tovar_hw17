#ifndef MY_SYMBOL_H
#define MY_SYMBOL_H

#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


struct Date
{
	int dd;
	int mm;
	int yy;
	friend ostream& operator <<(ostream& os, Date& d);
	friend istream& operator >>(istream& is, Date& d);
};
class Tovar
{

	string name;
	double price;
	double weight;
	Date dd;
	int quantity;
	int expiration;
public:
	Tovar();
	Tovar(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
	friend void write(vector <Tovar>& _v, string s);
	Date Get_dd();
	int Get_q();
	friend ostream& operator <<(ostream& os, Tovar& t);
	void reading(vector<Tovar>& tmp);
	void reading_all();
};
Date rand_d1();
Date rand_d2();
int conv_d(Date _d);
void h();
void show_menu();
#endif 