// StringWarmUp.cpp
// Blake Wilson
// Created on 8/25/25

#include <iostream>
#include <string>
using namespace std;

int main() {
    string myStrObject = "abcdefghi";

    cout << "\nThe value of my string object is: " << myStrObject << endl;

    cout << "\nThe length of my string object is: " << myStrObject.length() << endl;

    int lengthofmyStrObject = 0;

    lengthofmyStrObject = myStrObject.length();

    cout << endl <<lengthofmyStrObject << endl;

    return 0;
}