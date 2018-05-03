/*
* Comp 15
* Project 2
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include<fstream>
#include<ostream>
#include<sstream>
#include<algorithm>
#include "FSTree.h"
#include "DirNode.h"
#include "HashTable.h"
#include "NodeType.h"
#include "Word.h"
using namespace std;

void hash_directory(DirNode *, HashTable &);
void check_delimiters(string &, bool &, bool &);
string parse_string(string);
void index_file(string, HashTable &);

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		return -1;
	}

	// Creates a Hashtable object
	HashTable table;

	// Creates an FSTree based on the directory
	string directory = argv[1];
	FSTree dir_tree = FSTree(directory);
	DirNode *root_node = dir_tree.get_root();

	// Hashes the directory given in the command line
	hash_directory(root_node, table);

	bool exit = false;
	string input = "";

	// Main loop for the Query program
	while(!exit && !cin.eof())
	{
		bool i = false;
		cout << "Query?" << endl;
		getline(cin, input);
		check_delimiters(input, exit, i);
		input = parse_string(input);
		if(!i)
		{
			table.search(input);
		}

		// Runs queries if case insensitive
		else if(i)
		{
			string upper_input = input;
			transform(upper_input.begin(), upper_input.end(), 
				upper_input.begin(), ::toupper);
			string lower_input = input;
			transform(lower_input.begin(), lower_input.end(), 
				lower_input.begin(), ::tolower);
			table.search(upper_input);
			table.search(lower_input);
		}
	}


	cout << "Goodbye! Thank you and have a nice day." << endl;
	return 0;
}

// Function hash_directory
// Parameters: DirNode, HashTable
// Returns: none
// Does: Hashes an entire directory and all subdirectories to
//		a hashtable object
void hash_directory(DirNode *node, HashTable &table)
{
	for(int i = 0; i < node->num_subdirs(); i++)
	{
		DirNode *new_node(node->get_subdir(i));
		hash_directory(new_node, table);
	}
	for(int i = 0; i < node->num_files(); i++)
	{
		string path_name = node->get_name() +"/"+ node-> get_file(i);
		index_file(path_name, table);
	}
}

// Function check_delimiters
// Parameters: string, bool, bool
// Returns: none
// Does: Checks if any delimiters are in the given search query
//		and sets the bools to reflect the input
void check_delimiters(string &input, bool &exit, bool &i)
{
	if(input.substr(0, 2) == "@i")
	{
		i = true;
		input = input.substr(3);
		return;
	}
	if(input.substr(0, 12) == "@insensitive")
	{
		i = true;
		input = input.substr(13);
		return;
	}
	if(input.substr(0, 2) == "@q" || input.substr(0, 5) == "@quit")
	{
		exit = true;
		return;
	}
}

// Function parse_string
// Parameters: string
// Returns: none
// Does: Parses the input to remove leading and trailing characters
string parse_string(string input)
{
	string filtered = "";
	string reverse = "";
	bool flag1 = false;
	for(int i = 0; i < (int)input.length(); i++)
	{
		if((input.at(i) >= 65 && input.at(i) <= 90) 
			|| (input.at(i) >= 97 && input.at(i) <= 122)
			|| flag1)
			{
				flag1 = true;
				filtered = filtered + input.at(i);
			}
	}
	flag1 = false;
	for(int i = filtered.length()-1; i >= 0; i--)
	{
		reverse = reverse + filtered.at(i);
	}
	input = reverse;
	filtered = "";
	for(int i = 0; i < (int)input.length(); i++)
	{
		if((input.at(i) >= 65 && input.at(i) <= 90) 
			|| (input.at(i) >= 97 && input.at(i) <= 122)
			|| (input.at(i) >= 48 && input.at(i) <= 57)
			|| flag1)
			{
				flag1 = true;
				filtered = filtered + input.at(i);
			}
	}
	reverse = "";
	for(int i = filtered.length()-1; i >= 0; i--)
	{
		reverse = reverse + filtered.at(i);
	}
	filtered = reverse;
	return filtered;
}

// Function index_file
// Parameters: string, HashTable
// Returns: none
// Does: Reads all files passed to it and Hashes them into the table
//		by creating Word objects
void index_file(string file_path, HashTable &table)
{
	ifstream infile;
	infile.open(file_path.c_str());
	if(!infile.is_open())
	{
		cout << "Could not open file: " << file_path << endl;
		return;
	}
	string temp_line;
	int counter = 0;
	while(!infile.eof())
	{
		getline(infile, temp_line);
		counter++;
		string file_line = temp_line;
		istringstream iss(temp_line);
		string temp_word;
		while(iss >> temp_word)
		{
			Word w;
			w.set_word_data(temp_word, file_line, file_path, counter);
			table.insert(w);
		}

	}

}