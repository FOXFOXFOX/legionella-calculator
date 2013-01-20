/*
 *  Lp02.cpp
 *  LegioCalc
 *
 *  Created by Kaitlin Flynn on 12/27/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "Lp02.h"

//stuff taken from connect 4 menu print.cpp
#include <iostream>
#include <string>
using namespace std; 	



// EFFECTS;  prints the menu choices
void printMenu()  {
	cout << endl << endl << "Welcome to LegioCalc! Wrangling your Lp cultures since 2012." << endl
	<< "Choose an option to begin:" << endl
	<<"   1) Calculate Lp02 cultures " << endl
	<<"   2) Calculate JR32 cultures" << endl
	<<"   3) Quit" << endl
	<<">> " ;
}


// EFFECTS:  Gets and returns a valid user choice for the menu
Selection getMenuChoice()  {
	Selection choice;
	int tempChoice;
	
	cin >> tempChoice;
	choice = (Selection) tempChoice;  // cast to type "Selection"
	
	while( ! (cin.good() && choice >= CALC_LP && choice <= QUIT)) {
		if(cin.fail()) {
			cin.clear();
			string junk;
			getline(cin, junk);
        }
        printErrorMessage(OUT_OF_MENU_RANGE);
		
        cout << "Please try again: ";
        cin >> tempChoice;
        choice = (Selection) tempChoice;
	}
	return choice;
}

// REQUIRES:  code is an integer governing which message gets printed
// EFFECTS:  prints the error messages for Connect4
void printErrorMessage(ErrorCode code)  {
	switch (code) {
		case OUT_OF_MENU_RANGE:   cout <<" *** Error Values 1-3 only " << endl << endl ; 
			break;
		case OUT_OF_COLUMN_RANGE: cout << " *** Error Values 1-7 only"  << endl ; 
			break;
		case COLUMN_FILLED:       cout << " *** ERROR - That column is already filled!" << endl;
			break;
		default: cout<< " *** NO ERROR BY THIS NUMBER" << endl << endl;
	}
}

// REQUIRES:  board holds the connect4 moves
// EFFECTS:  Prints the board
// NOTE:    
//     prints the board such that board[0][0] is the lower left hand corner
//     of the printed board.  This way the tokens "drop down"
void printBoard(const char board[8][7]) 
{
	cout << endl;
	for (int i = 8-1; i >= 0; i--)  {
		cout << "     +---+---+---+---+---+---+---+" << endl
		<< "    ";
		
		
		cout << " |" << endl;
    }
    cout << "     +---+---+---+---+---+---+---+" << endl;
    return;
}   



Lp::Lp(){
	setCurrentOD(0);
	setDesiredOD(0);
	setTemp(0);
	setDesiredVol(0);
}

//Effects: constructor taking values
Lp::Lp(double currOD, double desiOD, double currTemp, double dVol, double nVol){
	setCurrentOD(currOD);
	setDesiredOD(desiOD);
	setTemp(currTemp);
	setDesiredVol(dVol);
}

//Effects: sets current OD
void Lp::setCurrentOD(double currOD){
	currentOD = Lp::checkODRange(currOD);
}

//Effects: sets desired OD
void Lp::setDesiredOD(double desiOD){
	desiredOD = Lp::checkODRange(desiOD);
}

//Effects: sets temp
void Lp::setTemp(double currTemp){
	temp = Lp::checkTempRange(currTemp);
}

//Effects: sets desired volume 
void Lp::setDesiredVol(double dVol){
	desiredVol = Lp::checkVolRange(dVol);
}

//EFFECTS: Get and return valid current OD 
double Lp::getCurrentOD() const{ 
	return currentOD;
}

//EFFECTS: Get and return valid desired OD
double Lp::getDesiredOD() const{
	return desiredOD;
}

//EFFECTS: Get and return valid temp, assumes normal is 37
double Lp::getTemp() const{
	return temp;
}

//EFFECTS: Get and return valid desired vol. should i put this all into a class? probs. 
double Lp::getDesiredVolume() const{
	return desiredVol;
}

//EFFECTS: calculates missing values and returns info for user. work in error codes. convert to mics
//separate into two fxns
double Lp::returnParameter() {
	if(currentOD, desiredOD, temp, desiredVol){
		double volume;
		volume = (desiredOD * desiredVol)/currentOD;
		volNeeded = Lp::checkVolRange(volume);
}

//EFFECTS: prints a table of the current values so user can see what is input. 
void Lp::printValues(double current, double desired, double temp, double volume){
}

//Effects: checks OD range to conform to standards
double Lp::checkODRange(double OD){
}

//Effects: checks temp range
double Lp::checkTempRange(double T){
}

//Effects: checks volume range, converts?
double Lp::checkVolRange(double V){
}



