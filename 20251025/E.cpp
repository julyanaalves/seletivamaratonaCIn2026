#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
		vector<long long> a(n);
		for(auto &x: a) cin >> x;

		if(k == 1){
			cout << ( (n - 1) / 2 ) << '\n';
		} else {
			// k > 1: answer is the count of already "too tall" piles
			int cnt = 0;
			for(int i = 1; i + 1 < n; ++i){
				if(a[i] > a[i-1] + a[i+1]) ++cnt;
			}
			cout << cnt << '\n';
		}
}
int main(){
	ios::sync_with_stdio(false); 
	cin.tie(nullptr);

	int t; // number of test cases
	if(!(cin >> t)) return 0;
	while(t--){
		solve();
	}
	return 0;
}

