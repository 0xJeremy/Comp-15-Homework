/*
* Comp 15
* Project 2
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
#include "FSTree.h"
#include "DirNode.h"
using namespace std;

void print_directory(DirNode *);

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		return -1;
	}
	string directory = argv[1];
	FSTree dir_tree = FSTree(directory);
	DirNode *root_node = dir_tree.get_root();
	print_directory(root_node);

	return 0;
}

void print_directory(DirNode *node)
{
	for(int i = 0; i < node->num_subdirs(); i++)
	{
		DirNode *new_node(node->get_subdir(i));
		print_directory(new_node);
	}
	for(int i = 0; i < node->num_files(); i++)
	{
		cout << node->get_name() << "/" << node->get_file(i) << endl;
	}
	cout << node->get_name() << endl;
}