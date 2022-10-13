#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << "x = "; cin >> x;

	A = 2 * x - 13, 5;

	if (x < -1)
		B = sin(x) / (1 + cos(x) * cos(x));
	if (-1 <= x && x <= 1)
		B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x)) - 1;
	if (x > 1)
		B = log10(x + 0.4);

	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;

	if (x < -1)
		B = sin(x) / (1 + cos(x) * cos(x));
	else
		if (x > 1)
			B = log10(x + 0.4);
		else
			B = cos(sin(x) * sin(x)) * cos(sin(x) * sin(x)) - 1;
	
	y = A - B;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}



