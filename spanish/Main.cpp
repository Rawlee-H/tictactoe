// --------------------- //
//  TicTacToe by Rawlee  //
//  -------------------  //

#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>

#include "Main.h"
#include "Functions.h"

using namespace std;

int main()
{
	GameInit();

	select_slot:

	UpdateTable();

	switch(DetectWinner()) {
		case 1: {
			system("cls");

			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "\t\t\t\t\t\tTicTacToe by Rawlee" << endl;
			cout << "\t\t\t\t\t       ---------------------" << endl << endl;

			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "\t\t\t\t\t         Ganador jugador 1!" << endl;

			Sleep(3000);
			exit(1);
			break;
		}
		case 2: {
			system("cls");

			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "\t\t\t\t\t\tTicTacToe by Rawlee" << endl;
			cout << "\t\t\t\t\t       ---------------------" << endl << endl;

			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "\t\t\t\t\t         Ganador jugador 2!" << endl;

			Sleep(3000);
			exit(1);
			break;
		}
		case -1: {
			system("cls");

			SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "\t\t\t\t\t\tTicTacToe by Rawlee" << endl;
			cout << "\t\t\t\t\t       ---------------------" << endl << endl;

			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "\t\t\t\t\t          Nadie ha ganado" << endl;

			Sleep(3000);
			exit(1);
			break;
		}
	}

	char character = getch();
	int v_char = (int)getch();

	switch(v_char) {
		case 49 ... 57: {
			if(slots[v_char - 49].used != 1) {
				slots[v_char - 49].used = 1;
				slots[v_char - 49].player = (((last_turn == 0) ? 1 : 0) + 1);
				last_turn = !last_turn;
				goto select_slot;
			}
			goto select_slot;
			break;
		}
		default: goto select_slot; break;
	}

	cin.get();
	return 0;
}
