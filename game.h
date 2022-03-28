#pragma once

#ifndef GAME_H
#define GAME_H

class game
{
private:
	int player;
	int box;
	

public:
	game();
	char square[9];
	void display(char square[9]);
	int checkwin(char square[9]);
	void mark(int player, int box, char square[9]);

};

#endif // !GAME_H



