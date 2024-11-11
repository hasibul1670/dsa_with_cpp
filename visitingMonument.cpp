#include <bits/stdc++.h>
using namespace std;
int num = 1;

void visitingMonument(int n)
{
    if (n > 0) {
        cout << n << " ";
        visitingMonument(n - 1); 
    }
}
void visitingMonument2(int n)
{
    if (n > 0) {
        cout << n << " ";
        visitingMonument2(n - 1); 
    }
}

int main()
{
  int t, x;
  cin >> t;
  while (t--) {
        int n;
        cin >> n;
        visitingMonument(n);
        visitingMonument2(n - 1);
        cout << endl;
    }
  return 0;
}