//============================================================================
// Name        : prject 3 cs-210.cpp
// Author      : Fisal Ikhmayes
// Version     :
// Copyright   : Your copyright notice
// Description : project 3 cs-210;
//============================================================================

#include <iostream>
using namespace std;
#include "Grocery.h"



int main() {
	Grocery grocery1;
	int choice;
	// this calls purchases so it can start sorting data
	grocery1.purchases();
	// keeps it going untill user exits
	while(true){
		//outputs menu options
		std::cout << "To search for a specific item enter '1'." << std::endl;
		std::cout << "To see the items purchase frequency in alphabetical order enter '2'." << std::endl;
		std::cout << "To view a histogram of the items purchase frequency enter '3'." << std::endl;
		std::cout << "To exit the program enter '4'." << std::endl;
		// input for the users menu option choice
		cin >> choice;

	// handles which function to call based on users input
		if (choice == 1){
			grocery1.menuOption1();
		}
		else if (choice == 2) {
			grocery1.menuOption2();
		}
		else if (choice == 3) {
			grocery1.menuOption3();
		}
		else if (choice == 4) {
			grocery1.menuOption4();

		}
	}

	return 0;
}
