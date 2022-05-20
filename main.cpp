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
		case UP_ARROW: cout << "Вперед" << key << endl;
		case'w': cout << "Вперед" << endl; break;
		case'W': cout << "Вперед" << endl; break;
		case DOWN_ARROW: cout << "Назад" << key << endl;
		case's': cout << "Назад" << endl; break;
		case'S': cout << "Назад" << endl; break;
		case LEFT_ARROW: cout << "Влево" << key << endl;
		case'a': cout << "Влево" << endl; break;
		case'A': cout << "Влево" << endl; break;
		case RIGHT_ARROW: cout << "Вправо" << key << endl;
		case'd': cout << "Вправо" << endl; break;
		case'D': cout << "Вправо" << endl; break;
		case' ': cout << "Прыжок" << endl; break;
		case ENTER: cout << "Огонь" << endl; break;
		case Escape: cout << "Выход" << endl;
		case -32:break;
		default: //if (key != Escape && key != -32)
			cout << "Error" << endl;
		}
	} while (key != Escape);
}