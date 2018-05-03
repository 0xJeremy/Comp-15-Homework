/*
* Comp 15
* Homework 3
* Jeremy Kanovsky
*/

#include"RPNCalc.h"
#include<iostream>
#include<string>
using namespace std;

// Default constructor
RPNCalc::RPNCalc()
{

}

// RPN calculator main run function
void RPNCalc::run()
{
	string user_input = "";
	bool q_exit = false;

	// Main loop for running the calculator
	while((user_input != "Q" || user_input != "q") 
		&& !cin.eof() && !q_exit)
	{
		// Gets user input
		cin >> user_input;
		if(user_input == "F" || user_input == "f")
		{
			file_operation(q_exit);
		}
		else
		{
			perform_operation(user_input, q_exit);
		}
 	}
}

void RPNCalc::perform_operation(string user_input, bool &q_exit)
{
	// Checks if input is a double
	try
 	{
    	op = stod(user_input);
    	stack.push(op);
    	return;
 	}
 	catch(invalid_argument exception) {}

 	//Checks if the input is a math operation
 	if(user_input == " ")
 	{
 		return;
 	}
	else if(user_input == "+")
 	{
 		double x = stack.top();
 		stack.pop();
 		double y = stack.top();
 		stack.pop();
 		stack.push(x+y);
 	}
 	else if (user_input == "-")
 	{
 		double x = stack.top();
 		stack.pop();
 		double y = stack.top();
 		stack.pop();
 		stack.push(y-x);
 	}
 	else if (user_input == "*")
 	{
 		double x = stack.top();
 		stack.pop();
 		double y = stack.top();
 		stack.pop();
 		stack.push(x*y);
 	}
 	else if (user_input == "/")
 	{
 		double x = stack.top();
 		stack.pop();
 		double y = stack.top();
 		stack.pop();
 		stack.push(y/x);
 	}

 	// Checks if the input is a calculator operation
 	else if(user_input == "P" || user_input == "p")
	{
		if(!stack.is_empty())
		{
			cout << stack.top() << endl;	
		}
		else
		{
			cout << "Calculator is empty." << endl;
		}
	}
	else if(user_input == "C" || user_input == "c")
	{
		stack.make_empty();
	}
	else if(user_input == "Q" || user_input == "q")
	{
		q_exit = true;
	}
	else
	{
		cout << "Command " << user_input << " not implemented." 
			 << endl;
	}
}

// Function to handle all file I/O
void RPNCalc::file_operation(bool &q_exit)
{
	// Gets input file and opens it
	string user_input;
	cin >> user_input;
	ifstream infile;
	infile.open(user_input.c_str());

	// Checks for errors
	if (!infile.is_open())
    {
        cout << "Error opening file\n";
        return;
    }
    string temp = "";

    // Gets input from file
    while(!infile.eof())
    {
    	infile >> temp;
    	if(temp == "F" || temp == "f")
		{
			file_operation(q_exit);
		}
		else
		{
			perform_operation(temp, q_exit);
		}
    }
    infile.close();
}