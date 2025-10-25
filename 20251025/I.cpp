#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s; // format hh:mm in 24-hour
    cin >> s;

    int hh = stoi(s.substr(0, 2)); // hours
    int mm = stoi(s.substr(3, 2)); // minutes

    string AMPM = (hh < 12 ? "AM" : "PM"); // determine AM/PM
    int h12 = hh % 12; // convert to 12-hour format
    if (h12 == 0) h12 = 12; // 12 for midnight/noon

    cout << (h12 < 10 ? "0" : "") << h12 << ':'
    << (mm < 10 ? "0" : "") << mm
    << ' ' << AMPM << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if(!(cin >> t)) return 0;

    while (t--) {
        solve();
    }

    return 0;
}