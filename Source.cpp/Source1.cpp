#include<iostream>
using namespace std;
#define TASK_1
//#define TASK_2
//#define TASK_3

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK_1
	double price_of_copybook;
	int number_of_copybooks;
	double price_of_pencil;
	int number_of_pencils;
	cout << "¬ведите цену тетради: "; cin >> price_of_copybook;
	cout << "¬ведите количество тетрадей: "; cin >> number_of_copybooks;
	cout << "¬ведите цену карандаша: "; cin >> price_of_pencil;
	cout << "¬ведите количество карандашей: "; cin >> number_of_pencils;
	double total_price = price_of_copybook * number_of_copybooks + price_of_pencil * number_of_pencils;
	cout << "ќбща€ стоимость: " << total_price << " руб. " << endl;
#endif

}