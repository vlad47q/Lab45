// Lab45.cpp
// Скоропад Владислав
// Лабораторна робота № 4.
// Попадання у плоску фігуру.
// Варіант 11

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main() {

	double x, y, R;
	bool isTrue;

	srand((unsigned)time(NULL));

	cout << "R = "; cin >> R;


	for (int i = 0; i < 10; i++) {
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		isTrue = ((x > 0 && y > 0 && x * x + y * y <= R * R) || (x < 0 && y < 0 && y >= -x - R));

		if (isTrue) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	cout << endl << fixed;


	for (int i = 0; i < 10; i++) {
		x = 2 * R * rand() / RAND_MAX - R;
		y = 2 * R * rand() / RAND_MAX - R;

		isTrue = ((x > 0 && y > 0 && x * x + y * y <= R * R) || (x < 0 && y < 0 && y >= -x - R));

		if (isTrue) {
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		}
		else {
			cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	}

	return 0;
}
