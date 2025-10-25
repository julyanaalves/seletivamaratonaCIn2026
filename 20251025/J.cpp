#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int mn = *min_element(a.begin(), a.end());
    int ans = 0;
    for (int x : a) if (x > mn) ++ans;
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
