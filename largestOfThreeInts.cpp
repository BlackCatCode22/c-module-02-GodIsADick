//BW 8/18/25
//Largest of Three Integers Program
// This program will get three ints from the user and output the largest of the three.
#include <iostream>
using namespace std;

int main() {
    cout << "\n Hello and welcome to my Largest of three ints program. \n\n";

    //Create all variables needed.

    int num1 = 0, num2 = 0, num3 = 0;

    // Get three ints from the user.

    cout << "Please enter a value for num1: ";
    cin >> num1;
    cout << "You entered " << num1 << " for the value of num1" << endl << endl;

    cout << "Please enter a value for num2: ";
    cin >> num2;
    cout << "You entered " << num2 << " for the value of num2" << endl << endl;

    cout << "Please enter a value for num3: ";
    cin >> num3;
    cout << "You entered " << num3 << " for the value of num3" << endl << endl;

    //Begin comparing numbers two at a time.
    //First num1 will be compared to num2. If it's greater, it will then be compared to num3.
    //If num1 is not greater than num2, then num2 will then be compared to num3.

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

    return 0;
}
