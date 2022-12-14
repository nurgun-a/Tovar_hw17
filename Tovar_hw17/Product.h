#include "Tovar.h"
class Product: public Tovar
{	
public:
	Product();
	Product(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
};

class Milk :public Product
{
public:
	Milk(){}
	Milk(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
};

class Bread :public Product
{	
public:
	Bread() {  }
	Bread(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
};

class Rice :public Product
{
public:
	Rice() {  }
	Rice(string _name, double _price, double _weight, Date _dd,
		int _quantity, int _expiration);
	virtual void print();
	virtual void postuplenie(int n);
	virtual void prodaza(int n);
	virtual double sum();
	virtual double all_weight();
	void set_kol(char n, int k);
};