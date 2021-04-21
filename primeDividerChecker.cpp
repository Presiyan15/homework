#include <iostream>
#include <cmath>

using namespace std;


bool IsPrime(int number)
{
	bool prim = true;

	if (number != 2)
	{
		for (int i = 2; i <= sqrt(number); i++)
		{
			if (number % i == 0)
			{
				prim = false;
				break;
			}
		}
	}

	return prim;
}
int howManyTimes(int number, int primeDivider)
{
	int counter = 0;
	

	while (true)
	{
		if (number %primeDivider==0)
		{
			counter++;
			number /= primeDivider;
		}
		else
		{
			break;
		}
	}

	return counter;
}

bool IsTrue(int number, int dividers)
{
	int sum = 0;

	for (int i = 2; i <= number/2; i++)
	{
		if (IsPrime(i) == true && number % i == 0)
		{
			sum += howManyTimes(number, i);
		}
	}
	if (sum == dividers)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int number;
	int dividers;
	cin >> number;
	cin >> dividers;

	bool doesItWork = false;
	

		for (int i = 2; i <= number; i++)
		{
			
			if (IsTrue(i, dividers) == true)
			{
				doesItWork = true;
				
				cout << i << " ";
			}
		}
	if (doesItWork==false)
	{
		cout << 0;
	}

	
	


	return 0;
}


