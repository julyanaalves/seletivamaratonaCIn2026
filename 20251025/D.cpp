#include <iostream> 
#include <iomanip>
#include <cmath> 
#include <algorithm>
using namespace std;

static inline long double dist(long double x1, long double y1, long double x2, long double y2) {
	long double dx = x1 - x2, dy = y1 - y2;
	return sqrtl(dx*dx + dy*dy);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; if (!(cin >> t)) return 0;
	cout.setf(std::ios::fixed); cout << setprecision(10);
	while (t--) {
		long double Px, Py, Ax, Ay, Bx, By; // Points
		cin >> Px >> Py;
		cin >> Ax >> Ay;
		cin >> Bx >> By;

		// Relevant distances
		long double dOA = dist(0.0L, 0.0L, Ax, Ay);
		long double dOB = dist(0.0L, 0.0L, Bx, By);
		long double dPA = dist(Px, Py, Ax, Ay);
		long double dPB = dist(Px, Py, Bx, By);
		long double dAB = dist(Ax, Ay, Bx, By);

		long double w1 = max(dOA, dPA);       
		long double w2 = max(dOB, dPB);             
		long double w3 = max({dOA, dPB, dAB/2.0L});  
		long double w4 = max({dOB, dPA, dAB/2.0L});  

		long double ans = min(min(w1, w2), min(w3, w4));
		cout << (double)ans << '\n';
	}
	return 0;
}

