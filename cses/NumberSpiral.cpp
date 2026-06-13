#include <bits/stdc++.h>
using namespace std;

long long mul_mod(long long a, long long b, long long mod) {
    a %= mod; if (a < 0) a += mod;
    b %= mod; if (b < 0) b += mod;

    return (a * b) % mod;
}

long long pow_mod(long long base, long long exp, long long mod) {
    if (exp == 0) return 1 % mod;

    base %= mod;
    if (base < 0) base += mod;

    if (exp < 0) {
        base = pow_mod(base, mod - 2, mod);
        exp = -exp;
    }

    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = mul_mod(res, base, mod);
        base = mul_mod(base, base, mod);
        exp /= 2;
    }
    return res;
}

long long solveNumberSpiral(long long y, long long x) {
    long long l = max(y, x); 
    long long sign_mod = pow_mod(-1, l, 3);
    long long sign = (sign_mod == 1) ? 1 : -1;
    long long v = l * l - l + 1 + sign * (y - x);  
    return v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i += 1) {
        long long y, x;
        cin >> y >> x;
        cout << solveNumberSpiral(y, x) << "\n";
    }
    return 0;
}