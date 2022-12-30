#include <iostream>
#include <string>
#include "InTextExamples.h"
#include "Utility.h"

using namespace std;

int main() {

    int initialChoice = 0;
    cout << "Please input your choice.\n1. In Text Examples\n2. End of Chapter Examples\n Choice:";

    cin >> initialChoice;
    secondChoice(initialChoice);



    /*
    if (initialChoice == 1) {
        int secondChoice;
        cout << "select in text exercise number" << endl;
        cin >> secondChoice;
        switch (secondChoice) {
        case 1:
            cout << "You've chosen to compute the area and perimeter of a rectangle." << endl;
            cout << "------------------------------------------- \n";
            InTextEx1();
            break;

        default:
            cout << "Something went wrong.";
        }
    }
    */

	return 0;
}