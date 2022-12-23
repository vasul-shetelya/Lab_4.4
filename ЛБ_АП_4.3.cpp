﻿#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, a, b, c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "F= "; cin >> F;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
            if (c < 0 && b != 0)
			F = a * x*x + b * b*x;
		else
			if (c > 0 && b == 0)
				F = (x + a) / (x + c);
			else
				F = x / c;
		cout << "|" << setw(7) << setprecision(2) << F
			<< " |" << setw(10) << setprecision(3) << x
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
