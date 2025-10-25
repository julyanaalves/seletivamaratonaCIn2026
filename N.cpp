#include <iostream>
using namespace std;

void solve() {
    long long y, x; 
    cin >> y >> x;
    long long ans;
    if (x >= y) {
        if (x % 2 == 1) { // x ímpar
            ans = x * x - y + 1;
        } else { // x par
            ans = (x - 1) * (x - 1) + y;
        }
    } else { // y > x
        if (y % 2 == 0) { // y par
            ans = y * y - x + 1;
        } else { // y ímpar
            ans = (y - 1) * (y - 1) + x;
        }
    }
        cout << ans << '\n';
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