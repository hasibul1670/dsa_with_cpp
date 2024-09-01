#include <iostream>
using namespace std;

int main() {
//1,3,5,7,9
	//2i-1-->formula 
	int row = 5;
	for (int i = 1; i <= row; i++)
	{
		for (int j = i; j < row ; ++j)
		{
			cout <<  " ";
		}
		for (int j = 1; j <= 2 * i - 1; ++j)
		{
			cout << "*" ;
		}


		cout << endl;
	}

}