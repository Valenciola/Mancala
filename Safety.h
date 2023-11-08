//Class definition for Sir Safety, a.k.a my failsafe and error checker that'll hopefully shut me down when I try to make illegal moves

//Preprocessor Directives
#include <iostream>
#include <cstdlib>
using namespace std;

//Hopefully as I keep going this thing will write itself

#ifndef SAFETY_H
#define SAFETY_H
class SirSafety {
	public:
		bool NumStones(int board[], int stonecount); //Checks that there are 48 stones in the game AT ALL TIMES
		bool LegalMove(int cell, int player); //Checks that an illegal move does not get run
	private:
};
#endif