#include <iostream>
using namespace std;
// 3
// 2
// 1
// 0
int main() {
	int n = 4 ;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n-1; ++j)
		{
			cout << " ";
		}
		for (int w = 0; w < i + 1; ++w)
		{
			cout << w+1<<" ";
		}
		for (int k = 0; k < i ; ++k)
		{
			cout << k+1 <<" ";
		}
		cout << endl;
	}

}