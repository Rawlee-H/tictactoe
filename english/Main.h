#ifndef __MAIN_H___
#define __MAIN_H___

#include <windows.h>

struct Table {
	bool used;
	int player;
}slots[9];

int last_turn = 1;

void GameInit();
void UpdateTable();
int DetectWinner();

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

#endif