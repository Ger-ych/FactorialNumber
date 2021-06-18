#include <iostream>

using namespace std;

int Fact(int N)
{
	switch (N)
	{
	case 0:
		return 0;
		break;

	case 1:
		return 1;
		break;

	case 2:
		return 2;
		break;

	default:
		return N * Fact(N - 1);
		break;
	}	
}

int main()
{
	setlocale(LC_ALL, "rus");

	int Num = 0;

	cout << "######### Вычисление факториала #########" << endl;
	cout << endl << "Введите целое неотрицательное число от 0 до 15: ";
	cin >> Num;

	if (Num > 15 || Num < 0)
	{
		system("cls");

		cout << "######### Вычисление факториала #########" << endl;
		cout << endl << "Некорректный ввод! Число вне диапазона" << "\n\n";

		system("pause");
		return 0;
	}
		
	system("cls");

	cout << "######### Вычисление факториала #########" << endl;
	cout << endl << "Факториал числа " << Num << " равен: " << Fact(Num) << "\n\n";

	system("pause");
	return 0;
}