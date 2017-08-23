#include <iostream>
using namespace std;

int main() {
int a;
char b;
double c;
bool d;
cout << "Enter An Integer : ";
cin >> a;
cout << "Enter An Alphanumeric Character : ";
cin >> b;
cout << "Enter A Floating Point Value : ";
cin >> c;
cout << "Enter A Boolean Value : ";
cin >> d;
cout << "ENTERED VALUES : ";
cout << " INTEGER :" << a << " CHARACTER :" << b << " FLOAT :" << c << " BOOLEAN :" << d;
return 0;
}