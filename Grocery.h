/*
 * Grocery.h
 *
 *  Created on: Feb 13, 2023
 *      Author: fisalikhmayes
 */

#ifndef GROCERY_H_
#define GROCERY_H_
#include <string>
#include <map>
using namespace std;


class Grocery {
public:
	//public menu options
	void menuOption1();
	void menuOption2();
	void menuOption3();
	void menuOption4();
	void purchases();
	string item1;
	int frequency1;


private:
	// this is the vector that stores the data
	std::map<std::string, int> frequencyMap;
	string item;

};

#endif /* GROCERY_H_ */
