
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int &ref = a; // Reference to 'a'

    cout << "Reference Value: " << ref << endl;

    a = 10; // Changing 'a' will affect 'ref' too
    cout << "After changing 'a', ref = " << ref << endl;

    return 0;
}
