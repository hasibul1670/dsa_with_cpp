#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, X;
    cin >> N >> M >> X;

    
    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    unordered_map<int, int> countMap;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            countMap[matrix[i][j]]++;
        }
    }

    for (int i = 0; i < X; ++i) {
        int number;
        cin >> number;
        cout << countMap[number] << endl; 
    }

    return 0;
}
