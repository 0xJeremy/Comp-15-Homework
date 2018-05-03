/*
* Comp 15
* Project 2
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include<ostream>
using namespace std;

#ifndef WORD_H
#define WORD_H

class Word {

public:
	Word();
	Word(string);
	void set_word_data(string, string, string, int);
	~Word();

	string get_word();
	string get_line();
	string get_path();
	int get_line_number();

	friend ostream& operator << (ostream& stream, const Word &);
	friend bool operator == (const Word &, const Word &);
	friend bool operator != (const Word &, const Word &);

private:
	string word;
	string line;
	string path;
	int line_number;

};

#endif