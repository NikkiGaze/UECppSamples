#include <iostream>
#include <array>
#include <chrono>

#include "Helpers.h"

using namespace std;
using namespace chrono;

static const int N = 10;

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



static void printArray()
{
	static const int M = 10;

	array<array<int, M>, M> matrix;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int value = i + j;
			matrix[i][j] = value;
			cout << value << " ";
		}
		cout << endl;
	}

	time_t tt = system_clock::to_time_t(system_clock::now());
	struct tm local_tm;
	localtime_s(&local_tm, &tt);
	int currentDay = local_tm.tm_mday;

	cout << "DAY " << currentDay << endl;

	int rowIndex = currentDay % M;
	int sum = 0;
	for (int j = 0; j < M; j++)
	{
		sum += matrix[rowIndex][j];
	}
	cout << sum << endl;

}

class Vector
{
private:
	int x, y, z;

public:
	Vector() : x(0), y(0), z(0) 
	{}

	Vector(int _x, int _y, int _z) : x(_x), y(_y), z(_z)
	{}

	void Print()
	{
		cout << "Vector {" << x << " " << y << " " << z << " " << "}" <<endl;
	}

	float Length()
	{
		return sqrt(x * x + y * y + z * z);
	}
};

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

	cout << endl;
	printArray();

	Vector v(3, 0, 0);
	v.Print();
	cout << "Vector length " << v.Length() << endl;
}