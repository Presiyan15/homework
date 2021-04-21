#include <iostream>
#include <vector>

using namespace std;

void Example(int number)
{
	cout << number;
}
int main()
{
	
	vector<int> kraso;

	int size;

	cin >> size;

	for  (int i = 1; i <= size ; i++)
	{
		int number;
		cin >> number;
		
		kraso.push_back(number);
	} 

	for (size_t k = 0; k < size; k++)
	{
		for (int i = 0; i < size; i++)
		{
			if (i == size - 1)
			{
				continue;
			}

			if (kraso[i] > kraso[i + 1])
			{
				int firstNumber = kraso[i];

				kraso[i] = kraso[i + 1];
				kraso[i + 1] = firstNumber;
			}
		}
	}

	for  (int i  = 0; i < size; i++)
	{
		cout << kraso[i] << " ";
	}
	
	
	return 0;
}