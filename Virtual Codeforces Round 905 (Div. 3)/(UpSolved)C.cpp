
// GIVEN - two integers n
//  and k
//  (2≤n≤105
// , 2≤k≤5
// )
#include<bits/stdc++.h>

using namespace std;


int main() {
  int t; cin>>t;
  while(t--) {
    int n;cin>>n;

    int k;  cin >> k;

    vector<int> arr(n);
    int cnt_even = 0 ;
    
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }

      //this part handles cases for k = 1, 2, 3, 5
      int ans = INT_MAX;

      for(auto &element : arr) {

        if(element % 2 == 0) cnt_even++;

        //by modRes value the number is not completely divisble
        int modRes = element % k;
        // cout << "modRes " << modRes << endl;
        //how to make the number completely divisble?
        //simple, take the mod value and add it with the left value
        // suppose we are given k
        // we get x as mod value, so we know that if we add (k - x) to x
        //it will become completely divisble by k
        //so, x + (k - x), (k - x) is the number of operations we need to do on an element
        //so basically we need to find the min value of this (k - x)

        int currMin = modRes > 0 ? (k - modRes) : 0;
        ans = min(ans, currMin);
      }

      //this case is specially for k = 4
      if (k == 4) {
        //if there are more than 2 even numbers present then we can say for sure 
        //that we don't need to update any values
        if (cnt_even >= 2)
            ans = 0;

        //if there is one even number present, then we just need one more number to be even
        //to make it divisible by 4
        else if (cnt_even == 1)
            ans = min(ans, 1);
        //if there are no even numbers present then we need atleast 2 numbers to be even
        else
            ans = min(ans, 2);
    }

      cout << ans << endl;
    
  }

  return 0;
}