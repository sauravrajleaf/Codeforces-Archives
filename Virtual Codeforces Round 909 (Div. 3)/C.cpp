#include<bits/stdc++.h>

using namespace std;


int main() {
  int t; cin>>t;
  while(t--) {
    int n;cin>>n;

    vector<int> nums;

    for(int i = 0; i < n; i++) {
      int data;
      cin>>data;
      nums.push_back(data);
    }
    if(n == 1) cout<<nums[0]<<endl;

    else {
      int max_sum = 0, temp_sum = 0;
      int cntOdd = 0, cntEven = 0;
      for(int  i = 0; i < n; i++) {

        if(( cntOdd == 1 && cntEven == 0 && !(abs(nums[i]) & 1))  ||  (cntOdd == 0 && cntEven == 1 && (abs(nums[i]) & 1))){
          temp_sum += nums[i];
          
        }
        else  {
          temp_sum = 0;
          temp_sum += nums[i];
        }


        if(abs(nums[i]) & 1) {
          cntOdd = 1;
          cntEven = 0;
        }
        else {
          cntEven = 1;
          cntOdd = 0;
        }

        max_sum = max(max_sum, temp_sum);
        if(temp_sum < 0) {
          temp_sum = 0 ;
          cntEven = 0;
          cntOdd = 0;
        }
        // cout<<max_sum<<endl;
      }
      cout<<max_sum<<endl;
    }

  }

  return 0;
}