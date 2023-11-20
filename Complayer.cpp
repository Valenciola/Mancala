//Implementation file for the complayer

#include <iostream>
using namespace std;

#include "Complayer.h"

int Computer::FindBestMove(int board[], int secondbank) {
	//Finds and returns the best move
	int move, stones, bankadd = 0, spot, code;
	int outcomes[6], fakeboard[12];

	for (int i = 0; i < 6; i++) {
		if (board[i + 6] == 0) {
			cout << "There's nothing in hole " << i + 1 << ". Moving on!" << endl;
		}
		else {
			cout << "There's something in hole " << i + 1 << ". I'm gonna check it out." << endl;

			for (int j = 0; j < 12; j++) {
				//Board reset
				fakeboard[i] = board[i];
			}

			stones = fakeboard[i];
			spot = i + 6;
			fakeboard[i] = 0;

			while (stones != 0) {
				if (spot == 12) {
					bankadd++;
					stones--;
					spot = 0;
				}
				else if (spot == 6) {
					spot = 7;
				}
				else {
					fakeboard[spot]++;
					stones--;
					spot++;
				}
			}

			outcomes[i] = bankadd;
			move = 0;
			for (int g = 0; g < 6; g++) {
				if (outcomes[g] > move) {
					move = outcomes[g];
				}
				else {
					//Do nothing.
				}
			}
		}
	}

	return move;
}