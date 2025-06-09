#include<iostream>
#include<string>
#include<algorithm>
#include<windows.h>
#include<fstream>
#define re return
using namespace std;
HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
int k = 5;
void print(int board[]) {
	int i = 0;
	string c[64] = { " RB ", " AB ", " FB ", " VB ", " KB ", " FB ", " AB ", " RB ",
					 " SB ", " SB ", " SB ", " SB ", " SB ", " SB ", " SB ", " SB " ,
					 "    ", "    ", "    ", "    ", "    ", "    ", "    ", "    ",
					 "    ", "    ", "    ", "    ", "    ", "    ", "    ", "    ",
					 "    ", "    ", "    ", "    ", "    ", "    ", "    ", "    ",
					 "    ", "    ", "    ", "    ", "    ", "    ", "    ", "    ",
					 " SW ", " SW ", " SW ", " SW ", " SW ", " SW ", " SW ", " SW ",
					 " RW ", " AW ", " FW ", " VW ", " KW ", " FW ", " AW ", " RW " };
	int k = 2;
	SetConsoleTextAttribute(o, k);
	int k1 = 4;
	char cha = 'A';
	cout << endl;
	for (int i = 1; i < 9; i++)
         cout << "    " << i << "  ";
	cout << endl;
    k = 15;
	SetConsoleTextAttribute(o, k);
	k1 = 15;
	{cout << char(218);
	int aa = 7;
	while (aa--) {
		int a = 6;
		while (a--) {
			cout << char(196);
		}
		cout << char(194);
	}
	int a = 6;
	while (a--) {
		cout << char(196);
	}
	cout << char(191);
	}
	cout << endl;
	int b = 3;
	while (b--) {
		{cout << char(179);
		int aa = 4;
		while (aa--) {
			int a = 6;
			while (a--) {
				cout << char(178);
			}
			cout << char(179);
			a = 6;
			while (a--) {
				cout << char(176);
			}
			cout << char(179);
		}
		}
		cout << endl;
		{cout << char(179);
		int aa = 4;
		while (aa--) {
			cout << char(178) << c[board[i++]] << char(178) << char(179);
			cout << char(176) << c[board[i++]] << char(176) << char(179);
		}
		}
		k = 2;
		SetConsoleTextAttribute(o, k);
		k1 = 4;
		cout << "  " << cha++;
		cout << endl;
		k = 15;
		SetConsoleTextAttribute(o, k);
		k1 = 15;
		{cout << char(179);
		int aa = 4;
		while (aa--) {
			int a = 6;
			while (a--) {
				cout << char(178);
			}
			cout << char(179);
			a = 6;
			while (a--) {
				cout << char(176);
			}
			cout << char(179);
		}
		}
		cout << endl;
		{
			cout << char(195);
			int a = 7;
			while (a--)
				cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197);
			cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180);
		}
		cout << endl;
		{cout << char(179);
		int aa = 4;
		while (aa--) {
			int a = 6;
			while (a--) {
				cout << char(176);
			}
			cout << char(179);
			a = 6;
			while (a--) {
				cout << char(178);
			}
			cout << char(179);
		}
		}
		cout << endl;
		{cout << char(179);
		int aa = 4;
		while (aa--) {
			cout << char(176) << c[board[i++]] << char(176) << char(179);
			cout << char(178) << c[board[i++]] << char(178) << char(179);
		}
		}
		k = 2;
		SetConsoleTextAttribute(o, k);
		k1 = 4;
		cout << "  " << cha++;
		cout << endl;
		k = 15;
		SetConsoleTextAttribute(o, k);
		k1 = 15;
		{cout << char(179);
		int aa = 4;
		while (aa--) {
			int a = 6;
			while (a--) {
				cout << char(176);
			}
			cout << char(179);
			a = 6;
			while (a--) {
				cout << char(178);
			}
			cout << char(179);
		}
		}
		cout << endl;
		{
			cout << char(195);
			int a = 7;
			while (a--)
				cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197);
			cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180);
		}
		cout << endl;
	}
	{cout << char(179);
	int aa = 4;
	while (aa--) {
		int a = 6;
		while (a--) {
			cout << char(178);
		}
		cout << char(179);
		a = 6;
		while (a--) {
			cout << char(176);
		}
		cout << char(179);
	}
	}
	cout << endl;
	{cout << char(179);
	int aa = 4;
	while (aa--) {
		cout << char(178) << c[board[i++]] << char(178) << char(179);
		cout << char(176) << c[board[i++]] << char(176) << char(179);
	}
	}
	k = 2;
	SetConsoleTextAttribute(o, k);
	k1 = 4;
	cout << "  " << cha++;
	cout << endl;
	k = 15;
	SetConsoleTextAttribute(o, k);
	k1 = 15;
	{cout << char(179);
	int aa = 4;
	while (aa--) {
		int a = 6;
		while (a--) {
			cout << char(178);
		}
		cout << char(179);
		a = 6;
		while (a--) {
			cout << char(176);
		}
		cout << char(179);
	}
	}
	cout << endl;
	{
		cout << char(195);
		int a = 7;
		while (a--)
			cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(197);
		cout << char(196) << char(196) << char(196) << char(196) << char(196) << char(196) << char(180);
	}
	cout << endl;
	{cout << char(179);
	int aa = 4;
	while (aa--) {
		int a = 6;
		while (a--) {
			cout << char(176);
		}
		cout << char(179);
		a = 6;
		while (a--) {
			cout << char(178);
		}
		cout << char(179);
	}
	}
	cout << endl;
	{cout << char(179);
	int aa = 4;
	while (aa--) {
		cout << char(176) << c[board[i++]] << char(176) << char(179);
		cout << char(178) << c[board[i++]] << char(178) << char(179);
	}
	}
	k = 2;
	SetConsoleTextAttribute(o, k);
	k1 = 4;
	cout << "  " << cha++;
	cout << endl;
	k = 15;
	SetConsoleTextAttribute(o, k);
	k1 = 15;
	{cout << char(179);
	int aa = 4;
	while (aa--) {
		int a = 6;
		while (a--) {
			cout << char(176);
		}
		cout << char(179);
		a = 6;
		while (a--) {
			cout << char(178);
		}
		cout << char(179);
	}
	}
	cout << endl;
	{cout << char(192);
	int aa = 7;
	while (aa--) {
		int a = 6;
		while (a--) {
			cout << char(196);
		}
		cout << char(193);
	}
	int a = 6;
	while (a--) {
		cout << char(196);
	}
	cout << char(217);
	}
	cout << endl;
}
bool checkab(int board[], int i, int j) {
	if (board[j] > 15) {
		if ((i + 16) + 1 == j)re 1;
		if ((i + 16) - 1 == j)re 1;
		if ((i - 16) + 1 == j)re 1;
		if ((i - 16) - 1 == j)re 1;
		if ((i + 2) + 8 == j)re 1;
		if ((i + 2) - 8 == j)re 1;
		if ((i - 2) + 8 == j)re 1;
		if ((i - 2) - 8 == j)re 1;
	}
	re 0;
}
bool checkaw(int board[], int i, int j) {
	if (board[j] < 48) {
		if ((i + 16) + 1 == j)re 1;
		if ((i + 16) - 1 == j)re 1;
		if ((i - 16) + 1 == j)re 1;
		if ((i - 16) - 1 == j)re 1;
		if ((i + 2) + 8 == j)re 1;
		if ((i + 2) - 8 == j)re 1;
		if ((i - 2) + 8 == j)re 1;
		if ((i - 2) - 8 == j)re 1;
	}
	re 0;
}
bool checksb(int board[], int i, int j) {
	if (board[j] > 15 || board[j] < 48) {
		if (i + 8 == j)re 1;
		if ((i / 8) == 1 && i + 16 == j)re 1;
	}
	if (i + 7 == j && board[j] > 47)re 1;
	if (i + 9 == j && board[j] > 47)re 1;
	re 0;
}
bool checksw(int board[], int i, int j) {
	if (board[j] > 15 || board[j] < 48) {
		if (i - 8 == j)re 1;
		if ((i / 8) == 6 && i - 16 == j)re 1;
	}
	if (i - 7 == j && board[j] < 16)re 1;
	if (i - 9 == j && board[j] < 16)re 1;
	re 0;
}
bool checkrb(int board[], int i, int j) {
	if (board[j] > 15) {
		for (int ii = 8; ii < 64; ii += 8) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		for (int ii = -8; ii > -64; ii -= 8) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		int ii = 1;
		while (1) {
			if (i / 8 != (i + ii) / 8)break;
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
			ii++;
		}
		ii = -1;
		while (1) {
			if (i / 8 != (i + ii) / 8)break;
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
			ii--;
		}
	}
	re 0;
}
bool checkrw(int board[], int i, int j) {
	if (board[j] < 48) {
		for (int ii = 8; ii < 64; ii += 8) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		for (int ii = -8; ii > -64; ii -= 8) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		int ii = 1;
		while (1) {
			if (i / 8 != (i + ii) / 8)break;
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
			ii++;
		}
		ii = -1;
		while (1) {
			if (i / 8 != (i + ii) / 8)break;
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
			ii--;
		}
	}
	re 0;
}
bool checkfb(int board[], int i, int j) {
	if (board[j] > 15) {
		for (int ii = 9; ii < 64; ii += 9) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		for (int ii = 7; ii < 64; ii += 7) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		for (int ii = -9; ii > -64; ii -= 9) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		for (int ii = -7; ii > -64; ii -= 7) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
	}
	re 0;
}
bool checkfw(int board[], int i, int j) {
	if (board[j] < 48) {
		for (int ii = 9; ii < 64; ii += 9) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		for (int ii = 7; ii < 64; ii += 7) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		for (int ii = -9; ii > -64; ii -= 9) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
		for (int ii = -7; ii > -64; ii -= 7) {
			if (i + ii == j)re 1;
			if (board[i + ii] < 16 || board[i + ii]>47)break;
		}
	}
	re 0;
}
bool checkkb(int board[], int i, int j) {
	if (board[j] > 15) {
		if (i + 1 == j)re 1;
		if (i - 1 == j)re 1;
		if (i + 8 == j)re 1;
		if (i - 8 == j)re 1;
		if (i + 7 == j)re 1;
		if (i - 7 == j)re 1;
		if (i + 9 == j)re 1;
		if (i - 9 == j)re 1;
	}
	re 0;
}
bool checkkw(int board[], int i, int j) {
	if (board[j] < 48) {
		if (i + 1 == j)re 1;
		if (i - 1 == j)re 1;
		if (i + 8 == j)re 1;
		if (i - 8 == j)re 1;
		if (i + 7 == j)re 1;
		if (i - 7 == j)re 1;
		if (i + 9 == j)re 1;
		if (i - 9 == j)re 1;
	}
	re 0;
}
bool kishb(int board[]){
	int mabda, magsad;
	for (int i = 0; i < 64; i++)
	{
		if (board[i] == 4)
		{
			magsad = i;
			break;
		}
	}
	for (int i = 48; i <= 64; i++)
	{
		for (int j = 0; j < 64; j++)
		{
			if (board[j] == i)
			{
				mabda = j;
				break;
			}
		}
		if (i == 56 || i == 63) {
			if (checkrw(board, mabda, magsad))re 1;
		}
		if (i == 57 || i == 62) {
			if (checkaw(board, mabda, magsad))re 1;
		}
		if (i < 56 && i>47) {
			if (checksw(board, mabda, magsad))re 1;
		}
		if (i == 58 || i == 61) {
			if (checkfw(board, mabda, magsad))re 1;
		}
		if (i == 59) {
			if (checkfw(board, mabda, magsad))re 1;
			if (checkrw(board, mabda, magsad))re 1;
		}
		if (i == 60) {
			if (checkkw(board, mabda, magsad))re 1;
		}
	}
	re 0;
}
bool kishw(int board[])
{
	int mabda, magsad;
	for (int i = 0; i < 64; i++)
	{
		if (board[i] == 60)
		{
			magsad = i;
			break;
		}
	}
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 64; j++)
		{
			if (board[j] == i)
			{
				mabda = j;
				break;
			}
		}
		if (i == 0 || i == 7) {
			if (checkrb(board, mabda, magsad))re 1;
		}
		if (i == 1 || i == 6) {
			if (checkab(board, mabda, magsad))re 1;
		}
		if (i < 16 && i > 7) {
			if (checksb(board, mabda, magsad))re 1;
		}
		if (i == 2 || i == 5) {
			if (checkfb(board, mabda, magsad))re 1;
		}
		if (i == 3) {
			if (checkfb(board, mabda, magsad))re 1;
			if (checkrb(board, mabda, magsad))re 1;
		}
		if (i == 4) {
			if (checkkb(board, mabda, magsad))re 1;
		}
	}
	re 0;
}
bool mat1b(int board[])
{
	int shah;
	for (int i = 0; i < 64; i++)
	{
		if (board[i] == 4)
		{
			shah = i;
			break;
		}
	}
	if (board[shah + 1] > 15 && board[shah + 1] < 47)// 8 TA KHONE KHALI KE SHAH MITONE BERE NEVSHTIM KE ON 
	{                                               // KHONE KHALI HAST YA NA 
		int temp = board[shah];
		board[shah] = board[shah + 1];  //AGAR IN KHONE KALI BOD JABEJAYI SORAT BEGIRE
		board[shah + 1] = temp;
		if (!kishb(board))re 0;       // MOSAVI BA kishb(board) == 0
		temp = board[shah];
		board[shah] = board[shah - 1];// DOBARE IN KAR RO MIKONIM TA DAR SHART BADI BE MOSKEL NAKHORIM
		board[shah - 1] = temp;       // * VA HAME CHIZ MESLE HALAT AVALIYE BASHE
	}
	if (board[shah - 1] > 15 && board[shah - 1] < 47) // == AKAR KHALI BOD IN JABE JAYI RO ANJAM BEDIM
	{                                                // SHAH BERE ON KHONE
		int temp = board[shah];
		board[shah] = board[shah - 1];
		board[shah - 1] = temp;
		if (!kishb(board))re 0;
		temp = board[shah];
		board[shah] = board[shah - 1];
		board[shah - 1] = temp;
	}
	if (board[shah + 8] > 15 && board[shah + 8] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah + 8];
		board[shah + 8] = temp;
		if (!kishb(board))re 0;
		temp = board[shah];
		board[shah] = board[shah + 8];
		board[shah + 8] = temp;
	}
	if (board[shah - 8] > 15 && board[shah - 8] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah - 8];
		board[shah - 8] = temp;
		if (!kishb(board))re 0;
		temp = board[shah];
		board[shah] = board[shah - 8];
		board[shah - 8] = temp;
	}
	if (board[shah + 7] > 15 && board[shah + 7] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah + 7];
		board[shah + 7] = temp;
		if (!kishb(board))re 0;
		temp = board[shah];
		board[shah] = board[shah + 7];
		board[shah + 7] = temp;
	}
	if (board[shah - 7] > 15 && board[shah - 7] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah - 7];
		board[shah - 7] = temp;
		if (!kishb(board))re 0;
		temp = board[shah];
		board[shah] = board[shah - 7];
		board[shah - 7] = temp;
	}
	if (board[shah + 9] > 15 && board[shah + 9] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah + 9];
		board[shah + 9] = temp;
		if (!kishb(board))re 0;
		temp = board[shah];
		board[shah] = board[shah + 9];
		board[shah + 9] = temp;
	}
	if (board[shah - 9] > 15 && board[shah - 9] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah - 9];
		board[shah - 9] = temp;
		if(kishb(board) == 0)re 0; //== (!kishb(board))re 0; AGAR KISH SHODI VA re 1; 
		temp = board[shah];
		board[shah] = board[shah - 9]; // BE HALAT GABLI BAZ GARD
		board[shah - 9] = temp;
	}
}
bool mat1w(int board[])
{
	int shah;
	for (int i = 0; i < 64; i++)
	{
		if (board[i] == 60)
		{
			shah = i;
			break;
		}
	}
	if (board[shah + 1] > 15 && board[shah + 1] < 47)// 8 TA KHONE KHALI KE SHAH MITONE BERE NEVSHTIM KE ON 
	{                                               // KHONE KHALI HAST YA NA 
		int temp = board[shah];
		board[shah] = board[shah + 1];  //AGAR IN KHONE KALI BOD JABEJAYI SORAT BEGIRE
		board[shah + 1] = temp;
		if (!kishw(board))re 0;       // MOSAVI BA kishb(board) == 0
		temp = board[shah];
		board[shah] = board[shah - 1];// DOBARE IN KAR RO MIKONIM TA DAR SHART BADI BE MOSKEL NAKHORIM
		board[shah - 1] = temp;       // * VA HAME CHIZ MESLE HALAT AVALIYE BASHE
	}
	if (board[shah - 1] > 15 && board[shah - 1] < 47) // == AKAR KHALI BOD IN JABE JAYI RO ANJAM BEDIM
	{                                                // SHAH BERE ON KHONE
		int temp = board[shah];
		board[shah] = board[shah - 1];
		board[shah - 1] = temp;
		if (!kishw(board))re 0;
		temp = board[shah];
		board[shah] = board[shah - 1];
		board[shah - 1] = temp;
	}
	if (board[shah + 8] > 15 && board[shah + 8] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah + 8];
		board[shah + 8] = temp;
		if (!kishw(board))re 0;
		temp = board[shah];
		board[shah] = board[shah + 8];
		board[shah + 8] = temp;
	}
	if (board[shah - 8] > 15 && board[shah - 8] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah - 8];
		board[shah - 8] = temp;
		if (!kishw(board))re 0;
		temp = board[shah];
		board[shah] = board[shah - 8];
		board[shah - 8] = temp;
	}
	if (board[shah + 7] > 15 && board[shah + 7] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah + 7];
		board[shah + 7] = temp;
		if (!kishw(board))re 0;
		temp = board[shah];
		board[shah] = board[shah + 7];
		board[shah + 7] = temp;
	}
	if (board[shah - 7] > 15 && board[shah - 7] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah - 7];
		board[shah - 7] = temp;
		if (!kishw(board))re 0;
		temp = board[shah];
		board[shah] = board[shah - 7];
		board[shah - 7] = temp;
	}
	if (board[shah + 9] > 15 && board[shah + 9] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah + 9];
		board[shah + 9] = temp;
		if (!kishw(board))re 0;
		temp = board[shah];
		board[shah] = board[shah + 9];
		board[shah + 9] = temp;
	}
	if (board[shah - 9] > 15 && board[shah - 9] < 47)
	{
		int temp = board[shah];
		board[shah] = board[shah - 9];
		board[shah - 9] = temp;
		if (kishw(board) == 0)re 0; //== (!kishb(board))re 0; AGAR KISH SHODI VA re 1; 
		temp = board[shah];
		board[shah] = board[shah - 9]; // BE HALAT GABLI BAZ GARD
		board[shah - 9] = temp;
	}
}
bool mat2b(int board[])
{
	int o, p;
	for (int i = 48; i <= 64; i++)
	{
		p = i;
		for (int j = 0; j < 64; j++)
		{
			if (board[j] == i)
			{
				o = j;
				break;
			}
		}
		board[o] = 16;
		if (!kishb(board))
		{
			board[o] = i;
			int mabda, magsad;
			for (int i = 0; i < 64; i++)
			{
				if (board[i] == p)
				{
					magsad = i;
					break;
				}
			}
			for (int i = 48; i <= 64; i++)
			{
				for (int j = 0; j < 64; j++)
				{
					if (board[j] == i)
					{
						mabda = j;
						break;
					}
				}
				if (mabda == 56 || mabda == 63) {
					if (checkrw(board, mabda, magsad))re 0;
				}
				if (mabda == 57 || mabda == 62) {
					if (checkaw(board, mabda, magsad))re 0;
				}
				if (mabda < 56 && mabda>47) {
					if (checksw(board, mabda, magsad))re 0;
				}
				if (mabda == 58 || mabda == 61) {
					if (checkfw(board, mabda, magsad))re 0;
				}
				if (mabda == 59) {
					if (checkfw(board, mabda, magsad))re 0;
					if (checkrw(board, mabda, magsad))re 0;
				}
				if (mabda == 60) {
					if (checkkw(board, mabda, magsad))re 0;
				}
			}
			board[o] = i; // AGAR KISH SHODE BOD BAZ MEGDAR i RO DAKHELESH BEZAR
		}
	}
	re 1;
}
bool mat2w(int board[])
{
	int o, p;
	for (int i = 48; i <= 64; i++)
	{
		p = i;
		for (int j = 0; j < 64; j++)
		{
			if (board[j] == i)
			{
				o = j;
				break;
			}
		}
		board[o] = 16;
		if (!kishb(board))
		{
			board[o] = i;
			int mabda, magsad;
			for (int i = 0; i < 64; i++)
			{
				if (board[i] == p)
				{
					magsad = i;
					break;
				}
			}
			for (int i = 48; i <= 64; i++)
			{
				for (int j = 0; j < 64; j++)
				{
					if (board[j] == i)
					{
						mabda = j;
						break;
					}
				}
				if (mabda == 0 || mabda == 7) {
					if (checkrb(board, mabda, magsad))re 0;
				}
				if (mabda == 1 || mabda == 6) {
					if (checkab(board, mabda, magsad))re 0;
				}
				if (mabda < 16 && mabda > 7) {
					if (checksb(board, mabda, magsad))re 0;
				}
				if (mabda == 2 || mabda == 5) {
					if (checkfb(board, mabda, magsad))re 0;
				}
				if (mabda == 3) {
					if (checkfb(board, mabda, magsad))re 0;
					if (checkrb(board, mabda, magsad))re 0;
				}
				if (mabda == 4) {
					if (checkkb(board, mabda, magsad))re 0;
				}
			}
			board[o] = i; // AGAR KISH SHODE BOD BAZ MEGDAR i RO DAKHELESH BEZAR
		}
	}
	re 1;
}
bool mat3b(int board[]) {
	int shah;
	for (int i = 0; i < 64; i++) // board[shah] == ADRES SHAH RO DARE
	{
		if (board[i] == 4)
		{
			shah = i;
			break;
		}
	}
	int o, p;
	for (int i = 48; i <= 64; i++)// board[o] == KHANE I KE BAES KISH SHODE
	{
		p = i;
		for (int j = 0; j < 64; j++)
		{
			if (board[j] == i)
			{
				o = j;
				break;
			}
		}
		board[o] = 16;
		if (!kishb(board))
		{
			board[o] = i;
			if (board[o] != 57 || board[o] != 62 && board[o] > 57)
			{              //abs == GADR MOTLAGE
				int temp = abs(o - shah);//NOE HARAKAT RO MIFAHME VA DAKHEL ON SHART MIRE
				if (temp % 9 == 0)
				{
					int t = min(o, shah);
					for (int k = 9; k < 64; k += 9) {
						int mabda, magsad;
						for (int i = 0; i < 64; i++)
						{
							if (board[i] == t+k)
							{
								magsad = i;
								break;
							}
						}
						for (int i = 48; i <= 64; i++)
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 56 || mabda == 63) {
								if (checkrw(board, mabda, magsad))re 0;
							}
							if (mabda == 57 || mabda == 62) {
								if (checkaw(board, mabda, magsad))re 0;
							}
							if (mabda < 56 && mabda>47) {
								if (checksw(board, mabda, magsad))re 0;
							}
							if (mabda == 58 || mabda == 61) {
								if (checkfw(board, mabda, magsad))re 0;
							}
							if (mabda == 59) {
								if (checkfw(board, mabda, magsad))re 0;
								if (checkrw(board, mabda, magsad))re 0;
							}
							if (mabda == 60) {
								if (checkkw(board, mabda, magsad))re 0 ;
							}
						}
					}

				}
				if (temp % 8 == 0)
				{
					int t = min(o, shah);
					for (int k = 8; k < 64; k += 8) {
						int mabda, magsad;
						for (int i = 0; i < 64; i++)
						{
							if (board[i] == t + k)
							{
								magsad = i;
								break;
							}
						}
						for (int i = 48; i <= 64; i++)
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 56 || mabda == 63) {
								if (checkrw(board, mabda, magsad))re 0;
							}
							if (mabda == 57 || mabda == 62) {
								if (checkaw(board, mabda, magsad))re 0;
							}
							if (mabda < 56 && mabda>47) {
								if (checksw(board, mabda, magsad))re 0;
							}
							if (mabda == 58 || mabda == 61) {
								if (checkfw(board, mabda, magsad))re 0;
							}
							if (mabda == 59) {
								if (checkfw(board, mabda, magsad))re 0;
								if (checkrw(board, mabda, magsad))re 0;
							}
							if (mabda == 60) {
								if (checkkw(board, mabda, magsad))re 0;
							}
						}
					}
				}
				if (temp % 7 == 0)
				{
					int t = min(o, shah);
					for (int k = 7; k < 64; k += 7) {
						int mabda, magsad;
						for (int i = 0; i < 64; i++)
						{
							if (board[i] == t + k)
							{
								magsad = i;
								break;
							}
						}
						for (int i = 48; i <= 64; i++)
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 56 || mabda == 63) {
								if (checkrw(board, mabda, magsad))re 0;
							}
							if (mabda == 57 || mabda == 62) {
								if (checkaw(board, mabda, magsad))re 0;
							}
							if (mabda < 56 && mabda>47) {
								if (checksw(board, mabda, magsad))re 0;
							}
							if (mabda == 58 || mabda == 61) {
								if (checkfw(board, mabda, magsad))re 0;
							}
							if (mabda == 59) {
								if (checkfw(board, mabda, magsad))re 0;
								if (checkrw(board, mabda, magsad))re 0;
							}
							if (mabda == 60) {
								if (checkkw(board, mabda, magsad))re 0;
							}
						}
					}
				}	
				if (temp % 1 == 0)
				{
					int t = min(o, shah);
					for (int k = 1; k < 64; k += 1) {
						int mabda, magsad;
						for (int i = 0; i < 64; i++)
						{
							if (board[i] == t + k)
							{
								magsad = i;
								break;
							}
						}
						for (int i = 48; i <= 64; i++)
						{
							for (int j = 0; j < 64; j++)
							{
								if (board[j] == i)
								{
									mabda = j;
									break;
								}
							}
							if (mabda == 56 || mabda == 63) {
								if (checkrw(board, mabda, magsad))re 0;
							}
							if (mabda == 57 || mabda == 62) {
								if (checkaw(board, mabda, magsad))re 0;
							}
							if (mabda < 56 && mabda>47) {
								if (checksw(board, mabda, magsad))re 0;
							}
							if (mabda == 58 || mabda == 61) {
								if (checkfw(board, mabda, magsad))re 0;
							}
							if (mabda == 59) {
								if (checkfw(board, mabda, magsad))re 0;
								if (checkrw(board, mabda, magsad))re 0;
							}
							if (mabda == 60) {
								if (checkkw(board, mabda, magsad))re 0;
							}
						}
					}
				}
			}
		}
		board[o] = i;
	}
	re 1;
}
bool mat3w(int board[]) {
	int shah;
	for (int i = 0; i < 64; i++) {
		if (board[i] == 60) {
			shah = i;
			break;
		}
	}
	int o, p;
	for (int i = 0; i < 16; i++) {
		p = i;
		for (int j = 0; j < 64; j++) {
			if (board[j] == i) {
				o = j;
				break;
			}
		}
		board[o] = 16;
		if (!kishb(board)) {
			board[o] = i;
			if (board[o] != 1 || board[o] != 6 && board[o] < 8) {
				int temp = abs(o - shah);
				if (temp % 9 == 0) {
					int t = min(o, shah);
					for (int k = 9; k < 64; k += 9) {
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) {
							if (board[i] == t + k) {
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) {
							for (int j = 0; j < 64; j++) {
								if (board[j] == i) {
									mabda = j;
									break;
								}
							}
							if (mabda == 0 || mabda == 7) {
								if (checkrw(board, mabda, maghsad))re 0;
							}
							if (mabda == 1 || mabda == 6) {
								if (checkaw(board, mabda, maghsad))re 0;
							}
							if (mabda == 2 || mabda == 5) {
								if (checkfw(board, mabda, maghsad))re 0;
							}
							if (mabda == 3) {
								if (checkfw(board, mabda, maghsad))re 0;
								if (checkrw(board, mabda, maghsad))re 0;
							}
							if (mabda == 4) {
								if (checkkw(board, mabda, maghsad))re 0;
							}
						}
					}
				}
				if (temp % 8 == 0) {
					int t = min(o, shah);
					for (int k = 8; k < 64; k += 8) {
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) {
							if (board[i] == t + k) {
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) {
							for (int j = 0; j < 64; j++) {
								if (board[j] == i) {
									mabda = j;
									break;
								}
							}
							if (mabda == 0 || mabda == 7) {
								if (checkrw(board, mabda, maghsad))re 0;
							}
							if (mabda == 1 || mabda == 6) {
								if (checkaw(board, mabda, maghsad))re 0;
							}
							if (mabda == 2 || mabda == 5) {
								if (checkfw(board, mabda, maghsad))re 0;
							}
							if (mabda == 3) {
								if (checkfw(board, mabda, maghsad))re 0;
								if (checkrw(board, mabda, maghsad))re 0;
							}
							if (mabda == 4) {
								if (checkkw(board, mabda, maghsad))re 0;
							}
						}
					}
				}
				if (temp % 7 == 0) {
					int t = min(o, shah);
					for (int k = 7; k < 64; k += 7) {
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) {
							if (board[i] == t + k) {
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) {
							for (int j = 0; j < 64; j++) {
								if (board[j] == i) {
									mabda = j;
									break;
								}
							}
							if (mabda == 0 || mabda == 7) {
								if (checkrw(board, mabda, maghsad))re 0;
							}
							if (mabda == 1 || mabda == 6) {
								if (checkaw(board, mabda, maghsad))re 0;
							}
							if (mabda == 2 || mabda == 5) {
								if (checkfw(board, mabda, maghsad))re 0;
							}
							if (mabda == 3) {
								if (checkfw(board, mabda, maghsad))re 0;
								if (checkrw(board, mabda, maghsad))re 0;
							}
							if (mabda == 4) {
								if (checkkw(board, mabda, maghsad))re 0;
							}
						}
					}
				}
				if (temp % 1 == 0) {
					int t = min(o, shah);
					for (int k = 1; k < 64; k += 1) {
						int mabda, maghsad;
						for (int i = 0; i < 64; i++) {
							if (board[i] == t + k) {
								maghsad = i;
								break;
							}
						}
						for (int i = 48; i < 64; i++) {
							for (int j = 0; j < 64; j++) {
								if (board[j] == i) {
									mabda = j;
									break;
								}
							}
							if (mabda == 0 || mabda == 7) {
								if (checkrw(board, mabda, maghsad))re 0;
							}
							if (mabda == 1 || mabda == 6) {
								if (checkaw(board, mabda, maghsad))re 0;
							}
							if (mabda == 2 || mabda == 5) {
								if (checkfw(board, mabda, maghsad))re 0;
							}
							if (mabda == 3) {
								if (checkfw(board, mabda, maghsad))re 0;
								if (checkrw(board, mabda, maghsad))re 0;
							}
							if (mabda == 4) {
								if (checkkw(board, mabda, maghsad))re 0;
							}
						}
					}
				}
			}
		}
		board[o] = i;
	}
	re 1;
}
int main()
{
	int k = 3;
	int rang = k;
	SetConsoleTextAttribute(o, k);
	while (1) {
		k = rang;
		SetConsoleTextAttribute(o, k);
		cout << "1 new game\n";
		cout << "2 load game\n";
		cout << "3 setting\n";
		cout << "4 exit\n";
		int dastor;
		cin >> dastor;
		if (dastor == 1) {
			int k = 15;
			SetConsoleTextAttribute(o, k);
			int a[64];
			bool turn = 1;
			for (int i = 0; i < 64; i++)a[i] = i;
			print(a);
			while (1)
			{
				bool check = 0;
				string s;
				cin >> s;
				if (s == "save") {
					cout << "saved\n";
					ofstream file("savebazi.txt");
					if (!file) {
						cout << "ERROR            FILE BAZ NASHODE AST\n ";
					}
					else {
						for (int i = 0; i < 64; i++) {
							file << a[i] << endl;
						}
						file << turn << endl;
						file << rang << endl;
					}
					break;
				}
				else {
					int i = 0, j = 0;
					i = ((s[0] - 97) * 8) + ((s[1] - 48) - 1);
					j = ((s[4] - 97) * 8) + ((s[5] - 48) - 1);
					if (a[i] < 16)
					{
						if (turn == 1) // OR turn
						{
							if (!kishb(a))  //if (kishb(a) == 0)
							{
								if (a[i] == 1 || a[i] == 6)
								{
									if (checkab(a, i, j))check = 1;
								}
								if (a[i] < 16 && a[i]>7)
								{
									if (checksb(a, i, j))check = 1;
								}
								if (a[i] == 0 || a[i] == 7)
								{
									if (checkrb(a, i, j))check = 1;
								}
								if (a[i] == 2 || a[i] == 5)
								{
									if (checkfb(a, i, j))check = 1;
								}
								if (a[i] == 3)
								{
									if (checkfb(a, i, j))check = 1;
									if (checkrb(a, i, j))check = 1;
								}
								if (a[i] == 4) {
									if (checkkb(a, i, j))check = 1;
								}
								if (check == 1)
								{
									turn = !turn;
									int temp = a[i];
									a[i] = a[j];
									a[j] = temp;
									if (a[i] < 16 || a[i]>47)a[i] = 16;
									system("cls");
									print(a);
								}
								else
								{
									cout << "ERROR            MAGSAD MORED GABOL NIST\n ";
								}
							}
							else
								if (mat1b(a) && mat2b(a) && mat3b(a))
								{
									cout << "KISH VA MAT\n";
									break;
								}
								else
								{
									cout << "KISH ETEFAG OFTADE\n";
									if (a[i] == 1 || a[i] == 6)
									{
										if (checkab(a, i, j))check = 1;
									}
									if (a[i] < 16 && a[i]>7)
									{
										if (checksb(a, i, j))check = 1;
									}
									if (a[i] == 0 || a[i] == 7)
									{
										if (checkrb(a, i, j))check = 1;
									}
									if (a[i] == 2 || a[i] == 5)
									{
										if (checkfb(a, i, j))check = 1;
									}
									if (a[i] == 3)
									{
										if (checkfb(a, i, j))check = 1;
										if (checkrb(a, i, j))check = 1;
									}
									if (a[i] == 4) {
										if (checkkb(a, i, j))check = 1;
									}
									if (check == 1)
									{
										int temp = a[i];
										a[i] = a[j];
										a[j] = temp;
										int temp2 = a[i];
										if (a[i] < 16 || a[i]>47)a[i] = 16;
										if (!kishb(a)) {
											turn = !turn;
											system("cls");
											print(a);
										}
										else {
											cout << "ERROR            DASTOR MORED NAZAR KISH RA KHAREJ NEMIKONAD\n";
											int temp = a[i];
											a[i] = a[j];
											a[j] = temp;
											a[i] = temp2;
										}
									}
									else
									{
										cout << "ERROR            MAGSAD MORED GABOL NIST\n ";
									}
								}
						}
						else
						{
							cout << "ERROR            NOBAT SEFID AST\n ";
						}
					}
					else if (a[i] > 47)
					{
						if (!turn) // OR turn == 0
						{
							if (!kishw(a)) // == kish(a)==0
							{
								if (a[i] == 56 || a[i] == 63) {
									if (checkrw(a, i, j))check = 1;
								}
								if (a[i] == 57 || a[i] == 62) {
									if (checkaw(a, i, j))check = 1;
								}
								if (a[i] < 56 && a[i]>47) {
									if (checksw(a, i, j))check = 1;
								}
								if (a[i] == 58 || a[i] == 61) {
									if (checkfw(a, i, j))check = 1;
								}
								if (a[i] == 59) {
									if (checkfw(a, i, j))check = 1;
									if (checkrw(a, i, j))check = 1;
								}
								if (a[i] == 60) {
									if (checkkw(a, i, j))check = 1;
								}
								if (check)
								{
									turn = !turn;
									int temp = a[i];
									a[i] = a[j];
									a[j] = temp;
									if (a[i] < 16 || a[i]>47)a[i] = 16;
									if (!kishw(a)) {
										turn = !turn;
										system("cls");
										print(a);
									}
									else {
										cout << "ERROR            DASTOR MORED NAZAR KISH RA KHAREJ NEMIKONAD\n ";
										int temp2 = a[i];
										a[i] = a[j];
										a[j] = temp;
										a[j] = temp2;
									}
								}
								else
								{
									cout << "ERROR            MAGSAD MORED GABOL NIST\n ";
								}
							}
						}
						else
						{
							cout << "ERROR            NOBAT SIAH AST\n ";
						}
					}
					else
					{
						cout << "ERROR            MABDA MORED GABOL NIST\n ";
					}
				}
			}
		}
		if (dastor == 2) {
			k = 15;
			SetConsoleTextAttribute(o, k);
			bool turn;
			int a[64];
			ifstream file("savebazi.txt");
			if (!file) {
				cout << "ERROR            FILE BAZ NASHODE AST\n ";
			}
			else {
				int l;
				for (int i = 0; i < 64; i++) {
					file >> l;
					a[i] = l;
				}
				file >> l;
				turn = l;
				file >> l;
				rang = l;
				print(a);
				while (1)
				{
					bool check = 0;
					string s;
					cin >> s;
					if (s == "save") {
						cout << "saved\n";
						ofstream file("savebazi.txt");
						if (!file) {
							cout << "ERROR            FILE BAZ NASHODE AST\n ";
						}
						else {
							for (int i = 0; i < 64; i++) {
								file << a[i] << endl;
							}
							file << turn << endl;
							file << rang << endl;
						}
						break;
					}
					else {
						int i = 0, j = 0;
						i = ((s[0] - 97) * 8) + ((s[1] - 48) - 1);
						j = ((s[4] - 97) * 8) + ((s[5] - 48) - 1);
						if (a[i] < 16)
						{
							if (turn == 1) // OR turn
							{
								if (!kishb(a))  //if (kishb(a) == 0)
								{
									if (a[i] == 1 || a[i] == 6)
									{
										if (checkab(a, i, j))check = 1;
									}
									if (a[i] < 16 && a[i]>7)
									{
										if (checksb(a, i, j))check = 1;
									}
									if (a[i] == 0 || a[i] == 7)
									{
										if (checkrb(a, i, j))check = 1;
									}
									if (a[i] == 2 || a[i] == 5)
									{
										if (checkfb(a, i, j))check = 1;
									}
									if (a[i] == 3)
									{
										if (checkfb(a, i, j))check = 1;
										if (checkrb(a, i, j))check = 1;
									}
									if (a[i] == 4) {
										if (checkkb(a, i, j))check = 1;
									}
									if (check == 1)
									{
										turn = !turn;
										int temp = a[i];
										a[i] = a[j];
										a[j] = temp;
										if (a[i] < 16 || a[i]>47)a[i] = 16;
										system("cls");
										print(a);
									}
									else
									{
										cout << "ERROR            MAGSAD MORED GABOL NIST\n ";
									}
								}
								else
									if (mat1b(a) && mat2b(a) && mat3b(a))
									{
										cout << "KISH VA MAT\n";
										break;
									}
									else
									{
										cout << "KISH ETEFAG OFTADE\n";
										if (a[i] == 1 || a[i] == 6)
										{
											if (checkab(a, i, j))check = 1;
										}
										if (a[i] < 16 && a[i]>7)
										{
											if (checksb(a, i, j))check = 1;
										}
										if (a[i] == 0 || a[i] == 7)
										{
											if (checkrb(a, i, j))check = 1;
										}
										if (a[i] == 2 || a[i] == 5)
										{
											if (checkfb(a, i, j))check = 1;
										}
										if (a[i] == 3)
										{
											if (checkfb(a, i, j))check = 1;
											if (checkrb(a, i, j))check = 1;
										}
										if (a[i] == 4) {
											if (checkkb(a, i, j))check = 1;
										}
										if (check == 1)
										{
											int temp = a[i];
											a[i] = a[j];
											a[j] = temp;
											int temp2 = a[i];
											if (a[i] < 16 || a[i]>47)a[i] = 16;
											if (!kishb(a)) {
												turn = !turn;
												system("cls");
												print(a);
											}
											else {
												cout << "ERROR            DASTOR MORED NAZAR KISH RA KHAREJ NEMIKONAD\n";
												int temp = a[i];
												a[i] = a[j];
												a[j] = temp;
												a[i] = temp2;
											}
										}
										else
										{
											cout << "ERROR            MAGSAD MORED GABOL NIST\n ";
										}
									}
							}
							else
							{
								cout << "ERROR            NOBAT SEFID AST\n ";
							}
						}
						else if (a[i] > 47)
						{
							if (!turn) // OR turn == 0
							{
								if (!kishw(a)) // == kish(a)==0
								{
									if (a[i] == 56 || a[i] == 63) {
										if (checkrw(a, i, j))check = 1;
									}
									if (a[i] == 57 || a[i] == 62) {
										if (checkaw(a, i, j))check = 1;
									}
									if (a[i] < 56 && a[i]>47) {
										if (checksw(a, i, j))check = 1;
									}
									if (a[i] == 58 || a[i] == 61) {
										if (checkfw(a, i, j))check = 1;
									}
									if (a[i] == 59) {
										if (checkfw(a, i, j))check = 1;
										if (checkrw(a, i, j))check = 1;
									}
									if (a[i] == 60) {
										if (checkkw(a, i, j))check = 1;
									}
									if (check)
									{
										turn = !turn;
										int temp = a[i];
										a[i] = a[j];
										a[j] = temp;
										if (a[i] < 16 || a[i]>47)a[i] = 16;
										if (!kishw(a)) {
											turn = !turn;
											system("cls");
											print(a);
										}
										else {
											cout << "ERROR            DASTOR MORED NAZAR KISH RA KHAREJ NEMIKONAD\n ";
											int temp2 = a[i];
											a[i] = a[j];
											a[j] = temp;
											a[j] = temp2;
										}
									}
									else
									{
										cout << "ERROR            MAGSAD MORED GABOL NIST\n ";
									}
								}
							}
							else
							{
								cout << "ERROR            NOBAT SIAH AST\n ";
							}
						}
						else
						{
							cout << "ERROR            MABDA MORED GABOL NIST\n ";
						}
					}
				}
			}
		}
		if (dastor == 3) {
			cout << "rang ra entekhab konid\n";
			cout << "1 ghermez\n";
			cout << "2 abi\n";
			cout << "3 sabz\n";
			cout << "4 zard\n";
			int p;
			cin >> p;
			if (p == 1) {
				int k = 4;
				rang = k;
				SetConsoleTextAttribute(o, k);
			}
			if (p == 2) {
				int k = 9;
				rang = k;
				SetConsoleTextAttribute(o, k);
			}
			if (p == 3) {
				int k = 2;
				rang = k;
				SetConsoleTextAttribute(o, k);
			}
			if (p == 4) {
				int k = 14;
				rang = k;
				SetConsoleTextAttribute(o, k);
			}
		}
		if (dastor == 4) {
			break;
		}
	}
}

/*
int mabda, maghsad;
			for (int i = 0; i < 64; i++)
			{
				if (board[i] == p)
				{
					maghsad = i;
					break;
				}
			}
			for (int i = 48; i < 64; i++)
			{
				for (int j = 0; j < 64; j++)
				{
					if (board[j] == i)
						mabda = j;
				}
			}
*/
