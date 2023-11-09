//Preprocessor Directives
#include <iostream>

//This class should run all of the game mechanisms...

#ifndef BOARD_H
#define BOARD_H
class Board {
	public:
		Board();
		Board(int stonecount, int onebank, int twobank);
		int StartGame(int mode); //Function to start the game
		int Failsafe(int inprogress, int board[], int p1bank, int p2bank); //Checks if game is okay by running failsafes
		int TakeTurn(int player, int board[], int mode); //Iterates through a turn
		int DecideWinner(); //Decides on a winner and works in StartGame to check if the game is over
		void DisplayTable(); //Displays stuff

		int cells[12];
	private:
		int bank1, bank2;
		int stones;
};
#endif