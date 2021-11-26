#include <iostream>
#include "Helpers.h"

using namespace std;
int main()
{
	int a = 4;
	int b = 5;
	int c = SquaredSum(a, b);
	cout << c << endl;

	string s = "Hello";
	cout << s << endl;
	cout << s.length() << endl;
	cout << s[0] << endl;
	cout << s[s.length() - 1] << endl;

}