#include <iostream>
using namespace std;
// row = 4 so i=4 --> outer loop run in 4 times
// print in inner loop --> print in row wise
int main() {

	int x ;
	
	for (int i = 0; i < 4; ++i)
	{
		char ch  = 'A';
		for (int j = 0; j < 4; ++j)
		{
		cout << ch<< " ";
		ch = ch +1;
		}
		cout << endl;
	}
	return 0;
}