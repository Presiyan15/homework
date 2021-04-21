#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;




int main()
{
	double money;
	int lastYear;
	int age = 18;
	cin >> money >> lastYear;

	for (int i = 1800; i <= lastYear ; i++)
	{
		if (i % 2 == 0)
		{
			money -= 12000;
		}
		else
		{
			money -= 12000;
			money -= age * 50;
		}
		age++;
	}

	if (money >= 0)
	{
	   
		cout << "Yes! He will live a carefree life and will have " << fixed << setprecision(2) << money <<" dollars left." << endl;
	}
	else
	{
		cout << "He will need " << fixed << setprecision(2) << abs(money) << " dollars to survive." << endl;
	}

}


