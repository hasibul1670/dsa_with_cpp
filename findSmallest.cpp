#include <iostream>
using namespace std;

int main() {
	int nums[] = {12, 14, 6, 76, 23, 98,-9} ;
	int len = sizeof(nums) / sizeof(nums[0]);
	int smallest = nums[0];
	int largest = nums[0];
	for (int i = 0; i < len; ++i)
	{
		if (smallest > nums[i])
		{
			smallest = nums[i];
		}
		if (largest < nums[i])
		{
			largest = nums[i];
		}
	}

	cout << "Smallest Element : " << smallest << endl;
	cout << "Largest Element : " << largest << endl;
	return 0;
}