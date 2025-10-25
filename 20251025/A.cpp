#include <bits/stdc++.h> // includes all standard headers
using namespace std; // using the standard namespace

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0; 
    
    while (t--) { 
        //declare and read input values
        int n; 
        string s;
        cin >> n >> s;

        vector<bool> seen(26, false); // keep track of seen characters
        bool ok = true; // flag to check if the string is valid
        char prev = s[0]; // previous character

        for (int i = 1; i < n && ok; ++i) {
            if (s[i] != prev) {
                seen[prev - 'A'] = true; // mark previous character as seen
                if (seen[s[i] - 'A']) { // if current character was seen before
                    ok = false; // invalid string
                    break; // exit loop
                }
                prev = s[i]; // update previous character
            }
        }

        cout << (ok ? "YES" : "NO") << '\n'; // if valid, print YES else NO
    }
    return 0;
}