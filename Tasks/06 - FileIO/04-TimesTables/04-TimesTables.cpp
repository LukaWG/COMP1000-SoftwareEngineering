#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string fn = "tables.txt";
	ofstream outputstream;

	outputstream.open(fn);
	if (outputstream.is_open() == false)
	{
		cerr << "Failed to open file " << fn;
		return -1;
	}

	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			outputstream << r * c << "\t";
		}
		outputstream << endl;
	}
	outputstream << endl;

	return 0;
}