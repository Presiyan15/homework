#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int n;

	cin >> n;

	int numberOfPoints = n + 1;
	int numberOfLines = 2*n + 1;
	int numberOfSlashes = 0;

	


	for (int i = 1; i <= n+1; i++)
	{
		if (i != 1)
		{
			for (int p = 1; p <= numberOfPoints; p++)
			{
				cout << ".";
			}
			
				cout << "//";
			
			for (int k = 1; k <= numberOfLines; k++)
			{
				cout << "_";
			}
			
				cout << "\\\\";
			
			for (int p = 1; p <= numberOfPoints; p++)
			{
				cout << ".";
			}
			numberOfPoints--;
			numberOfLines += 2;
		}
		else
		{
			for (int p = 1; p <= numberOfPoints; p++)
			{
				cout << ".";
			}

			

			for (int k = 1; k <= numberOfLines; k++)
			{
				cout << "_";
			}

			

			for (int p = 1; p <= numberOfPoints; p++)
			{
				cout << ".";
			}
			numberOfPoints--;
			numberOfLines -= 2;
		}

		cout << endl;

	}
	cout << "//";
	for (int i = 1; i <= (numberOfLines-5)/2; i++)
	{
		cout << "_";
	}
	cout << "STOP!";
	for (int i = 1; i <= (numberOfLines-5)/2; i++)
	{
		cout << "_";
	}
	cout << "\\\\";
	cout << endl;



	for (int i = 1; i <= n; i++)
	{

		for (int p = 1; p <= numberOfPoints; p++)
		{
			cout << ".";
		}

		cout << "\\\\";

		for (int k = 1; k <= numberOfLines; k++)
		{
			cout << "_";
		}

		cout << "//";

		for (int p = 1; p <= numberOfPoints; p++)
		{
			cout << ".";
		}
		numberOfPoints++;
		numberOfLines -= 2;

		cout << endl;
	}
		
		
	
		

	return 0;
}