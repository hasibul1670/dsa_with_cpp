
#include <iostream>
using namespace std;
void print(string name, int age);

int main()
{
    print("Hasibul", 45);
    print("Islam", 65);
    print("Rifat", 78);
    return 0;
}

void print(string name, int age)
{
    cout << "Hello World! " << name << "" << age << endl;
}