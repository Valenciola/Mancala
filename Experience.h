#pragma once

#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

#include "Board.h"
#include "Safety.h"
#include "Experience.h"

//Write menu functions
void Experience::DisplayTable(int fills[], int firstbank, int secondbank) {
	//Displays the board
	cout << "Player 1's bank contains " << firstbank << "stone(s)." << endl;
	cout << "Player 2's bank contains " << secondbank << "stone(s)." << endl;
	for (int i = 0; i < 12; i++) {
		cout << "Hole " << i << " has " << fills[i] << " stones(s) in it." << endl;
	}
	return;
}
void Experience::OperateMenu() {
	//Displays the starting menu
	return;
}