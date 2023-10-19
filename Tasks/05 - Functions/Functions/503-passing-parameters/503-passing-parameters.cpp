#include <iostream>
using namespace std;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void displayWithinBanner(string message)
{
	int len = message.length();
	displayBanner(len);
	cout << "* " << message << " *" << endl;
	displayBanner(len);
}

int main()
{
	const string message = "Welcome to Computer Science";

	//Write the banner above
	displayWithinBanner(message);

	//Tell the calling shell all is well
	return 0;
}