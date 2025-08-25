// Blake Wilson
// Created on 8/25/25
// Reverse A String project

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    cout <<"\n\nWelcome to my Reverse a String program!\n\n";

    // Create a string that we will reverse.
    string myStrToReverse = "A Long String to Reverse";

    cout << myStrToReverse;

    // Create a string that will become the original string reversed.
    string myEasyReversedStr = myStrToReverse;

    // Use reverse algorithm from algorithm library.
    reverse(myEasyReversedStr.begin(), myEasyReversedStr.end());

    // Output reversed string.
    cout << endl << myEasyReversedStr << endl;

    // Part 2
    // Use a for loop to swap characters.
    for (int i = 0; i < 10; i++) {
        cout << "\nThe value of i is " << i << endl;
    }

    return 0;
}