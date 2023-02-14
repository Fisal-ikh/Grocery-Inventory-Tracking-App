/*
 * Grocery.cpp
 *
 *  Created on: Feb 13, 2023
 *      Author: fisalikhmayes
 */

#include "Grocery.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <map>
#include <stdlib.h>
#include <algorithm>


void Grocery::purchases() {
    item = item1;
    // opens the text file
    std::ifstream file_in("CS210_Project_Three_Input_File.txt");
    // checks if its open succesfully
    if (!file_in.is_open()) {
        std::cout << "Error opening file: " << strerror(errno) << std::endl;
        return;
    }

    // Read in the input data and count the frequency of each item
    while (file_in >> item) {
        frequencyMap[item]++;
    }
    //closes files
    file_in.close();

    // Sort the items in alphabetical order and output the frequency count for each item
    std::vector<std::pair<std::string, int> > items(frequencyMap.begin(), frequencyMap.end());

    std::sort(items.begin(), items.end());

    // Create and open the output file
    std::ofstream file_out("frequency.dat");
    if (!file_out.is_open()) {
       std::cout << "Error opening file: frequency.dat " << strerror(errno) << std::endl;
       return;
    }

    // Write the frequency count for each item to the output file frequency.dat
    for (const auto& item : items) {
       file_out << item.first << " " << item.second << std::endl;
    }
    //closes file
    file_out.close();
   }


void Grocery::menuOption1() {
	 string itemChoice;
	 std::cout << "Menu Option1" << std::endl;
	 std::cout << "Enter an item: ";
	 // takes the user input to find its frequencys
	 cin >> itemChoice;

	 // if the user entered a lower case input this will convert the first letter to uppercase

	 itemChoice[0] = toupper(itemChoice[0]);

	 // this detetcs if the input is found in the txt file
	 if (frequencyMap.find(itemChoice) == frequencyMap.end()) {
	         std::cout << "Item not found." << std::endl;
	 }
	 //outputs the users item with its frequency
	 else {
		 std::cout << itemChoice << " " << frequencyMap[itemChoice] << std::endl;
	 }

}



void Grocery::menuOption2() {
	std::cout << "Menu Option2" << std::endl;
	//this finds the frequency and outputs it in alphabetical order
	for (const auto& item : frequencyMap) {
	        std::cout << item.first << " " << item.second << std::endl;
	    }

	}
void Grocery::menuOption3() {
	std::cout << "Menu Option3" << std::endl;
	// finds the frequency and outputs it
	for (const auto& item : frequencyMap) {
	    std::cout << item.first << " ";

	    //outputs it in the form of a histogram
	    for (int i = 0; i < item.second; i++) {
	        std::cout << "*";
	    }
	    std::cout << std::endl;
	}

	}
void Grocery::menuOption4() {
	std::cout << "Menu Option4" << std::endl;
	std::cout << "Program exited" << std::endl;

	// exits the program
	exit(0);

	}




