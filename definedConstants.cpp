#include <iostream>

using namespace std;

#define age 29



int main() {

	int b;
	int billy[5] = { 1, 2, 3, 4, 5 };
	int a = (b = 3, b + 2);

	Pesho pesho;

	cout << pesho.area();
	return 0;
}
class Pesho {
	int a, b;

public:

	string area() { return "Hello, it's me!"; }

};

class CRectangle {
	int width, height;
public:
	CRectangle(int, int);
	int area() { return (width * height); }
};
CRectangle::CRectangle(int a, int b) {
	width = a;
	height = b;
}
