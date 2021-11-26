#include <iostream>
#include "Helpers.h"

using namespace std;

const int N = 10;

static void printNumbers(bool printOdd, int count)
{
	for (int i = 1; i <= count; i++)
	{
		if (i % 2 == (int)printOdd)
		{
			cout << i << " ";
		}
	}
}


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

	for (int i = 1; i <= N; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}

	cout << endl;
	printNumbers(false, N);
}