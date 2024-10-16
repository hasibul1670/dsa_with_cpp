
#include <iostream>
using namespace std;
int main()
{
    string name = "Hasib";
    cout << "Before Modify : " << name << endl;
    string *ptr = &name;

    *ptr = "Islam";
    cout << "After Modify : " << name << endl;

    return 0;
}
