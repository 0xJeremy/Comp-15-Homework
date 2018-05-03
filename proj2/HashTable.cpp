/*
* Comp 15
* Project 2
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include<algorithm>
#include "HashTable.h"
using namespace std;

// Default Constuctor
HashTable::HashTable()
{

}

// Destructor for the linked lists
HashTable::~HashTable()
{
	for(int i = 0; i < MAX_CAPACITY; i ++)
	{
		table[i].make_empty();
	}
}

// Function insert
// Parameters: Word
// Returns: int
// Does: Inserts a Word into the Hashtable and returns the 
//		index of the hash
int HashTable::insert(Word curr_word)
{
	int location = str_hash(curr_word.get_word());
	location = location%(MAX_CAPACITY-1);
	if(location < 0)
		location = -location;
	table[location].insert(curr_word);
	return location;
}

// Function search
// Parameters: string
// Returns: none
// Does: Searches for a string in the Hashtable and prints
//		all Words with a similar string
void HashTable::search(string to_find)
{
	int location = str_hash(to_find);
	location = location%(MAX_CAPACITY-1);
	if(location < 0)
		location = -location;
	Word temp_word(to_find);
	table[location].locate(temp_word);
}

// Function print_table
// Parameters: none
// Returns: none
// Does: Prints the entire Hashtable. Used for debugging
void HashTable::print_table()
{
	for(int i = 0; i < MAX_CAPACITY; i++)
	{
		table[i].print(cout);
	}
}