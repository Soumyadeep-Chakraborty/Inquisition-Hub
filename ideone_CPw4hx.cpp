#include <iostream>
using namespace std;

int main() {
	int radius, diameter, circumference, area;
	cout << "Enter Radius Of The Circle : ";
	cin >> radius;
	diameter = 2*radius;
	circumference = 2*3.14*radius;
	area = 3.14*radius*radius;
	
	cout << "Diameter = " << diameter << "Circumference = " << circumference << "Area = " << area;
	
	return 0;
}