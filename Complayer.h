//Preprocessor Directives
#include <iostream>

//This class defines the computer objects of the game; this is the logical computation player (or just the complayer)

#ifndef COMPLAYER_H
#define COMPLAYER_H
class Computer {
public:
	int FindBestMove(int board[], int firstbank, int secondbank); //Finds and returns the best move
private:
};
#endif