#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include <iostream>
#include "Main.h"

using namespace std;

int DetectWinner()
{
	if(slots[0].player == 1 && slots[3].player == 1 && slots[6].player == 1 || slots[0].player == 1 && slots[1].player == 1 && slots[2].player == 1 || slots[6].player == 1 && slots[7].player == 1 && slots[8].player == 1 || slots[8].player == 1 && slots[5].player == 1 && slots[2].player == 1 || slots[6].player == 1 && slots[4].player == 1 && slots[2].player == 1 || slots[8].player == 1 && slots[4].player == 1 && slots[0].player == 1 || slots[0].player == 1 && slots[4].player == 1 && slots[8].player == 1 || slots[2].player == 1 && slots[4].player == 1 && slots[6].player == 1 || slots[1].player == 1 && slots[4].player == 1 && slots[7].player == 1 || slots[3].player == 1 && slots[4].player == 1 && slots[5].player == 1) {
		return 1;
	}
	else if(slots[0].player == 2 && slots[3].player == 2 && slots[6].player == 2 || slots[0].player == 2 && slots[1].player == 2 && slots[2].player == 2 || slots[6].player == 2 && slots[7].player == 2 && slots[8].player == 2 || slots[8].player == 2 && slots[5].player == 2 && slots[2].player == 2 || slots[6].player == 2 && slots[4].player == 2 && slots[2].player == 2 || slots[8].player == 2 && slots[4].player == 2 && slots[0].player == 2 || slots[0].player == 2 && slots[4].player == 2 && slots[8].player == 2 || slots[2].player == 2 && slots[4].player == 2 && slots[6].player == 2 || slots[1].player == 2 && slots[4].player == 2 && slots[7].player == 2 || slots[3].player == 2 && slots[4].player == 2 && slots[5].player == 2) {
		return 2;
	}
	else 
	{
		for(int x = 0, count = 0; x < 9; x++) {
			if(slots[x].used == 1) {
				count++;
				if(count > 8)
					return -1;
			}
		}
	}
	return 0;
}

void GameInit()
{
	memset(slots, 0, sizeof(slots));

	for(int x = 0; x < 9; x++) {
		slots[x].player = 3;
	}
}

void UpdateTable()
{
	system("cls");

	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "\t\t\t\t\t\tTicTacToe by Rawlee" << endl;
	cout << "\t\t\t\t\t       ---------------------" << endl << endl;

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "\t\t\t\t\t    |   " << ((slots[6].player == 1) ? "X" : ((slots[6].player == 2) ? "O" : "-")) << "   |   " << ((slots[7].player == 1) ? "X" : ((slots[7].player == 2) ? "O" : "-")) << "    |   " << ((slots[8].player == 1) ? "X" : ((slots[8].player == 2) ? "O" : "-")) << "   |" << endl;
	cout << "\t\t\t\t\t    |   " << ((slots[3].player == 1) ? "X" : ((slots[3].player == 2) ? "O" : "-")) << "   |   " << ((slots[4].player == 1) ? "X" : ((slots[4].player == 2) ? "O" : "-")) << "    |   " << ((slots[5].player == 1) ? "X" : ((slots[5].player == 2) ? "O" : "-")) << "   |" << endl;
	cout << "\t\t\t\t\t    |   " << ((slots[0].player == 1) ? "X" : ((slots[0].player == 2) ? "O" : "-")) << "   |   " << ((slots[1].player == 1) ? "X" : ((slots[1].player == 2) ? "O" : "-")) << "    |   " << ((slots[2].player == 1) ? "X" : ((slots[2].player == 2) ? "O" : "-")) << "   |" << endl << endl;

	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	cout << "\t\t\t\t\t         Player's turn " << ((last_turn == 1) ? "1" : "2") << endl << endl;

	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);

	cout << "\t\t\t\t\t             Controls           " << endl;
	cout << "\t\t\t\t\t  NUMPAD7  |  NUMPAD8  |  NUMPAD9" << endl;
	cout << "\t\t\t\t\t  NUMPAD4  |  NUMPAD5  |  NUMPAD6" << endl;
	cout << "\t\t\t\t\t  NUMPAD1  |  NUMPAD2  |  NUMPAD3" << endl;
}

#endif