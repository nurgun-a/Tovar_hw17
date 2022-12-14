#include "Tovar.h"

class Household: public Tovar
{	
public:
	Household();
	Household(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
};

class Washing : public Household
{
public:
	Washing() {  }
	Washing(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
};

class Soap : public Household
{
public:
	Soap() {  }
	Soap(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
};

class Air_frash : public Household
{
public:
	Air_frash() {  }
	Air_frash(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
};