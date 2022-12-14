#include "shop.h"

void shop::add_r1(vector<Tovar> &_v)
{
	string str_w[6] = { "Milk","Broad","Rice","Soap","Washing","Air" };
	string m = str_w[rand() % 6];

	int qun = rand() % 100 + 1;
	double wei = rand() % 4 + 1;
	double pr = rand() % 100 + 1;

	Date d1 = rand_d2();
	Date d2 = rand_d1();

	int ex2 = rand() % 730 + 365;
	int ex1 = rand() % 20 + 1;

	if (m== "Milk")
	{
		Milk m("Молоко", pr, wei, d1, qun, ex1);
		_v.push_back(m);
	}
	else if (m == "Bread")
	{
		Bread b("Хлеб", pr, wei, d1, qun, ex1);
		_v.push_back(b);
	}
	else if (m == "Rice")
	{
		Rice r("Рис", pr, wei, d1, qun, ex2);
		_v.push_back(r);
	}

	else if (m == "Soap")
	{
		Soap s("Мыло", pr, wei, d2, qun, ex2);
		_v.push_back(s);
	}
	else if (m == "Washing")
	{
		Washing w("Стиральный_порошок", pr, wei, d2, qun, ex2);
		_v.push_back(w);
	}
	else if (m == "Air")
	{
		Air_frash a("Освежитель_воздуха", pr, wei, d2, qun, ex2);
		_v.push_back(a);
	}
}

void shop::spisanie_1(vector<Tovar>& _v, Date _d)
{
	vector <Tovar> ::iterator it = _v.begin();
	vector <Tovar> tmp;

	for (int i = 0; i < _v.size(); i++)
	{
		it = _v.begin();

		if (conv_d(_v[i].Get_dd()) + _v[i].Get_q() < conv_d(_d))
		{
			_v[i].print();
			tmp.push_back(_v[i]);
			cout << "\t\t\tТовар просрочен" << endl;
			advance(it, i);
			_v.erase(it);
			break;
		}				
	}
	write(tmp, "sp");
//for (auto it = _v.begin(); it != _v.end(); it++)
}

void shop::buy_1(vector<Tovar>& _v)
{
	vector <Tovar> tmp;
	int m = rand() % _v.size();
	int _n = rand() % _v[m].Get_q();
	tmp.push_back(_v[m]);
	_v[m].prodaza(_n);
	tmp.push_back(_v[m]);
	write(tmp, "buy");
}

void shop::pp_1(vector<Tovar>& _v)
{
	vector <Tovar> tmp;
	int m = rand() % _v.size();
	int _n = rand() % 100+100;
	tmp.push_back(_v[m]);
	_v[m].postuplenie(_n);
	tmp.push_back(_v[m]);
	write(tmp, "pp");
}

void shop::itogo(vector<Tovar>& _v)
{
	double sum = 0;
	double ves = 0;
	for (int i = 0; i < _v.size(); i++)
	{
		sum+=_v[i].sum();
		ves+= _v[i].all_weight();
	}
	cout << "------------------------------------------------------" << endl;
	cout << "Итого:     " << sum << " руб.   " << ves << " кг." << endl;
}



