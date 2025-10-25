#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if(!(cin >> t)) return 0;
    while(t--){
        int n, k; cin >> n >> k;
        vector<long long> a(n);
        for(int i=0;i<n;++i) cin >> a[i];
        vector<int> b(k);
        for(int i=0;i<k;++i) cin >> b[i];

        sort(a.begin(), a.end(), greater<long long>()); // descending
        sort(b.begin(), b.end()); // ascending

        long long sum_all = accumulate(a.begin(), a.end(), 0LL);
        long long saved = 0;

        // Greedy: assign groups using the largest remaining items to maximize the group's minimum
        // Sort b ascending; for each voucher of size x, the group's minimum will be a[idx + x - 1]
        // where idx is the current front pointer among unused (largest-first) items.
        int idx = 0;
        for (int x : b) {
            if (idx + x - 1 >= n) break; // not enough items left to use this voucher
            saved += a[idx + x - 1];
            idx += x;
        }

        long long cost = sum_all - saved;
        cout << cost << '\n';
    }
    return 0;
}
