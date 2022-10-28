

#include<iostream>
using namespace std;
struct fraction
{
	int ch;
	int zn;
};
struct employee
{
	int number;
	float paid;
	
};
struct time1
{
	int hours;
	int minutes;
	int seconds;
};
enum etype { laborer, secretary, manager, accountant, executive, researcher };


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int a;
	cout << "Введите номер задания:";
	cin >> a;
	if (a == 1)
	{
		string b;
		cout << "Вывести информацию о сотрудниках(y/n):";
		cin >> b;
		if (b == "y")
		{
			employee person;
			person.number = 1;
			person.paid = 35000;
			cout << "Номер сотрудника:" << person.number << endl << "Его зарплата:" << person.paid << endl;
			employee person2;
			person2.number = 2;
			person2.paid = 45000;
			cout << "Номер сотрудника:" << person2.number << endl << "Его зарплата:" << person2.paid << endl;
			employee person3;
			person3.number = 3;
			person3.paid = 80000;
			cout << "Номер сотрудника:" << person3.number << endl << "Его зарпалата:" << person3.paid << endl;
			return main();
		}
		else
		{
			return main();
		}
	}
	if (a == 2)
	{
	
		char ch;
		cout << "Введите первую бикву должности (laborer, secretary, manager, accountant, executive, researcher): ";
		cin >> ch;
		switch (ch) 
		{
		case 'l':  cout << "Полное название должности: " << "laborer" << endl;    break;
		case 's':  cout << "Полное название должности: " << "secretary" << endl;  break;
		case 'm':  cout << "Полное название должности: " << "manager" << endl;    break;
		case 'a':  cout << "Полное название должности: " << "accountant" << endl; break;
		case 'e':  cout << "Полное название должности: " << "executive" << endl;  break;
		case 'r':  cout << "Полное название должности: " << "researcher" << endl; break;
		}
		return main();

	}
	if (a == 3)
	{
		int nod;
		char slash;
		fraction firstnumber, secondnumber, result;
		cout << "Введите значение первой дроби:"; 
		cin >> firstnumber.ch >> slash >> firstnumber.zn ;
		cout << "Введите значение второй дроби:";
		cin >> secondnumber.ch >> slash >> secondnumber.zn;
		result.ch = (firstnumber.ch * secondnumber.zn) + (secondnumber.ch * firstnumber.zn);
		result.zn = firstnumber.zn * secondnumber.zn;
		if (result.ch < result.zn)
		{
			for (int i = 1; i < result.zn; i++)
			{
				if ((result.ch % i == 0) && (result.zn % i == 0))
				{
					nod = i;
				}
			}
		}
		else
		{
			for (int i = 1; i < result.ch; i++)
			{
				if ((result.ch % i == 0) && (result.zn % i == 0))
				{
					nod = i;
				}
			}
		}
		if (result.ch % result.zn == 0)
		{
			cout << "Сумма равна:" << result.ch / nod << "\n";
		}
		else
		{
			cout << "Сумма равна:" << result.ch / nod << '/' << result.zn / nod << "\n";
		}
		return main();
	}
	if (a == 4)
	{
		time1 one;
		time1 two;
		char stop;
		cout << "Введите время в часах минутах и секундах :";
		cin >> one.hours >> stop >> one.minutes >> stop >> one.seconds;
		two.seconds = one.hours * 3600 + one.minutes * 60 + one.seconds;
		cout << "Время в секундах:" << two.seconds << endl;
		
	}
	if (a == 5)
	{
		char stop;
		time1 sum1, sum2, sum3;
		cout << "Введите первое значение времени :";
		cin >> sum1.hours >> stop >> sum1.minutes>> stop >> sum1.seconds;
		cout << "Ведите второе значение времени :";
		cin >> sum2.hours >> stop >> sum2.minutes >> stop >> sum2.seconds;
		sum3.hours = sum1.hours + sum2.hours;
		sum3.minutes = sum1.minutes + sum2.minutes;
		sum3.seconds = sum1.seconds + sum2.seconds;
		if (sum3.seconds > 59)
		{
			sum3.minutes += 1;
			sum3.seconds -= 60;
		}
		if (sum3.minutes > 59)
		{
			sum3.hours += 1;
			sum3.minutes -= 60;
		}
		
		cout << "Сумма  времени равна: " << sum3.hours << stop << sum3.minutes << stop << sum3.seconds <<endl;
		return main();
	}
}