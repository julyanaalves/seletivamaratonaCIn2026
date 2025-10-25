#include <iostream>
#include <vector>
#include <random>
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    static mt19937 rng(random_device{}());
    uniform_int_distribution<int> dist(0, n - 1);
    int idx = dist(rng);

    cout << a[idx] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }

    return 0;
}