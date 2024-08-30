#include <iostream>
using namespace std;
int main() {
	int x, y, z ;
	cin >> x >> y >> z;
	if (x > y && x > z) {
		cout << "MAX --> " << x;
	} else if (y >  z) {
		cout << "MAX-->"<<y;
	}
	else {
		cout   << "MAX-->" << z;
	}
	return 0;
}

