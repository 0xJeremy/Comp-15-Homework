/*
* Comp 15
* Project 1
* Jeremy Kanovsky
*/

//Include statements
#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include<time.h>
#include<cmath>
#include"BinaryTree.h"
#include"BinarySearchTree.h"
#include"Survivor.h"
using namespace std;

//Function headers
void assign_file(string &, string &);
void assign_survivors_bt(BinaryTree &, string);
void assign_survivors_bst(BinarySearchTree &, string);
void round_one(string, string);
void round_two_bt(BinaryTree &);
void round_two_bst(BinarySearchTree &);

//Constants with the name of input files
const string CASTAWAYS = "castaways.txt";
const string STOWAWAYS = "stowaways.txt";

//Main function
int main()
{
	string bt = "";
	string bst = "";

	round_one(bt, bst);

	return 0;
}

//Function assign_file
//Inputs: string &, string &
//Outputs: none
//Does: Randomly assigns a string to a file
void assign_file(string &bt, string &bst)
{
	srand(time(NULL));
	int random_number = rand()%2;
	if(random_number == 0)
	{
		bt = CASTAWAYS;
		bst = STOWAWAYS;
	}
	else
	{
		bt = STOWAWAYS;
		bst = CASTAWAYS;
	}
}

//Function assign_survivors_bt
//Inputs: BinaryTree &, string
//Outputs: none
//Does: File I/O for the BinaryTree
void assign_survivors_bt(BinaryTree &tree, string read_file)
{
	ifstream infile;
	infile.open(read_file);
    if (!infile.is_open())
    {
        cout << "Could not open file\n";
        return;
    }
    if(read_file == "castaways.txt")
    {
    	for(int i = 0; i < 36; i++)
    	{
    		Survivor s;
        	s.generate_next_castaway(infile);
        	tree.insert_item(s);
    	}
    }
    else
    {
    	for(int i = 0; i < 42; i++)
    	{
    		Survivor s;
        	s.generate_next_castaway(infile);
        	tree.insert_item(s);
    	}
    }
    infile.close();
}

//Function assign_survivors_bst
//Inputs: BinarySearchTree, string
//Outputs: none
//Does: File I/O for the BinarySearchTree
void assign_survivors_bst(BinarySearchTree &tree, string read_file)
{
	ifstream infile;
	infile.open(read_file);
    if (!infile.is_open())
    {
        cout << "Could not open file\n";
        return;
    }
    if(read_file == "castaways.txt")
    {
    	for(int i = 0; i < 36; i++)
    	{
    		Survivor s;
        	s.generate_next_castaway(infile);
        	tree.insert_item(s);
    	}
    }
    else
    {
    	for(int i = 0; i < 42; i++)
    	{
    		Survivor s;
        	s.generate_next_castaway(infile);
        	tree.insert_item(s);
    	}
    }
    infile.close();
}

//Function round_one
//Inputs: string, string
//Outputs: none
//Does: Simulates round one of survivor and elimates one tree
void round_one(string bt, string bst)
{
	BinaryTree bt_tree;
	BinarySearchTree bst_tree;

	assign_file(bt, bst);
	assign_survivors_bt(bt_tree, bt);
	assign_survivors_bst(bst_tree, bst);

	if(bt_tree.num_leaves() <= bst_tree.num_leaves())
	{
		cout << "Loser had " << bst_tree.num_leaves() << " leaves" 
			<< endl;
		cout << "ROUND ONE WINNER: BT" << endl;
		bt_tree.print_tree(cout);
		round_two_bt(bt_tree);
	}
	else
	{
		cout << "Loser had " << bt_tree.num_leaves() << " leaves" 
			<< endl;
		cout << "ROUND ONE WINNER: BST" << endl;
		bst_tree.print_tree(cout);
		round_two_bst(bst_tree);
	}
}

//Function round_two_bt
//Inputs: BinaryTree &
//Outputs: none
//Does: Simulates round two of survivor for a BinaryTree
void round_two_bt(BinaryTree &bt_tree)
{
	cout << endl;
	if(bt_tree.get_height() == 1)
	{
		cout << "WINNING SURVIVOR:" << endl;
		bt_tree.inorder(cout);
		return;
	}
	double x = bt_tree.average_age();
	int y = bt_tree.get_leftmost().get_age();
	int z = bt_tree.get_rightmost().get_age();
	if(abs(x-y) < abs(x-z))
	{
		cout << "Average age this round " << x << endl;
		cout << "Voted off the island:" << endl;
		bt_tree.get_rightmost().print(cout);
		bt_tree.remove_item(bt_tree.get_rightmost());
		round_two_bt(bt_tree);
	}
	else
	{
		cout << "Average age this round " << x << endl;
		cout << "Voted off the island:" << endl;
		bt_tree.get_leftmost().print(cout);
		bt_tree.remove_item(bt_tree.get_leftmost());
		round_two_bt(bt_tree);
	}
}

//Function round_two_bst
//Inputs: BinarySearchTree &
//Outputs: none
//Does: Simulates round two of survivor for a BinarySearchTree
void round_two_bst(BinarySearchTree &bst_tree)
{
	cout << endl;
	if(bst_tree.get_height() == 1)
	{
		cout << "WINNING SURVIVOR:" << endl;
		bst_tree.inorder(cout);
		return;
	}
	double x = bst_tree.average_age();
	int y = bst_tree.get_leftmost().get_age();
	int z = bst_tree.get_rightmost().get_age();
	if(abs(x-y) < abs(x-z))
	{
		cout << "Average age this round " << x << endl;
		cout << "Voted off the island:" << endl;
		bst_tree.get_rightmost().print(cout);
		bst_tree.remove_item(bst_tree.get_rightmost());
		round_two_bst(bst_tree);
	}
	else
	{
		cout << "Average age this round " << x << endl;
		cout << "Voted off the island:" << endl;
		bst_tree.get_leftmost().print(cout);
		bst_tree.remove_item(bst_tree.get_leftmost());
		round_two_bst(bst_tree);
	}
}