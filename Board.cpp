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

}
Board::Board(int stones) {

}
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