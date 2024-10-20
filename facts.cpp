#include <iostream>
using namespace std;

int facto(int n) {
    if (n == 0)
        return 1;
    else
        return n * facto(n - 1);
}

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Factorial of " << i << " is: " << facto(i) << endl;
    }
    return 0;
}
