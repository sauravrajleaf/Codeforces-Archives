// This approach is very common to the brute force, except summing again and again
// here the sum is kept in the prefix array and used over and over which saves time
// but at the cost of extra space

// Time Complexity - O(N*LogN)
// Space Complexity - O(2N), 2 vectors

#include <bits/stdc++.h>
using namespace std;

int main() {

        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> a(n);
                for (int i = 0; i < n; i++) cin >> a[i];
                vector<int64_t> pref(n + 1);
                for (int i = 0; i < n; i++) pref[i + 1] = pref[i] + a[i];

                // for (int i = 1; i <= n; i++) cout<<pref[i]<<" ";
                // cout<<endl;
                int64_t res = -1;
                for (int i = 1; i <= n; i++) {
                        if (n % i) continue;
                        int64_t nim = 1e18, xam = -1e18;
                        for (int j = i; j <= n; j += i) {

                                nim = min(nim, pref[j] - pref[j - i]);
                                xam = max(xam, pref[j] - pref[j - i]);
                        }
                        res = max(res, xam - nim);
                }
                cout << res << '\n';
        }
}