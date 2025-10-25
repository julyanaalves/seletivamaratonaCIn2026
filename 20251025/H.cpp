#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n; cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; ++i) cin >> a[i];

		long long sumAbs = 0;
		vector<long long> b; b.reserve(n);
		for (long long x : a) {
			sumAbs += (x < 0 ? -x : x);
			if (x != 0) b.push_back(x);
		}

		int ops = 0;
		for (size_t i = 0; i < b.size(); ++i) {
			if (b[i] < 0 && (i == 0 || b[i-1] > 0)) ++ops;
		}

		cout << sumAbs << ' ' << ops << '\n';
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

