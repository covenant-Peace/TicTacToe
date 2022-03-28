#include <iostream>
#include "game.h"

using namespace std;


int main()
{
	int player1 = 1, player2 = 2;

	int boxo, flag = 0;
	char square1[9] = { '0','1','2','3','4','5','6','7','8' };

	game peace;

	for (int i = 1; i < 5; i++)
	{

		cout << "\n Player " << player1 << " Enter the Box\n";
		cin >> boxo;

		peace.mark(player1, boxo, square1);
		peace.display(square1);

		int result = peace.checkwin(square1);
		if (result == 1)
		{
			cout << "\n Congratualtions! player " << player1 << " has Won ";
			flag = 1;
			break;
		}
		else if (result == 2)
			{
				cout << "\n Congratualtions! player " << player2 << " has Won ";
				flag = 1;
				break;
			}

		cout << "\n Player " << player2 << "Enter the Box\n";
		cin >> boxo;
		peace.mark(player2, boxo, square1);
		peace.display(square1);

		int result2 = peace.checkwin(square1);
		if (result == 1)
		{
			cout << "\n Congratualtions! player " << player1 << " has Won ";
			flag = 1;
			break;
		}
		else if (result == 2)
			{
				cout << "\n Congratualtions! player " << player2 << " has Won ";
				flag = 1;
				break;
			}
	}
	if (flag == 0)
		cout << " \n Sorry, The game is a draw ";

	return 0;
}


