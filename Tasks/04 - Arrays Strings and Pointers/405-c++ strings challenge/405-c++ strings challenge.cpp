#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    cout << input << endl;

    //Write solution here
    int loc = input.find("title");
    string lastPart = input.substr(loc);
    int loc2 = lastPart.find("=");
    string subString = lastPart.substr(loc2 + 1);
    int loc3 = subString.find("\"");
    string subString2 = subString.substr(loc3 + 1);
    int loc4 = subString2.find("\"");
    string titleValue = subString2.substr(0, loc4);
    cout << "title = " << titleValue << endl;


    int sum = 0;

    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
        if (word == "the")
        {
            sum++;
        }
    }
    cout << "The word \"the\" appears " << sum << " times";
}

