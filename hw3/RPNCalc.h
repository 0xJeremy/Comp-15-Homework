/*
* Comp 15
* Homework 3
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include<fstream>
#include"Stack.h"
using namespace std;

#ifndef RPNCALC_H_
#define RPNCALC_H_

class RPNCalc
{
public:
	// Default constructor
	RPNCalc();

	// Runs the calculator
	void run();

	// Helper function to perform operation
	void perform_operation(string, bool &);

	// Reads input from a file
	void file_operation(bool &);

private:
	Stack stack;
	double op;
};

#endif