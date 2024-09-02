#include <iostream>
using namespace std;
int main() {
	int x , count = 0;
	cin >> x;
	cout << "----------------------------------";
	for (int i = 1; i <= x; ++i)
	{
		if (x % i == 0)
		{
			count++;
		}
	}

	if (count == 2) {
		cout << x << " The entered number is a prime number.";
	} else {
		cout << x << " The number you entered is not a prime number. \n";
	}
	return 0;
}