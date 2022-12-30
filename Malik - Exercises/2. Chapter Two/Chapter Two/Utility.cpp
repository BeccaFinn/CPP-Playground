#include "Utility.h"

using namespace std;

void secondChoice(int initialChoice) {
	string typeOfExample; 
	int indexChoice;
	string title;

	if (initialChoice == 1) {
		typeOfExample = "in text example";
		title = "InTextEx";
	}
	else if (initialChoice == 2) {
		typeOfExample = "end of chapter example";
		title = "EndOfChEx";
	}
	else {
		cout << "Not a valid choice.\n";
		typeOfExample = "null";
		title = "null";
	}

	cout << "Choose the " << typeOfExample << " number that you want\n Your Choice?";

	cin >> indexChoice;
	string index = to_string(indexChoice);
	title.append(index);

	cout << "\n" << title << "\n----------------------" << endl;

	if (initialChoice == 1) {
		inTextIndex(indexChoice);
	}
	else if (initialChoice == 2) {
		endOfChapterIndex(indexChoice);
	}

}

void inTextIndex(int indexChoice) {
	switch (indexChoice) {
		case 1: 
			InTextEx1();
			break;

		default:
			cout << "Something went wrong.";
	}
}

void endOfChapterIndex(int indexChoice) {
	switch (indexChoice) {
		case 1:
			cout << "placeholder for EOC example 1" << endl;
			break;

		default:
			cout << "Something went wrong.";
	}
}