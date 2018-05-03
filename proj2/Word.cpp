/*
* Comp 15
* Project 2
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include "Word.h"
using namespace std;

// Default constructor
Word::Word()
{

}

// Parameterized constructor
Word::Word(string i_word)
{
	word = i_word;
}

// Function set_word_data
// Parameters: string, string, string, int
// Returns: none
// Does: Sets the word data based on the parameters
void Word::set_word_data(string i_word, string i_line, 
	string i_file_path, int i_number)
{
	word = i_word;
	line = i_line;
	path = i_file_path;
	line_number = i_number;
}

// Destructor
Word::~Word()
{

}

// Getter for the word
string Word::get_word()
{
	return word;
}
	
// Getter for the line
string Word::get_line()
{
	return line;
}

// Getter for the line number
int Word::get_line_number()
{
	return line_number;
}

// Overwritten << operator to print out the correct format
ostream& operator << (ostream &stream, const Word &w1)
{
	stream << w1.path << ":" << w1.line_number << ": " 
	<< w1.line << endl;
	return stream;
}

// Overwritten == operator for the LinkedList class
bool operator == (const Word &w1, const Word &w2)
{
	return(w1.word == w2.word);
}

// Overwritten != operator for the LinkedList class
bool operator != (const Word &w1, const Word &w2)
{
	return !(w1.word == w2.word);
}