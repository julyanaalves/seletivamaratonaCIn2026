#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    long long S = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        S += x;
    }

    // We need minimal k such that (n - k) divides S.
    // Equivalently, find the largest divisor m of S with m <= n, then k = n - m.
    long long best = 1; // since S > 0, 1 always divides S
    long long r = (long long) sqrt((long double) S);
    for (long long d = 1; d <= r; ++d) {
        if (S % d == 0) {
            long long d1 = d;
            long long d2 = S / d;
            if (d1 <= n && d1 > best) best = d1;
            if (d2 <= n && d2 > best) best = d2;
        }
    }

    cout << (n - best) << '\n';
    return 0;
}
