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
*/

int Board::TakeTurn(int player, int board[], int mode) {
	//Iterates through a turn, returns 1 for an extra turn and 0 for regular progression
	int choice, stones, position;

	//Checking for correct stone input
	if (mode == 1) {
		cout << "It's player " << player << "'s turn! Pick the hole you want to take stones from.: ";
		cin >> choice;
		if (!(choice < 7 && choice > 0)) {
			do {
				cout << "Invalid choice. Please enter a valid hole number (1-6): ";
				cin >> choice;
			} while (!(choice < 7 && choice > 0));
		}
		if (board[choice - 1] == 0) {
			do {
				cout << "This hole is empty! Pick a hole that has at least one stone in it.: ";
				cin >> choice;
			} while (board[choice - 1] == 0);
		}

		//Iteration
		position = choice - 1;
		stones = board[position];
		board[position] = 0;
		position++;
		cout << "\n\nWe picked up " << stones << " stone(s)." << endl;
		while (stones != 0) {
			if (position == 6 && player == 1) {
				//Player 1 bank
				bank1 = bank1++;
				stones--;
				position = 6;
			}
			else if (position == 6 && player == 2) {
				//Passing player 1 bank
				position = 6;
			}
			else if (position == 12 && player == 2) {
				//Player 2 bank
				bank2 = bank2++;
				stones--;
				position = 0;
			}
			else if (position == 12 && player == 1) {
				//Passing player 2 bank
				position = 0;
			}
			else {
				board[position]++;
				stones--;
				position++;
			}
			cout << "Stone count is now " << stones << "." << endl;
		}
		return 0;
	}
	else {
		cout << "It's the computer's turn but there is no computer yet.";
		exit(1);
	}
}

/*
int Board::DecideWinner() {
	//Decides on a winner and works in StartGame to check if the game is over
}
*/

void Board::DisplayTable() {
	//Displays the board
	cout << "Player 1's bank contains " << bank1 << " stone(s)." << endl;
	cout << "Player 2's bank contains " << bank2 << " stone(s)." << endl;
	for (int i = 0; i < 12; i++) {
		cout << "Hole " << i + 1 << " has " << cells[i] << " stones(s) in it." << endl;
	}
	return;
}