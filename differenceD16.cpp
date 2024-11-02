#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int *ptrA = &A;  
    int *ptrB = &B; 

    int difference =abs(*ptrA - *ptrB);
    cout << difference << endl;

    return 0;
}
