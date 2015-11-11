#include <iostream>
#include <conio.h>

using namespace std;

int test(int value)
{
	if (value <= 1)
		return 0;
	else {
		if (value == 2)
			return 1;
		else {
			for (int i = 2; i < value; i++) {
				if (value%i == 0) {
					return 0;
					break;
				}
			}
			return 1;
		}
	}
}

int main()
{
	int start, end;
	cout << "Enter start point: ";
	cin >> start;
	cout << "Enter end point: ";
	cin >> end;
	if (start >= end)
		cout << "-> Input Error!" << endl;
	else {
		cout << "-> The prime numbers in the range [" << start << "," << end << "]:  ";
		for (int i = start; i <= end; i++) {
			if (test(i) == 1)
				cout << i << "  ";
		}
	}
	system("pause");
	return 0;
}