#pragma once

//Preprocessor Directives
#include <iostream>

//This class should run all of the game mechanisms...

class Board {
	public:
		int StartGame(int mode); //Function to start the game
		int Failsafe(int inprogress, int board[], int p1bank, int p2bank); //Checks if game is okay by running failsafes
		void TakeTurn(int player, int board[]); //Iterates through a turn
		int DecideWinner(); //Decides on a winner and works in StartGame to check if the game is over
	private:
		int cells[12];
		int bank1, bank2;
		int stones;
};