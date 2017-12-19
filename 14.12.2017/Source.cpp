#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <string>
#include <vector>
using namespace std;

void main()
{
start:
	system("cls");
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "Введите номер задания от 1 до 5 : ";
	cin >> nz;

	switch (nz)
	{

	case 1:

	{
		system("cls");
		cout << "1 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << "Вывести столбиком следующие числа: 2,1, 2,2, 2,3, ..., 2,8." << endl;
		cout << "------------------------------------------------------------------" << endl;
		float a;
		a = 2;

		while (a < 2.8)
		{
			a = a + 0.1;
			cout << a << endl;
		}
		cout << "------------------------------------------------------------------" << endl;
		system("pause");
		goto start;
		break;
	}

	case 2:

	{
		system("cls");
		cout << "2 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << "Напечатать таблицу стоимости 100, 200, 300, ..., 2000 г конфет(стоимость 1 кг конфет вводится с клавиатуры)." << endl;
		cout << "------------------------------------------------------------------" << endl;
		int p;
		cout << "Введите цену 1-кг конфет : ";
		cin >> p;
		for (int i = 1; i <= 20; i++)
		{
			cout << i << "00 грамм конфет стоят: " << p*i*0.1 << " тенге" << endl;
		}

		system("pause");
		goto start;
		break;
	}


	case 3:

	{
		system("cls");
		cout << "3 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		cout << "Найти: " << endl;
		cout << "1 .сумму всех целых чисел от 100 до 500;" << endl;
		cout << "2 .сумму всех целых чисел от a до 500 (значение a вводится с клавиатуры; a <= 500);" << endl;
		cout << "3 .сумму всех целых чисел от –10 до b(значение b вводится с клавиатуры; b >= 10);" << endl;
		cout << "4 .сумму всех целых чисел от a до b(значения a и b вводятся с клавиатуры; b >= a)." << endl;
		int upr;
		cin >> upr;

		switch (upr)
		{
		case 1:
		{
			system("cls");
			cout << "Найти сумму всех целых чисел от 100 до 500" << endl;
			int  sum, i;
			sum = 100;
			for (i = 100; i <= 500; i++)
			{
				sum = sum + 1;
				cout << sum << endl;
			}
			system("pause");
			goto start;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Найти сумму всех целых чисел от a до 500 (значение a вводится с клавиатуры; a <= 500)" << endl;
			int i, a;
			cout << "Введите a: ";
			cin >> a;
			for (i = a; i <= 500; i++)
			{
				cout << i << endl;
			}
			system("pause");
			goto start;
			break;
		}
		case 3:
		{
		podz:
			system("cls");
			cout << "Найти сумму всех целых чисел от –10 до b(значение b вводится с клавиатуры; b >= 10)" << endl;
			int i, b, s;
			s = 0;
			cout << "Введите b: ";
			cin >> b;
			if (b >= 10)
			{
				for (i = -10; i = b; i++)
				{
					s = s + 1;
					cout << s << endl;
				}

			}
			else
			{
				cout << "b < 10 повторите попытку " << endl;
				system("pause");
				goto podz;
			}
			system("pause");
			goto start;
			break;

		}
		case 4:
		{
			/* сумму всех целых чисел от a до b (значения a и b вводятся с клавиатуры; b >= a).*/
			int a, b;
			cout << "Введите a: ";
			cin >> a;
			cout << "Введите b: ";
			cin >> b;
			for (int i=a; i >=b; i++)
			{
				cout << i << endl;
			}
			system("pause");
			goto start;
			break;
		}
		default:
			cout << "      !!! Введенного задания не существует !!! " << endl;
			cout << " *** Нажмите ENTER что бы вернуться к выбору задания *** " << endl;
			system("pause");
			goto start;
			break;
		}

		system("pause");
		goto start;
		break;
	}

	case 4:

	{
		system("cls");
		cout << "4 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/* "Странный муж". Некий мужчина отправляется на работу, которая находится на расстоянии 1 км от дома. Дойдя до места работы, он вдруг вспоминает, что перед уходом забыл поцеловать жену, и поворачивает назад. Пройдя полпути, он меняет решение, посчитав, что правильнее вернуться на работу. Пройдя 13 км по направлению к работе, он вдруг осознает, что будет настоящим подлецом, если так и не поцелует жену. На этот раз, прежде чем изменить мнение, он проходит 14 км. Так он продолжает метаться, и после N этапа, пройдя 1/N км, снова меняет решение.
Определить:
а) на каком расстоянии от дома будет находиться мужчина после 100-го этапа (если допустить, что такое возможно);
б) какой общий путь он при этом пройдет.
*/
		int B = 50;
		int N = 0;
		int way = 0;
		int distance = 0;
		int segment = 12;

		way += B;
		distance += B;

		way += B / 2;
		distance = B / 2;

		cout << "Количество этапов(сколько раз он передумал)?\n";
		cin >> N;
		for (size_t i = 1; i < N; i++)
		{
			if (i % 3 == 0 | i == 1) {
				segment += i;
				way += segment;
				distance += segment;
			}
			if (i % 2 == 0) {
				segment += i;
				way += segment;
				distance -= segment;
			}
		}
		cout << "Всего прошел за " << N << " этапов: " << way << " км\n";
		cout << "После " << N << " этапов, находится на расстоянии " << distance << " км от дома\n";
		system("pause");
		goto start;
		break;
	}


	case 5:

	{
		system("cls");
		cout << "5 задание" << endl;
		cout << "------------------------------------------------------------------" << endl;
		/* Дана последовательность целых чисел а1, а2, …, аn. Выяснить, является ли она возрастающей последовательностью простых чисел*/
		int a[100];
		int i, n, c, k, j;
		k = 1;
		cout << "Сколько n = ";
		cin >> n;
		cout << "Введите последовательность = " << '\n';
		for (i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (i = 1; i <= n; i++) {
			cout << a[i] << "   ";
		}
		cout << '\n';


		for (int j = 0; j < n; j++)
		{
			int i;
			for (i = 2; i <= sqrt((double)(a[j])); i++)
			{
				if (a[j] % i == 0) break;
			}
			if (i > sqrt((double)(a[j])));
		}
		system("pause");
		goto start;
		break;
	}



	default:
		system("cls");
		cout << "      !!! Введенного задания не существует !!! " << endl;
		cout << " *** Нажмите ENTER что бы вернуться к выбору задания *** " << endl;
		system("pause");
		goto start;
		break;
	}
}
