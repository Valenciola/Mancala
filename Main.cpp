//Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Headers
#include "Board.h"
#include "Safety.h"
#include "Experience.h"

int main() {
	int player = 1;
	Board mancala;
	mancala.DisplayTable();
	mancala.TakeTurn(player, mancala.cells, 1);
	mancala.DisplayTable();

	player = 2;
	cout << endl;
	mancala.DisplayTable();
	mancala.TakeTurn(player, mancala.cells, 1);
	mancala.DisplayTable();
	return 0;
}