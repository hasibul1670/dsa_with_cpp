#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;  
    cin >> T;

    while (T--) {
        string N;
        cin >> N;
        for (int i = N.size() - 1; i >= 0; --i) {
            cout << N[i];
            if (i != 0) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
