#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; if(!(cin >> t)) return 0;
	while(t--){
		int n; string s; 
		cin >> n;
		cin >> s; // length should be 4*n

		int cntA = 0, cntB = 0, cntC = 0, cntD = 0;
		for(char c : s){
			if(c == 'A') ++cntA;
			else if(c == 'B') ++cntB;
			else if(c == 'C') ++cntC;
			else if(c == 'D') ++cntD;
		}
        
		int ans = 0;
		auto cap = [&](int x){ return x < n ? x : n; };
		ans += cap(cntA);
		ans += cap(cntB);
		ans += cap(cntC);
		ans += cap(cntD);

		cout << ans << '\n';
	}
	return 0;
}

