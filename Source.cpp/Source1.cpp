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
	cout << "������� ���� �������: "; cin >> price_of_copybook;
	cout << "������� ���������� ��������: "; cin >> number_of_copybooks;
	cout << "������� ���� ���������: "; cin >> price_of_pencil;
	cout << "������� ���������� ����������: "; cin >> number_of_pencils;
	double total_price = price_of_copybook * number_of_copybooks + price_of_pencil * number_of_pencils;
	cout << "����� ���������: " << total_price << " ���. " << endl;
#endif

}