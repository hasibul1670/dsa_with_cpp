#include <iostream>
using namespace std;

int main() {

	int x[] = {23, 45, 56, 27, 88};
	cout << "-->" << x[1] << endl;

	string a[] = {"abc", "dcv", "hasib"};
	cout << "String" << " " << a[2];
	string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
	for (int i = 0; i < 5; i++) {
		cout << i << " = " << cars[i] << "\n";
	}
}