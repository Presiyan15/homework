#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	int number;
	int sum = 1;
	cin >> number;

	for (int i = 2; i <= number/2; i++)
	{
		if (number % i == 0)
		{
			cout << i << " ";
			sum += i;
		}
	}
	cout << number <<endl;
	if (number == sum)
	{
		cout << "Perfect number";
	}
	else
	{
		cout << "Number isn't perfect";
	}
}

