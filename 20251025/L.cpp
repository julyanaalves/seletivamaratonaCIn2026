#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<long long> nonpos; nonpos.reserve(n);
    long long smallestPos = numeric_limits<long long>::max();
    for (long long x : a) {
        if (x <= 0) nonpos.push_back(x);
        else smallestPos = min(smallestPos, x);
    }

    if (nonpos.empty()) {
        cout << 1 << '\n';
        return;
    }

    sort(nonpos.begin(), nonpos.end());
    long long minDiff = numeric_limits<long long>::max();
    for (size_t i = 1; i < nonpos.size(); ++i) {
        minDiff = min(minDiff, nonpos[i] - nonpos[i-1]);
    }

    int ans = (int)nonpos.size();
    if (smallestPos != numeric_limits<long long>::max() && smallestPos <= minDiff) {
        ++ans;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}
