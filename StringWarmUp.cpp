// StringWarmUp.cpp
// Blake Wilson
// Created on 8/25/25

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void lengthOfString();
void reverseAString();
void charSwap();

int main() {
    lengthOfString();
    reverseAString();
    charSwap();

    return 0;
}

void lengthOfString() {
    string myStrObject = "abcdefghi";
    cout << "\nThe value of my string object is: " << myStrObject << endl;
    cout << "\nThe length of my string object is: " << myStrObject.length() << endl;
    int lengthofmyStrObject = 0;
    lengthofmyStrObject = myStrObject.length();
    cout << endl <<lengthofmyStrObject << endl;
}

void reverseAString() {
    string stringToReverse = "abcdefghi";
    reverse(stringToReverse.begin(), stringToReverse.end());
    cout << endl << stringToReverse << endl;
}

void charSwap() {
    string myStrObject = "abc def g h ijk";

    // Understand the index nature of a string object
    // output the char at index (aka character position) 5
    cout << "\n\nMy string object is: " << myStrObject << endl;

    cout << "\n\n" << myStrObject[5] << "\n\n";

    // Get the length of the string.
    int lengthOfMyStr = myStrObject.length();
    cout << "\nLength of string: " << lengthOfMyStr << "\n\n";
    for (int i = 0; i <= lengthOfMyStr/2; i++) {

        cout << "i = "<< i << " and the char at " << i << " is " << myStrObject[i] << "\n\n";
    }

    // Create a char variable for the swap
    char myTempChar;
    for (int i = 0; i <= lengthOfMyStr/2; i++) {
        myTempChar = myStrObject[i];
        myStrObject[i] = myStrObject[lengthOfMyStr - i - 1];
        myStrObject[lengthOfMyStr - i - 1] = myTempChar;

    }

    cout << "\nThe reversed string is: " << myStrObject << endl;

}
