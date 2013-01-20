/*
 *  LegioCalcMain.cpp
 *  LegioCalc
 *
 *  Created by Kaitlin Flynn on 12/27/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include <iostream>
#include <string>
#include "Lp02.h"
using namespace std;

int main()
{
	Selection choice;
	printMenu();
	choice = getMenuChoice();
	switch(choice){
		case 1: cout << "Let's calc some Lp02!" << endl;
			break;
		case 2: cout << "Let's calc some JR32!" << endl;
			break;
		case 3: cout << "Quit" << endl;
		default: break;
	}
}
