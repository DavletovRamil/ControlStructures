#include<iostream>
#include<conio.h>
using namespace std;

#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define SPACE ' ' 
#define ENTER 13 
#define Escape...27

void main()
{
	setlocale(LC_ALL, "");
	cout << "shooter" << endl;

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UP_ARROW: cout << "������" << key << endl;
		case'w': cout << "������" << endl; break;
		case'W': cout << "������" << endl; break;
		case DOWN_ARROW: cout << "�����" << key << endl;
		case's': cout << "�����" << endl; break;
		case'S': cout << "�����" << endl; break;
		case LEFT_ARROW: cout << "�����" << key << endl;
		case'a': cout << "�����" << endl; break;
		case'A': cout << "�����" << endl; break;
		case RIGHT_ARROW: cout << "������" << key << endl;
		case'd': cout << "������" << endl; break;
		case'D': cout << "������" << endl; break;
		case' ': cout << "������" << endl; break;
		case ENTER: cout << "�����" << endl; break;
		case Escape: cout << "�����" << endl;
		case -32:break;
		default: //if (key != Escape && key != -32)
			cout << "Error" << endl;
		}
	} while (key != Escape);
}