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

void help()
{
	hinhnen(120, 30);
	hop(36, 13, 52, 16, 246);
	gotoXY(58, 13); cout << "HUONG DAN";
	gotoXY(41, 15); cout << "1. BAN CO VOI KINH THUOC 16x16.";
	gotoXY(41, 18); cout << "2. SU DUNG: PHIM W A S D DE DI CHUYEN";
	gotoXY(53, 19); cout << "PHIM ENTER DE DANH DAU.";
	gotoXY(41, 21); cout << "3. KHI CO 5 QUAN CO X HOAC O LIEN TIEP THEO";
	gotoXY(44, 22); cout << "CHIEU DOC, NGANG, CHEO SE KET THUC.";
	gotoXY(41, 24); cout << "4. AP DUNG LUAT CHAN HAI DAU TRONG CO CARO.";
	gotoXY(47, 26); cout << "YOU CAN DO IT. GOOD LUCK!!!";
	gotoXY(60, 28); cout << "BACK";
}