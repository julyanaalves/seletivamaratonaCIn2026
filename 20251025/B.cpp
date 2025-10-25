#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); //optimize input/output

    int t;
    cin >> t;
    if (!(cin >> t)) return 0; // Check for valid input

    while (t--){
        int a, b, n = 0;
        cin >> a >> b;

        if (a == b){ // a == b
            cout << 0 << "\n";
            break;
        } else if (a < b){
            int d = b - a;
            cout << (d % 2 == 1 ? 1 : 2) << "\n";
        } else {
            int d = a - b;
            cout << (d % 2 == 0 ? 1 : 2) << "\n";
        }

    }
    return 0;
}
