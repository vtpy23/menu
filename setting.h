#include <iostream>
#include <stdio.h>
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

void setting()
{
	hinhnen(120, 30);
	hop(36, 13, 52, 14, 246);
	gotoXY(57, 13); cout << "SOUND EFFECT";
	gotoXY(43, 16); cout << "        **                        **";
	gotoXY(43, 17); cout << "      ** *    *                 ** *";
	gotoXY(43, 18); cout << "   ***** *  *  *             ***** *";
	gotoXY(43, 19); cout << "   ***** *   *  *            ***** *";
	gotoXY(43, 20); cout << "   ***** *  *  *             ***** *";
	gotoXY(43, 21); cout << "      ** *    *                 ** *";
	gotoXY(43, 22); cout << "       ***                       ***";
	gotoXY(43, 24); cout << "    SOUND ON                  SOUND OFF";
	gotoXY(60, 26); cout << "  BACK";
}