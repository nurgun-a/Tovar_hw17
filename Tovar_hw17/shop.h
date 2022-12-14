#include "Product.h"
#include "Household.h"



class shop: public Milk
{
public:
	shop(){}
	void f()
	{
		bool key = 1;
		char c;
		Tovar t1;
		vector <Tovar> v1;
		Date n_dd;
		n_dd.yy = 2022;n_dd.mm = 12;n_dd.dd = 15;
		cout << "Дата:   " << n_dd << endl << endl;


		t1.reading(v1); cout << endl << endl;

		do
		{
			show_menu();
			cout << "Enter: "; cin >> c;
			system("cls");
			if (c<'0' || c>'7')
			{
				cout<<"Некорректыне данные, возобновите ввод!!! "<<endl;
			}
			else
			{
				switch (c)
				{
				case '1':
				{
					for (int i = 0; i < v1.size(); i++)
						v1[i].print();
					itogo(v1);
				}break;
				case '2':
				{
					h();
					for (int i = 0; i < v1.size(); i++)
						spisanie_1(v1, n_dd);
				}break;
				case '3':
				{
					h();
					for (int i = 0; i < rand() % 10 + 5; i++)
						buy_1(v1);
					for (int i = 0; i < v1.size(); i++)
						v1[i].print();
					itogo(v1);
				}break;
				case '4':
				{
					for (int i = 0; i < rand() % 10 + 5; i++)
						pp_1(v1);
					for (int i = 0; i < v1.size(); i++)
						v1[i].print();
					itogo(v1);
				}break;
				case '5':
				{
					reading_all();
				}break;
				case '6':
				{
					write(v1, "perezapis");
				}break;
				case '7':
				{
					v1.clear();
					h();
					for (int i = 0; i < 20; i++)
						add_r1(v1);

					for (int i = 0; i < v1.size(); i++)
						v1[i].print();
					itogo(v1);
				}break;
				case '0':
				{
					key = 0;
				}break;

				default:
					break;
				}
			}
			
		} while (key);
	}

	void add_r1(vector<Tovar> &_v);
	void spisanie_1(vector<Tovar>& _v, Date _d);
	void buy_1(vector<Tovar>& _v);
	void pp_1(vector<Tovar>& _v);
	void itogo(vector<Tovar>& _v1);
};
