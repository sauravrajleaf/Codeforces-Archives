// The implementation is as simple as it can _beep
// The key lies in understanding how we are making the best choice

// We have to think in a way
// 1. How we can make the best choice at the current level
// 2. At each level, one thing that is mandatory is to first finish it
// 3. after finishing we have few options
//   1. sum of current level a[i] -> mandatory
//   2. now the options -
//     One thing is for sure is that we will take b[i] of only that idx
//     which will given max sum/points 
//     so at every level completion we will keep summing the points for current level
//     and we wil be storing the this sum + the remaining K which can be finished using max b[i]
//     and as there is no option other than to keep moving forward in the game
//     we will keep checking this until n or k gets over

//     its very intuive but it handles all the worst possible edgecaeses anyone can think of


//     The key lies in thinking about the current level max at each iteration
//     eventually this will lead to the answer.

//     There is no point of thinking ahead, you first have to think of the current best max/point

//Dry run in hardcopy

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int res = 0, sum = 0, mx = 0;
        for (int i = 0; i < min(n, k); ++i) {
            sum += a[i];
            mx = max(mx, b[i]);
            res = max(res, sum + mx * (k - i - 1));
        }

        cout << res << endl;
    }

    return 0;
}
