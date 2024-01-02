// One thing i noticed was we can use unordered map here because we are not interested in the
// sorting of keys

// but there  are some complicated cases and it is giving TLE on test 20, because there might be internal collisions
// so its to safe to use ordered map here 

// Time Complexity - O(NLogN)
// Space Complexity - O(N)

#include<bits/stdc++.h>

using namespace std;


int main() {
  int t; cin>>t;
  while(t--) {
    int n;
    cin >> n;

    vector<int> arr(n);

    // for(int i = 0; i < n; i++) cin >> arr[i];

    for(int& x : arr) cin>> x;

    long long ans = 0;

    map<int, int> cnt;

    //One interesting thing that i learnt from this part of code is
    //how cleverly we are counting the number of pairs using a map in O(NlogN)
    //which is usually done in O(N^2)
    //This optimisation and the way of thinking is awesome!!

    //Using map to calculate the number of pairs for elements which satisfies our conditions
    for(int i = 0; i < n; i++) {

      //counting the number of duplicates as we go ahead in the array
      ans += cnt[arr[i]];

      if(arr[i] == 1) ans += cnt[2];

      else if(arr[i] == 2) ans += cnt[1];

      cnt[arr[i]]++;
    }

    cout<<ans<<endl;

  }
  return 0;
}