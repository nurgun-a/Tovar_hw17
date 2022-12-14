#include "Tovar.h"

Tovar::Tovar()
{
	name = "";
	price = 0;
	weight = 0;
	dd.dd = 0;
	dd.mm = 0;
	dd.yy = 0;
	quantity = 0;
	expiration = 0;
}

Tovar::Tovar(string _name, double _price, double _weight, Date _dd,
	int _quantity, int _expiration)
{
	name = _name;
	price = _price;
	weight = _weight;
	dd = _dd;
	quantity = _quantity;
	expiration = _expiration;
}

void Tovar::print()
{
	cout << setw(20) << name << setw(8) << price << setw(5) << weight << "   " << dd
		<<setw(7)<<quantity << setw(7) << expiration << setw(9) << sum() << setw(7) << all_weight() << endl;
}

void Tovar::postuplenie(int n)
{
	set_kol('+', n);
}

void Tovar::prodaza(int n)
{
	set_kol('-', n);
}

double Tovar::sum()
{
	double sum = quantity * price;
	return sum;
}

double Tovar::all_weight()
{
	double all_weight = quantity * weight;
	return all_weight;
}

void Tovar::set_kol(char n, int k)
{
	if (n == '-')
	{
		quantity -= k;
	}
	else if (n == '+')
	{
		quantity += k;
	}
	else cout << "Error" << endl;
}

Date Tovar::Get_dd()
{
	return dd;
}

int Tovar::Get_q()
{
	return quantity;
}

ostream& operator<<(ostream& os, Date& d)
{
	os << ((d.dd < 10 && d.dd>0) ? "0" : "") << d.dd << "."
	<< ((d.mm < 10 && d.mm>0) ? "0" : "") << d.mm << "."
	<<  d.yy;
	return os;
}

istream& operator>>(istream& is, Date& d)
{
	bool b = 1;
	do
	{
		cout << "Enter day: "; is >> d.dd; cout << endl;
		cout << "Enter month: "; is >> d.mm; cout << endl;
		cout << "Enter year: "; is >> d.yy; cout << endl;
		try
		{
			if (d.dd < 0 || d.dd>31 || d.mm < 0 || d.mm>12 
				|| d.yy < 2018 || d.yy > 2022)
			{
				throw 5;
			}
			else
			{
				b = 0;
			}
		}
		catch (int n)
		{
			cout << "Введены некорректные данные, повторите ввод" << endl;
		}
	} while (b);
	
	return is;
}

int conv_d(Date _d)
{
	int _dd = 0;
	_dd = ((_d.yy-2010) * 365) + (_d.mm * 31) + _d.dd;

	return _dd;
}

void show_menu()
{
	cout << "Введите значение, что бы выполнить действие:" << endl;
	cout << "1 - Вывести на экран" << endl;
	cout << "2 - Списание просроченного товара" << endl;
	cout << "3 - Продажа" << endl;
	cout << "4 - Поступление" << endl;
	cout << "5 - Считать все сохраненные данные" << endl;
	cout << "6 - Перезаписать данные" << endl;
	cout << "7 - Срандомить новые данные" << endl;
	cout << "0 - Выход" << endl;
}

ostream& operator<<(ostream& os, Tovar& t)
{
	os <<setw(20)<< t.name << setw(8) << t.price << setw(6) << t.weight << setw(4) << t.dd.dd << setw(4) 
		<< t.dd.mm << setw(8) << t.dd.yy << setw(4) << t.quantity << setw(8) << t.expiration << endl;

	return os;
}

void Tovar::reading(vector<Tovar>& tmp)
{
	ifstream is;
	is.open("tovar.txt");
	if (!is.is_open())
	{
		cout << "Ошибка открытия файла" << endl;
	}
	else
	{
		cout << "Файл открыт" << endl;
		Tovar tmp1;
		while (is >> tmp1.name >> tmp1.price >> tmp1.weight >>
			tmp1.dd.dd >> tmp1.dd.mm >> tmp1.dd.yy >>
			tmp1.quantity >> tmp1.expiration)
		{
			tmp.push_back(tmp1);
		}
		is.close();
		//for (int i = 0; i < tmp.size(); i++)
		//{
		//	tmp[i].print();
		//}
		
	}
}

void Tovar::reading_all()
{
	vector<Tovar> tmp;
	string path = "";

	try
	{
		h();
		for (int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				path = "buy.txt";
			}
			else if (i == 1)
			{
				path = "sp.txt";
			}
			else if (i == 2)
			{
				path = "pp.txt";
			}
			else
			{
				path = "tovar.txt";
			}

			ifstream is;
			is.open(path);
			if (!is.is_open())
			{
				throw 5;
			}
			else
			{
				cout << "-------------------------------------------------------" << endl;
				Tovar tmp1;
				while (is >> tmp1.name >> tmp1.price >> tmp1.weight >>
					tmp1.dd.dd >> tmp1.dd.mm >> tmp1.dd.yy >>
					tmp1.quantity >> tmp1.expiration)
				{
					tmp.push_back(tmp1);
				}
				is.close();
				if (i == 0)		 cout << "Продажи:" << endl << endl;
				else if (i == 1) cout << "Списания:" << endl << endl;
				else if (i == 2) cout << "Пополнения:" << endl << endl;
				else			 cout << "Остати:" << endl << endl;
				
				for (int i = 0; i < tmp.size(); i++)
				{
					tmp[i].print();
				}
				cout << "-------------------------------------------------------" << endl;
				tmp.clear();
			}		

		}
	}
	catch (int n)
	{
		cout << "Ошибка открытия файла!!!" << endl;
	}
}

Date rand_d1()
{
	Date tmp;
	tmp.dd = rand() % 30 + 1;
	tmp.mm = rand() % 11 + 1;
	tmp.yy = rand() % 4 + 2018;
	return tmp;
}

Date rand_d2()
{
	Date tmp;
	tmp.dd = rand() % 30 + 1;
	tmp.mm = 12;
	tmp.yy = 2022;
	return tmp;
}

void h()
{
	cout << setw(23) << "Наименование |" << setw(8) << "Цена |" << setw(5) << "Вес |"
		<< setw(12) << "Дата изг. |" << setw(8) << "Кол-во. |"
		<< setw(8) << "Cрок г.|" << setw(6) << "Сумма|" << setw(6) << "Общ.вес|" << endl;
	cout << "  -----------------------------------------------------------------------------" << endl;
}

void write(vector<Tovar>& _v, string s)
{
	string path = "";

	if (s == "buy")
		path = "buy.txt";
	else if (s == "sp")
		path = "sp.txt";
	else if (s == "pp")
		path = "pp.txt";
	else
		path = "tovar.txt";

	try
	{			
		ofstream fz;

		if (path == "tovar.txt")
			fz.open(path, ofstream::out);
		else
			fz.open(path, ofstream::app);		

		if (!fz.is_open())
			throw 5;
		else
		{
			cout << "Файл открыт" << endl;
			for (auto it = _v.begin(); it != _v.end(); it++)
				fz << *it;
			cout << "Файл записан" << endl;
		}				
		fz.close();
	}
	catch (int n)
	{
		cout << "Ошибка открытия файла!!!" << endl;
	}
}