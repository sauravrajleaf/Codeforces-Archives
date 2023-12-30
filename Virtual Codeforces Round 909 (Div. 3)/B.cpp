#include<bits/stdc++.h>

using namespace std;

int ans = 0;

bool checkPossible(vector<int>& weights, int n, int k) {
  //number of trucks - n/k
  
  int cnt = 0 ;
  int truck_cnt = 0;

  int max_wt =  INT_MIN , min_wt = INT_MAX ;
  int calc_wt = 0;

  for(int i = 0; i < n; i++) {
        
    calc_wt += weights[i];
    cnt++;
    // cout<<"calc_wt "<<calc_wt<<endl;
    // cout<<"max_wt_temp "<<max_wt_temp<<" min_wt_temp "<<min_wt_temp<<endl;
    if(cnt == k) {
      // cout<<"calc_wt "<<calc_wt<<endl;
      max_wt = max(max_wt, calc_wt);
      min_wt = min(min_wt, calc_wt);

      // cout<<"max_wt "<<max_wt<<" "<<"min_wt "<<min_wt<<endl;
      calc_wt = 0 ;
      cnt  = 0;
      truck_cnt++;
    }
    // cout<<"cnt "<<cnt<<endl;
  }
  // cout<<"trucks "<<truck_cnt<<endl;
  if(truck_cnt != ceil(n/k) && n%k != 0) return false;

  else {
    ans = max(ans, abs(max_wt - min_wt));
    return true;
  }
  
}


int main() {
  int t; cin>>t;
  while(t--) {
    int n;cin>>n;

    vector<int> weights;

    for(int i = 0; i < n; i++) {
      int data;
      cin>>data;
      weights.push_back(data);
    }

    int low = 1 , high = n;

    while(low <= high) {

      //mid - denotes the number of boxes(k) that should be kept in each truck
      int mid = low + (high - low)/2;

      // cout<<"low "<<low<<" high "<<high<<endl;
      // cout<<"mid "<<mid<<endl;
      if(checkPossible(weights, n, mid)) {
        
        high = mid - 1;
        
      }else {
        low = mid + 1;
      }

    }
    cout<<"ans " <<ans<<endl;
    ans = 0;
  }
  return 0;
}