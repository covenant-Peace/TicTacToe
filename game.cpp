#include "game.h"
#include <iostream>

using namespace std;

game::game()
{
	int player = 0;
	int box = 0;
	
}


int game::checkwin(char square[9])
{
	if (square[0] == square[1] && square[1] == square[2])
	{
		if (square[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[3] == square[4] && square[4] == square[5])
	{
		if (square[3] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[6] == square[7] && square[7] == square[8])
	{
		if (square[6] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[0] == square[3] && square[3] == square[6])
	{
		if (square[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[1] == square[4] && square[4] == square[7])
	{
		if (square[1] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[2] == square[5] && square[5] == square[8])
	{
		if (square[2] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[0] == square[4] && square[4] == square[8])
	{
		if (square[0] == 'X')
			return 1;
		else
			return 2;
	}
	else if (square[2] == square[4] && square[4] == square[6])
	{
		if (square[2] == 'X')
			return 1;
		else
			return 2;
	}

	else
		return 0;
}

void game::mark(int player, int box, char square[9])
{
	if (player == 1)
	{
		while (square[box] != 'X' && square[box] != 'Y') {
			square[box] = 'X';
		}
	}
	else
	{
		while (square[box] != 'X' && square[box] != 'Y') {
			square[box] = 'Y';
		}
	}
}

void game :: display(char square[9])
{

	for (int i = 0; i < 9; i++)
	{
		cout << square[i] << "\t";
		if (i == 2 || i == 5 || i == 8)
			cout << "\n";
	}
}
