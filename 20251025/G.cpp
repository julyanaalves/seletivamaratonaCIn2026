#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; if(!(cin >> t)) return 0;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		for(int i=0;i<n;++i) cin >> a[i];

		int ans = 0;
		for(int i=0;i+1<n;++i){
			int x = a[i], y = a[i+1];
			int lo = min(x,y), hi = max(x,y);
			while( (long long)lo * 2 < hi ){
				lo *= 2;
				++ans;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

