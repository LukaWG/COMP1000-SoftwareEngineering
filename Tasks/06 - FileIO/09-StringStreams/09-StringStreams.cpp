// 09-StringStreams.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;


int main()
{
    //Create two strings.
    string nextWord;

    //Note how a long string can be broken over several lines to aid writing. Note the \ character never features in the string.
    string sentence = "May the force be with you. " \
                      "Always. Ok, maybe that's asking too much. " \
                      "How about 3 days-a-week with time off for birthdays?";

    //Write the complete string to the the terminal
    cout << sentence << endl;

    //Read first word (words are separated by spaces or newlines)
    istringstream iss(sentence);

    int count = 0;

    while (!iss.eof())
    {
        iss >> nextWord;
        if (iss.fail())
        {
            continue;
        }

        count++;

        cout << nextWord << endl;
        if (nextWord == "Always.")
        {
            cout << endl;
        }
    }

    cout << "Total number of words: " << count << endl;

    //Final check - did we read an EOF character? This can happen when we read the last word or beyond it (space or newline)
    if (iss.eof()) {
        cout << "We reached the end of the file" << endl;
    }
    
    //Done
    return 0;

}

