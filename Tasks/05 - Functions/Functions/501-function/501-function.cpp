#include <iostream>
using namespace std;

void displayBanner(string message);

int main()
{
	const string message = "Welcome to Computer Science - COMP1000";

	//Write the banner above
	displayBanner(message);

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner(message);

	//Tell the calling shell all is well
	return 0;
}

void displayBanner(string message)
{
	int len = message.length();

	for (unsigned int n = 0; n < (len + 4); n++)
	{
		cout << "*";
	}
	cout << endl;
}