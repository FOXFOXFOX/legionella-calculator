/*
 *  Lp02.h
 *  LegioCalc
 *
 *  Created by Kaitlin Flynn on 12/27/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef LP02_H
#define LP02_H

//taken from connect4.h


// Constants for checking for wins
const int LAG = 3;
const int NOLAG = 0;
const int LP_DBLTIME = 3;
const double JR_DBLTIME = 2.5;
const int LPthirty = 6; //verify this scientifically
const int JRthirty = 5; //ditto




enum Selection  {
	CALC_LP = 1, CALC_JR, QUIT
};

enum Strain  {
	LP, JR
};


enum ErrorCode  {
	OUT_OF_MENU_RANGE, OUT_OF_COLUMN_RANGE, COLUMN_FILLED
};





// EFFECTS:  prints the menu choices
void printMenu();



// EFFECTS: Get and return a valid user choice for the menu
Selection  getMenuChoice();



// REQUIRES: code holds the value of the message to print
// EFFECTS: prints the error messages for Connect4
void printErrorMessage(ErrorCode code);



// REQUIRES: gameBoard to hold all previous moves
// EFFECTS: Prints the board
void printBoard(const char gameBoard[8][7]);


class Lp {
public:
	//Effects: default constructor
	Lp();
	
	//Effects: constructor taking values
	Lp(double currOD, double desiOD, double currTemp, double dVol, double nVol);
	   
	//Effects: sets current OD
	void setCurrentOD(double currOD);
	
	//Effects: sets desired OD
	void setDesiredOD(double desiOD);
	
	//Effects: sets temp
	void setTemp(double currTemp);
	
	//Effects: sets desired volume 
	void setDesiredVol(double dVol);
	
	
	//EFFECTS: Get and return valid current OD 
	double getCurrentOD() const;
	   
	//EFFECTS: Get and return valid desired OD
	double getDesiredOD() const;
	   
	//EFFECTS: Get and return valid temp, assumes normal is 37
	double getTemp() const;
	   
	//EFFECTS: Get and return valid desired vol. should i put this all into a class? probs. 
	double getDesiredVolume() const;
	   
	   
	//EFFECTS: calculates missing values and returns info for user. work in error codes. convert to mics
	double returnParameter(); 
	
	
	//EFFECTS: prints a table of the current values so user can see what is input. 
	void printValues(double currOD, double desiOD, double currTemp, double dVol);
	
	//Effects: checks OD range to conform to standards
	double checkODRange(double OD);
	
	//Effects: checks temp range
	double checkTempRange(double T);

	//Effects: checks volume range, converts?
	double checkVolRange(double V);
	   
private:
	   double currentOD, desiredOD, temp, desiredVol, volNeeded;
	   };
	   
	   


#endif
