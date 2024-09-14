#include <iostream>
using namespace std;

int main() {

	int nums[] = {12, 34, 24, 65, 23, 98, 12, 34};
	int size = sizeof(nums) / sizeof(nums[0]);
	int item = 23;
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (item == nums[i]) {
			count++ ;
			cout << "Item Found in " << i  << " Position" << endl;
		}
	}
	if (count == 0) {
		cout << count << "Item Not Found Array" << endl;
	}
}