//Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Headers
#include "Board.h"
#include "Safety.h"

//Write Board Class Functions

Board::Board() {
	stones = 48;
	bank1 = 0;
	bank2 = 0;
	for (int i = 0; i < 12; i++) {
		cells[i] = 4;
	}
	return;
}
Board::Board(int stonecount, int onebank, int twobank) {
	int distribute;
	if (stonecount % 12 != 0) {
		cout << "Invalid stone count. Aborting program...";
		exit(1);
	}
	else {
		distribute = stonecount / 12;
	}
	stones = stonecount;
	bank1 = onebank;
	bank2 = twobank;
	for (int i = 0; i < 12; i++) {
		cells[i] = distribute;
	}
	return;
}

/*
int Board::StartGame(int mode) {
	//Function to start the game
}
int Board::Failsafe(int inprogress, int board[], int p1bank, int p2bank) {
	//Checks if game is okay by running failsafes
}
void Board::TakeTurn(int player, int board[]) {
	//Iterates through a turn
}
int Board::DecideWinner() {
	//Decides on a winner and works in StartGame to check if the game is over
}
*/

void Board::DisplayTable() {
	//Displays the board
	cout << "Player 1's bank contains " << bank1 << "stone(s)." << endl;
	cout << "Player 2's bank contains " << bank2 << "stone(s)." << endl;
	for (int i = 0; i < 12; i++) {
		cout << "Hole " << i << " has " << cells[i] << " stones(s) in it." << endl;
	}
	return;
}