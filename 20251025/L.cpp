#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

void solve() { // solve one test case
    int n; // number of elements
    cin >> n;

    vector<long long> a(n); // input array
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<long long> nonpos;
    nonpos.reserve(n); // store non-positive numbers

    long long smallestPos = numeric_limits<long long>::max(); // track smallest positive number
    
    for (long long x : a) {
        if (x <= 0) nonpos.push_back(x); // store non-positive numbers
        else smallestPos = min(smallestPos, x); // track smallest positive
    }

    if (nonpos.empty()) { // no non-positive numbers
        cout << 1 << '\n';
        return;
    }

    sort(nonpos.begin(), nonpos.end()); // sort non-positive numbers
    long long minDiff = numeric_limits<long long>::max(); // find minimum difference
    for (size_t i = 1; i < nonpos.size(); ++i) { // start from second element
        minDiff = min(minDiff, nonpos[i] - nonpos[i-1]); // update minimum difference
    }

    int ans = (int)nonpos.size(); // base answer is count of non-positive numbers
    if (smallestPos != numeric_limits<long long>::max() && smallestPos <= minDiff) {
        ++ans;
    } // include smallest positive if condition met
    cout << ans << '\n'; // output the answer
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}
