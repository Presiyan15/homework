#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int input;

	cin >> input;


	int arr[100];//ne go gledai towa che inache trqbwa da polzwam vektori

	

	for (int  i = 0; i < input; i++)
	{
		cin >> arr[i];
	}

	for (int  i = 0; i < input; i++)
	{
		for (int  k = 0; k < input; k++)
		{
			if ((arr[k] > arr[k + 1])&&(k!=input-1))
			{
				int secondNumber = arr[k + 1];

				arr[k + 1] = arr[k];
				arr[k] = secondNumber;
			}
		}

	}
	for (int  i = 0; i < input; i++)
	{
		(i==input-1)?cout<<arr[i]:cout << arr[i] << " ";
	}
	


	return 0;
}
