// Time Complexity - O(N), Single pass - Kadanes Algorithm variation
// Space Complexity - O(1)

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t; 
  cin >> t;
  
  while(t--) {
    int n; cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans = arr[0]; // the answer should be non empty subarray

    //This stores the sum of the minimum prefix sum found so far
    //in case of positives it will alaways be zero
    //in case of negatives it will point to the most negative prefix sum found so far
    int min_pref_sum = min(0, arr[0]);

    //Current running sum - same as in Kadanes Algorithm
    int sum = arr[0];

    for(int i = 1; i < n; i++) {

      //check parity
      if(abs(arr[i] % 2) == abs(arr[i-1] % 2)) {

        //update the minimum prefix sum and update the current running sum
        //as we will now look for a new subarray

        min_pref_sum = 0;
        sum = 0;
      }

      //else if it satisfies the condition of the parity

      //update the running sum
      sum += arr[i];

      //check the value for max subarray sum so far
      ans = max(ans, sum - min_pref_sum);

      //update the minimum prefix sum value
      min_pref_sum = min(min_pref_sum, sum);
    }

    cout<<ans<<endl;

  } 
  
   
}