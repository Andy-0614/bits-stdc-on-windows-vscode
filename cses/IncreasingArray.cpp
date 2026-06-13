#include<bits/stdc++.h>
using namespace std;

long long solveIncreasingArray(const vector<int>& arr){
    long long increasingValue = 0;
    int currentMax = arr[0];
    if (arr.size() <= 1) {
        return 0;
    }
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < currentMax) {
            increasingValue += (currentMax - arr[i]);
        } else {
            currentMax = arr[i];
        }
    }
    return increasingValue;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr = vector<int>(n, 0);
    for (int i = 0; i < n; i += 1) {
        cin >> arr[i];
    }
    cout << solveIncreasingArray(arr) << "\n";
}