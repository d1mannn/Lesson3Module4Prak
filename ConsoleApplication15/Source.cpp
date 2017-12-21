#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int task;
	do
	{
		
		cout << "Введите номер задания - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				cout << "Возвести числа A в целую степень N.\n";
				int a, n, sum;
				cout << "Введите число a - ";
				cin >> a;
				cout << "Введите число n - ";
				cin >> n;
				for (int i = 1; i <= n; i++)
				{	
					sum = pow(a, i);

					cout << sum << endl;
				}

			} break;
			
			case  2:
			{
				cout << "В области 12 районов.Известны количество жителей каждого района(в тысячах человек) \n";
				cout << "и плотность населения в нем(тыс.чел. / км2).Определить общую площадь территории области\n";
				int ra, obl, chel;
				float pl;
				srand(time(NULL));
				cout << "Введите колво обл - ";
				cin >> obl;
				int total_people = 0, total_obl_people = 0;
				float total_pl = 0, total_obl_pl = 0;
				for (int i = 1; i <= obl; i++)
				{
					
					ra = 1 + rand() % 9;
					cout << ra << endl;
					total_people = 0;
					total_pl = 0;
					for (int m = 0; m <=ra; m++)
					{
						chel = 8000 + rand() & 9000;
						total_people += chel;
						pl = 6000 + rand() & 25000;
						total_pl += pl;
					}
					cout << "Всего в районе " << i << " живет " << total_people << " людей." << endl;
					cout << "Вся площадь района " << i << " составляет " << total_pl << endl;
					
					total_obl_people += total_people;
					total_obl_pl += total_pl;
				}
				cout << "Площадь всех районов = " << total_obl_pl << endl;
				cout << "Население всех районов = " << total_obl_people << endl;
				cout << "Плотность всего населения = " << total_obl_people / total_obl_pl << endl;
			} break;
			
			case 3:
			{
				cout << "Вычислить факториал заданного целого числа. \n";
				cout << "Факториал числа N вычисляется по следующей формуле:  N!=1·2·3···N.\n";
				srand(time(NULL));
				int n = 5 + rand() % 9;
				int f = 1;
				for (int i = 1; i <= n; i++)
				{
					f *= i;
				}
				cout << "Факториал чисел до - " << n << " = " << f << endl;
			} break;

			case 4:
			{	
				cout << "Вычислить сумму S квадратов чисел от 1 до N.\n";
				int s = 0, n;
				srand(time(NULL));
				n = 5 + rand() % 10;
				for (int i = 1; i <= n; i++)
				{
					s += pow(n, 2);
					cout << s << endl;
				}

			} break;

			case 5:
			{
				cout << "Найти все числа некратные пяти и кратные 3, \n";
				cout << "и сумма цифр которых также некратные пяти и кратна 3.\n";
				int i, n;
				int s = 0, s2 = 0;
				n = 100 + rand() % 1000;
				cout << n << endl;
				for (i = 1; i <= n; i++)
				{
					
					if (((i % 5) != 0) && (i % 3) == 0)
					{
						cout << "Число " << i << " некратное пяти и кратное 3" << endl;
						s += i;
					}
					else if (((i % 5) == 0) && (i % 3) != 0)
					{
						s2 += i;
					}
				} 
				cout << "Сумма равна = " << s << endl;
				cout << "Сумма равна = " << s2 << endl;


			} break;

			case 6:
			{
				cout << "Найти все числа кратные пяти для чисел от 1 до N.\n";
				srand(time(NULL));
				int n = 20 + rand() % 30;
				for (int i = 1; i <= n; i++)
				{
					if (!(i % 5))
					cout << i << endl;
					
				}
			} break;

			case 7:
			{
				cout << "Является ли заданное натуральное число степенью двойки?\n";
				srand(time(NULL));
				int n = 10 + rand() % 40;
				for (int i = 1; i <= n; i++)
				{
					if (sqrt(n))
					{
						cout << i << endl;
					}
				}
			} break;

			case 8: // РАЗОБРАТЬ ЭТУ ЗАДАЧУ
			{
				cout << "Число, равное сумме всех своих делителей, \n";
				cout << "включая единицу, называется совершенным.\n";
				cout << "Найти и напечатать все совершенные числа в интервале от 2 до х.\n";
				srand(time(NULL));
				int x = 1 + rand() % 90;
				int s = 0;
				for (int i = 2; i <= x; i++)
				{	
					
					for (int j = 1; j < i; j++)
					if (i%j == 0)
						s += j;
					if (s == i)
					{
						cout << "Chislo sovershennoe" << i;
					}
				}
			} break;

			case 9:
			{
				cout << "Гражданин 1 марта открыл счет в банке, вложив N тенге. \n";
				cout << "Через каждый месяц размер вклада увеличивается на p% от имеющейся суммы. Определить: \n";
				cout << "a.за какой месяц величина ежемесячного увеличения вклада превысит 30 тенге.;\n";
				cout << "b.через сколько месяцев размер вклада превысит 1200 тенге.\n";
				
				srand(time(NULL));
				int n = 50000 + rand() % 50000;
				int p = 1 + rand() % 4;
				float dep = 0, month = 0;
				cout << n << endl;
				cout << p << endl;

				while (dep <= 3000)
				{
					dep += (n * p) / 100;
					cout << dep << endl;
					month++;
				}
				
				cout << dep << endl;
				cout << month << endl;

			}
		}




	} while (task > 20);
	


}