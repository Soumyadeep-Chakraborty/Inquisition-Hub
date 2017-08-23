#include <iostream>
using namespace std;

int main() {
	char op;
	float a, b;
	cout << " Enter Arithmetic Operator : ";
	cin >> op;
	
	cout << " Enter Two Operands: ";
	cin >> a >> b;
	
	switch(op)
	{
		case '+':
		cout << a+b;
		break;
		
		case '-':
		cout << a-b;
		break;
		
		case '/':
		cout << a/b;
		break;
		
		case '*':
		cout << a*b;
		break;
	}
	
	return 0;
}