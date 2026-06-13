#include<bits/stdc++.h>
using namespace std;

int solveRepetitions(const string& data) {
    int maxLen = 0;
    for (int l = 0, r = 0; r < data.size(); r += 1) {
        if (data[r] != data[l]) {
            l = r;
        }
        maxLen = max(maxLen, r - l + 1);
    }
    return maxLen;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string dna;
    cin >> dna;
    cout << solveRepetitions(dna) << "\n";
    return 0;
}