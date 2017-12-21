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
		
		cout << "������� ����� ������� - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				cout << "�������� ����� A � ����� ������� N.\n";
				int a, n, sum;
				cout << "������� ����� a - ";
				cin >> a;
				cout << "������� ����� n - ";
				cin >> n;
				for (int i = 1; i <= n; i++)
				{	
					sum = pow(a, i);

					cout << sum << endl;
				}

			} break;
			
			case  2:
			{
				cout << "� ������� 12 �������.�������� ���������� ������� ������� ������(� ������� �������) \n";
				cout << "� ��������� ��������� � ���(���.���. / ��2).���������� ����� ������� ���������� �������\n";
				int ra, obl, chel;
				float pl;
				srand(time(NULL));
				cout << "������� ����� ��� - ";
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
					cout << "����� � ������ " << i << " ����� " << total_people << " �����." << endl;
					cout << "��� ������� ������ " << i << " ���������� " << total_pl << endl;
					
					total_obl_people += total_people;
					total_obl_pl += total_pl;
				}
				cout << "������� ���� ������� = " << total_obl_pl << endl;
				cout << "��������� ���� ������� = " << total_obl_people << endl;
				cout << "��������� ����� ��������� = " << total_obl_people / total_obl_pl << endl;
			} break;
			
			case 3:
			{
				cout << "��������� ��������� ��������� ������ �����. \n";
				cout << "��������� ����� N ����������� �� ��������� �������:  N!=1�2�3���N.\n";
				srand(time(NULL));
				int n = 5 + rand() % 9;
				int f = 1;
				for (int i = 1; i <= n; i++)
				{
					f *= i;
				}
				cout << "��������� ����� �� - " << n << " = " << f << endl;
			} break;

			case 4:
			{	
				cout << "��������� ����� S ��������� ����� �� 1 �� N.\n";
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
				cout << "����� ��� ����� ��������� ���� � ������� 3, \n";
				cout << "� ����� ���� ������� ����� ��������� ���� � ������ 3.\n";
				int i, n;
				int s = 0, s2 = 0;
				n = 100 + rand() % 1000;
				cout << n << endl;
				for (i = 1; i <= n; i++)
				{
					
					if (((i % 5) != 0) && (i % 3) == 0)
					{
						cout << "����� " << i << " ��������� ���� � ������� 3" << endl;
						s += i;
					}
					else if (((i % 5) == 0) && (i % 3) != 0)
					{
						s2 += i;
					}
				} 
				cout << "����� ����� = " << s << endl;
				cout << "����� ����� = " << s2 << endl;


			} break;

			case 6:
			{
				cout << "����� ��� ����� ������� ���� ��� ����� �� 1 �� N.\n";
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
				cout << "�������� �� �������� ����������� ����� �������� ������?\n";
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

			case 8: // ��������� ��� ������
			{
				cout << "�����, ������ ����� ���� ����� ���������, \n";
				cout << "������� �������, ���������� �����������.\n";
				cout << "����� � ���������� ��� ����������� ����� � ��������� �� 2 �� �.\n";
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
				cout << "��������� 1 ����� ������ ���� � �����, ������ N �����. \n";
				cout << "����� ������ ����� ������ ������ ������������� �� p% �� ��������� �����. ����������: \n";
				cout << "a.�� ����� ����� �������� ������������ ���������� ������ �������� 30 �����.;\n";
				cout << "b.����� ������� ������� ������ ������ �������� 1200 �����.\n";
				
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