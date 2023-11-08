#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

#include "Board.h"
#include "Safety.h"

#ifndef EXPERIENCE_H
#define EXPERIENCE_H
class Experience: public Board {
	public:
		void DisplayTable(int fills[], int firstbank, int secondbank); //Displays the board
		void OperateMenu(); //Displays the starting menu
	private:
};
#endif