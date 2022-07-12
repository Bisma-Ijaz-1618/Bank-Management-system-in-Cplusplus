#include<iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <cstdio>
#include "DigiBank.h"
using namespace std;

int main()
{

	for (int i = 0; i <= 10; i++)
	{
		cout << "\n\n\n\n\t\t\t\t\t       \x1b\033[3;47;35mWELCOME TO DIGiBANK \033[0m\033[0m\n";
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t|===============|";
		cout << "\n\t\t\t\t\t\t|   LOADING.    |";
		cout << "\n\t\t\t\t\t\t|===============|";
		system("cls");
		cout << "\n\n\n\n\t\t\t\t\t       \x1b\033[3;47;35mWELCOME TO DIGiBANK \033[0m\033[0m\n";
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t|===============|";
		cout << "\n\t\t\t\t\t\t|   LOADING..   |";
		cout << "\n\t\t\t\t\t\t|===============|";
		system("cls");
		cout << "\n\n\n\n\t\t\t\t\t       \x1b\033[3;47;35mWELCOME TO DIGiBANK \033[0m\033[0m\n";
		cout << "\n\n\n\n\n\n\t\t\t\t\t\t|===============|";
		cout << "\n\t\t\t\t\t\t|   LOADING...  |";
		cout << "\n\t\t\t\t\t\t|===============|";
		system("cls");
	}
	cout << "\n\n\n\n\t\t\t\t\t       \x1b\033[3;47;35mWELCOME TO DIGiBANK \033[0m\033[0m\n";
	cout << "\n\n\n\n\n\n\t\t\t\t\t\t|==============|";
	cout << "\n\t\t\t\t\t\t|  Completed   |";
	cout << "\n\t\t\t\t\t\t|==============|";
	cout << "\n\n\n\n\t\t\t\t\t ";
	system("pause");
	system("cls");
	BANK ATM;
	ATM.Mainmenu();
	return 0;
}