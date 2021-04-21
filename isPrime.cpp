#include <iostream>
#include<cmath>

using namespace std;

bool ifPrime(int number)
{
	bool ifPrime = true;

	for (int i = 2; i <= sqrt(number); i++)
	{
		if (number % i == 0)
		{
			ifPrime = false;
		}
	}

	return ifPrime;
}
int main()
{
	int n;

	cin >> n;

	for (size_t i = 2; i <= n ; i++)
	{
		if (ifPrime(i) == true)
		{
			cout << i << " ";
		}
	}


	return 0;


}
