#include "InTextExamples.h"

using namespace std;

void Hello() {
	cout << "hello" << endl;
}

void InTextEx1() {
	double length;
	double width;
	double area;
	double perimeter;

	cout << "Program to compute and output the perimeter and area of a rectangle." << endl;

	length = 6.0;
	width = 4.0;
	perimeter = 2 * (length + width);
	area = length * width;

	cout << "Length = " << length << endl;
	cout << "Width = " << width << endl;
	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;
}