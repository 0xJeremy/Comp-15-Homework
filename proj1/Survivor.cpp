/*
* Comp 15
* Project 1
* Jeremy Kanovsky
*/

#include "Survivor.h"
#include<string>
#include<iostream>
using namespace std;

//Default Constructor
Survivor::Survivor()
{

}

//Overloaded constructor
Survivor::Survivor(string fname, string lname, string city_in,
				 string state_in, int age_in)
{
	first_name = fname;
	last_name = lname;
	city = city_in;
	state = state_in;
	age = age_in;
}

//Overloaded constructor
Survivor::Survivor(string fname, string lname)
{
	first_name = fname;
	last_name = lname;
}

//Function print
//Inputs: ostream &
//Outputs: none
//Does: Prints the survivor information
void Survivor::print(ostream &stream)
{
	stream << first_name << " " << last_name << endl;
	stream << "Hometown: " << city << ", " << state << endl;
	stream << "Age: " << age << endl;
}

//Function generate_next_castaway
//Inputs: ifstream &
//Outputs: none
//Does: Generates the information for a castaway from input file
void Survivor::generate_next_castaway(ifstream &infile)
{
	infile.clear();
    infile >> first_name;
    infile >> last_name;
    infile >> city;
    infile >> state;
    infile >> age;
}

//Function set_name
//Inputs: string, string
//Outputs: none
//Does: Sets the first and last name of a survivor
void Survivor::set_name(string fname, string lname)
{
	first_name = fname;
	last_name = lname;
}

//Function == operator
//Inputs: Survivor &, Survivor &
//Outputs: bool
//Does: Overloads the == operator
bool operator ==(const Survivor &s1, const Survivor &s2)
{
	return (s1.first_name == s2.first_name && s1.last_name == s2.last_name);
}

//Function < operator
//Inputs: Survivor &, Survivor &
//Outputs: bool
//Does: Overloads the < operator
bool operator <(const Survivor &s1, const Survivor &s2)
{
	if(s1.first_name != s2.first_name)
	{
		return (s1.first_name < s2.first_name);
	}
	return (s1.last_name < s2.last_name);
}

//Function > operator
//Inputs: Survivor &, Survivor &
//Outputs: bool
//Does: Overloads the > operator
bool operator >(const Survivor &s1, const Survivor &s2)
{
	if(s1.first_name != s2.first_name)
	{
		return (s1.first_name > s2.first_name);
	}
	return (s1.last_name > s2.last_name);
}

//Function get_age
//Inputs: none
//Outputs: int
//Does: Returns the age of a survivor
int Survivor::get_age()
{
	return age;
}