/*
* Comp 15
* Project 2
* Jeremy Kanovsky
*/

#include<iostream>
#include<string>
using namespace std;

string parse_string(string);

int main()
{
	while(true)
	{
		string input;
		cin >> input;
		cout << parse_string(input) << endl;
		cout << endl;
	}

	return 0;
}

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