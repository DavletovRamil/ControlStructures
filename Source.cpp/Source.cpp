#include <iostream>
using namespace std;
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TRIANGLE_4
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined TASK_1
	double money;
	cout << "������� �������� �����: "; cin >> money;
	money += .00001;
	int rub = money;
	cout << rub << " ���.\t";
	int cop = (money - rub) * 100;
	cout << cop << "���. \n";


#endif
#if defined TASK_2
	double a = 2.75, b = 5, c = 0.85, d = 2;
	cout << "������� �������� ������:" << endl;

	cout << "������� ��������� �������:";
	cin >> a;
	cout << "������� ���������� ��������:";
	cin >> b;
	cout << "������� ��������� ���������:";
	cin >> c;
	cout << "������� ���������� ����������:";
	cin >> d;

	cout << a * b + c * d;


#endif TASK_2

	setlocale(LC_ALL, "Russian");
#if defined TASK_3

	double a = 2.75, b = 0.5, c = 7;
	cout << "������� �������� ������:" << endl;

	cout << "������� ��������� �������:";
	cin >> a;
	cout << "������� ��������� �������:";
	cin >> b;
	cout << "������� ���������� ����������:";
	cin >> c;

	cout << (a + b) * c;
#endif TASK_3

	setlocale(LC_ALL, "Russian");
#if defined TASK_4

	double a = 67, b = 8.5, c = 7.6;
	cout << "������� �������� �����:" << endl;
	cout << "����������� �� ���� (��):";
	cin >> a;
	cout << "������ ������� (������ �� 100 ��):";
	cin >> b;
	cout << "��������� ����� ������� (���)";
	cin >> c;

	cout << "��������� ������� ���� � ������� ��������:"
		<< b / d * a * c * 2;



#endif TASK_4
	setlocale(LC_ALL, "Russian");
#if defined TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)

	}
#endif //TRINAGLE_4

	int n;
	cout << "������� ������ ������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if (i % 2 == j % 2)cout << "+ ";else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ ": cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;

	}
}