/*
* Comp 15
* Project 2
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include<list>
#include "LinkedList.h"
using namespace std;

#ifndef HASHTABLE_H
#define HASHTABLE_H

const int MAX_CAPACITY = 4000;

class HashTable {

public:
	HashTable();
	~HashTable();

	int insert(Word);
	void search(string);
	void print_table();    

private:
	LinkedList<Word> table[MAX_CAPACITY];
	hash<string> str_hash;

};

#endif