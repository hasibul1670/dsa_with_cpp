
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

string addName(string a, string b)
{
    string temp = a;
    a = b;
    b = temp;
    return a + b;
}
int main()
{

    cout << "Sum --: " << add(5, 6) << endl;
    cout << addName("hasibul", "Islam") << endl;
    return 0;
}
