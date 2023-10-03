#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

void gotoXY(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = { x, y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

void textcolor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}

void hop(int x, int y, int w, int h, int a)
{
	if (h <= 1 || w <= 1) return;
	for (int ix = x; ix <= x + w; ix++)
	{
		gotoXY(ix, y); textcolor(a);
		cout << char(196);
		gotoXY(ix, y + h); textcolor(a);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++)
	{
		gotoXY(x, iy); textcolor(a);
		cout << char(179);
		gotoXY(x + w, iy); textcolor(a);
		cout << char(179);
	}
	gotoXY(x, y); textcolor(a); cout << char(218);
	gotoXY(x + w, y); textcolor(a); cout << char(191);
	gotoXY(x, y + h); textcolor(a); cout << char(192);
	gotoXY(x + w, y + h); textcolor(a); cout << char(217);
}

void hinhnen(int x, int y)
{
	int ix, iy;
	for (iy = 0; iy < y; iy++)
	{
		for (ix = 0; ix < x; ix++)
		{
			textcolor(255);
			cout << " ";
		}
	}
}

void start()
{
	hinhnen(120, 30);
	hop(36, 13, 52, 11, 246);
	gotoXY(48, 13); cout << "WHO DO YOU WANT TO PLAY WITH ?" ;
	gotoXY(43, 16); cout << "            1 Play together";
	gotoXY(43, 18); cout << "            2 Play with Bot:";
	gotoXY(43, 19); cout << "               - Easy -";
	gotoXY(43, 20); cout << "              - Medium -";
	gotoXY(43, 21); cout << "               - Hard -";
	gotoXY(60, 23); cout << "BACK";
}