#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = 3.14159265358979323846;

int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	double xp, xk, dx;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(4) << " |"
		<< setw(7) << "y" << setw(5) << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= -7 - R)
			y = R;
		else
			if (-7 - R < x && x <= -7 + R)
				y = -sqrt(R * R - x * x - 14 * x - 49) + R;
			else
				if (-7 + R < x && x <= -4)
					y = R;
				else
					if (-4 <= x && x < 0)
						y = (R / 4) * (x + 8);
					else
						if (0 < x && x <= pi)
							y = sin(x);
						else
							y = x - pi;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}
