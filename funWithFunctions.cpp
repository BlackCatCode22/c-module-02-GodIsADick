// Blake Wilson
// Created on 9/3/25
// This Program will include five different functions:
// sumTwoInts, reverseAString, largestOfThree, compareTwoInts, and getAnIntFromTheUser.

#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;

void sumTwoInts(string userName);
void reverseAString(string userName);
void largestOfThree(string userName);
void compareTwoInts(string userName);
int getAnIntFromTheUser(string userName);

int main() {
    string userName;
    cout << "\nHello! Welcome to the FunWithFunctions program!\n" << "Please enter your first name: ";
    cin >> userName;
    cout << "Welcome " << userName << "!\n\n";

    sumTwoInts(userName);
    reverseAString(userName);
    largestOfThree(userName);
    compareTwoInts(userName);

    return getAnIntFromTheUser(userName);
}

void sumTwoInts(string userName) {
    int Int1=0, Int2=0;
    cout << userName << ", let's add two integers!\n" << "Please enter the first number to add: ";
    cin >> Int1;
    cout << "Please enter the second number to add: ";
    cin >> Int2;
    cout << "The sum of the two integers is: " << Int1 + Int2 << "\n";
}

void reverseAString(string userName) {
    string myStringToReverse;
    cout << "\nNow, " << userName << ", let's reverse a string!\n" << "Please enter the string to reverse: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, myStringToReverse);
    string myReversedUserString = myStringToReverse;
    reverse(myReversedUserString.begin(), myReversedUserString.end());
    cout << "\nThe reversed string is: " << myReversedUserString << "\n";
}

void largestOfThree(string userName) {
    cout << "\n" << userName << ", let's find the Largest of three ints. \n\n";
    int num1 = 0, num2 = 0, num3 = 0;
    cout << "Please enter a value for num1: ";
    cin >> num1;
    cout << "You entered " << num1 << " for the value of num1" << endl << endl;
    cout << "Please enter a value for num2: ";
    cin >> num2;
    cout << "You entered " << num2 << " for the value of num2" << endl << endl;
    cout << "Please enter a value for num3: ";
    cin >> num3;
    cout << "You entered " << num3 << " for the value of num3" << endl << endl;
    if (num1 > num2) {
        if (num1 > num3) {
            cout << num1 << " is greater than " << num3 << " and " << num2 << ". It is therefore the largest integer." << endl;
        } else {
            cout << num3 << " is greater than " << num2 << " and " << num1 << ". It is therefore the largest integer." << endl;
        }
    } else {
        if (num2 > num3) {
            cout << num2 << " is greater than " << num3 << " and " << num1 << ". It is therefore the largest integer." << endl;
        } else {
            cout << num3 << " is greater than " << num1 << " and " << num2 << ". It is therefore the largest integer." << endl;
        }
    }
}

void compareTwoInts(string userName) {
    cout << "\nAlright, " << userName << ", let's compare two integers. \n\n";
    int num1=0, num2=0;
    cout << "Please enter a value for num1: ";
    cin >> num1;
    cout << "You entered " << num1 << " for the value of num1" << endl << endl;
    cout << "Please enter a value for num2: ";
    cin >> num2;
    cout << "You entered " << num2 << " for the value of num2" << endl << endl;
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << ".\n";
    } else {
        cout << num2 << " is greater than " << num1 << ".\n\n";
    }
}

int getAnIntFromTheUser(string userName) {
    int num1=0;
    cout << "\nFor our last function, lets simply get an integer from you." << "\nPlease enter a value for an integer: ";
    cin >> num1;
    cout << "\nYou entered " << num1 << " for the value of the integer. \n";
    return num1;
}