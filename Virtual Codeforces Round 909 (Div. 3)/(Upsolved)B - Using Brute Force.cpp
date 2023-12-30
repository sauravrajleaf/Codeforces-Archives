// BRUTE FORCE
// Time Complexity - O(N* cube root(N))
// Space Comeplexity - O(N)

// concept- check editorial
// Since k
//  is a divisor of n
// , there are O(n−−√3)
//  such k
// . We can enumerate all k, calculate a given value in O(n)
// , and take the maximum of them. Total complexity — O(n⋅n−−√3)
// .

// The editorial proposes that for any number N there are approximately cube root of N number of divisiors
// Using this hypothesis the brute force implementation is applied

#include<bits/stdc++.h>

using namespace std;



int main() {
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;

    vector<int> weights(n);

    for(int i = 0; i < n; i++) {
      cin >> weights[i];
    }
    // for(int i = 0; i < n; i++) {
    //   cout << weights[i]<<" ";
    // }

    
    long long ans = -1;

    for(int len = 1; len <= n; len++) {

      //This can be a possible answer as
      //we can put len number of boxes in exactly 
      // n/len number of trucks
      if(n % len == 0) {
        long long mx_wt = -1e18, min_wt = 1e18;
        

        //loop over each len pairs of weights and find the max and min wt
        for(int i = 0; i < n; i += len) {
          long long sum = 0;
          //checking for each len number of boxes
          for(int j = i; j < i + len; j++) {
            sum += weights[j];
          }
          //next step is to calculate the max and min wts
          mx_wt = max(mx_wt, sum);
          min_wt = min(min_wt, sum);
        }
        ans = max(ans, mx_wt - min_wt);
      }
    }

    cout<<ans<<endl;

  }
  return 0;
}