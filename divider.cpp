#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	


	
	int a;
	cin >> a;

	for (int i = 1; i <= a/2; i++)
	{
		if (a % i == 0)
		{
			cout << i;
			cout << " ";
		}
	}
	cout << " " << endl;
	int b;
	cin >> b;
	
	for (int  i = 1; i <= b ; i++)
	{
		if (i % 5 == 0)
		{
			cout << i;
			cout << " ";
		}
	}
	
	

	return 0;
}
