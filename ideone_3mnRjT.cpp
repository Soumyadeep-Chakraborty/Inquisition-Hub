#include <iostream>
using namespace std;

int main() {
	int length, breadth, perimeter;
	cout << "Enter Length And Breadth Of The Rectangle : ";
	cin >> length >> breadth;
	perimeter = (2*length) + (2*breadth);
	cout << "Perimeter = " << perimeter;
	
	return 0;
}