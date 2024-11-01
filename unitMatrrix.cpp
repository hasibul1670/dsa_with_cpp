#include <bits/stdc++.h>
using namespace std;

bool isUnitMatrix(int matrix[][100], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                // Check diagonal elements
                if (matrix[i][j] != 1) {
                    return false;
                }
            } else {
                // Check non-diagonal elements
                if (matrix[i][j] != 0) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int matrix[100][100]; 
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    if (isUnitMatrix(matrix, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
