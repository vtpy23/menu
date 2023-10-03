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

void about()
{
	hinhnen(120, 30);
	hop(36, 13, 52, 14, 246);
	gotoXY(59, 13); cout << " ABOUT ");
	gotoXY(47, 16); cout << " DO AN GAME CO CARO - NHOM IV");
	gotoXY(44, 18); cout << "_MSSV_                   _HO VA TEN_");
	gotoXY(43, 19); cout << "23122031               NGUYEN HUY HOANG");
	gotoXY(43, 20); cout << "23122042              TRAN TA QUANG MINH");
	gotoXY(43, 21); cout << "23122043                 NGUYEN BA NAM");
	gotoXY(43, 22); cout << "23122056                 LAM HOANG VU");
	gotoXY(43, 24); cout << "GV HUONG DAN: THAY TRUONG TOAN THINH");
	gotoXY(60, 26); pri"BACK");
}