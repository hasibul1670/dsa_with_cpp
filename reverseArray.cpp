#include <iostream>
using namespace std;

void reverseArray (int x[], int size) {
	int start = 0;
	int end = size - 1;
	while (start < end) {
		swap(x[start], x[end]);
		start++;
		end--;
	}
}
int main() {
	int x[] = {1, 2, 3, 4, 5};
	int size = 5;
	reverseArray(x, size);
	for (int i = 0; i < size; ++i)
	{
		cout << x[i] << " " ;
	}
}