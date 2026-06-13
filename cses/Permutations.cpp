#include<bits/stdc++.h>
using namespace std;

vector<int> solvePermutations(int n) {
    vector<int> result;
    if (n == 1) {
        result = vector<int>(1, 1);
        return result;
    }
    if (n == 2) {
        return result;
    }
    if (n == 3) {
        return result;
    }
    for (int i = 2; i <= n; i += 2) {
        result.push_back(i);
    }
    for (int i = 1; i <= n; i += 2) {
        result.push_back(i);
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> result = solvePermutations(n);
    if (result.size() == 0) {
        cout << "NO SOLUTION" << "\n";
        return 0;
    }
    for (int i = 0; i < result.size(); i += 1) {
        cout << result[i] << ((i == result.size() - 1) ? "\n" : " ");
    }
    return 0;
}