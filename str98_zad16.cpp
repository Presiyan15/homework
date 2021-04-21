#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

	/*int  k, n;

	int counter = 0;

	cin >> k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;
		

		string checker = to_string(number);
		if (checker.length() == k) {
			counter++;
		}
	
		
	}

	cout << counter;
	*/
	map<string, int> pesho{ {"lkf", 3 } };

	

	//pesho["Dimo"] = 4;

	

	for (auto i : pesho) {
		cout << i.first;
	}
	return 0;
}