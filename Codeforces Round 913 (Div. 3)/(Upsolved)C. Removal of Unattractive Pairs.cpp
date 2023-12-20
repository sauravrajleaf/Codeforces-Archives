#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cnt(26, 0); // Array to count frequency of each character
    string s;
    cin >> s;

    for (char c : s) {
        cnt[c - 'a']++; // Increment the count of the character
    }

    int mx = *max_element(cnt.begin(), cnt.end()); // Find the max frequency
    cout << max(n % 2, 2 * mx - n) << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve(); // Solve each test case
    }

    return 0;
}
