#include<bits/stdc++.h>

using namespace std;


int main() {
  int t; cin>>t;
  while(t--) {
    int n;cin>>n;

    int k;  cin >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> mult_table;
    int idx =  0;

    while( k * idx < 100) {
      mult_table.push_back(k * idx);

      idx++;
    }
    

    priority_queue<int, vector<int>, greater<int>> minHeapQ;
    bool check = false;

    for(int num : arr) {
      int lowerInd = lower_bound(mult_table.begin(), mult_table.end(), num) - mult_table.begin();
      int upperInd = upper_bound(mult_table.begin(), mult_table.end(), num) - mult_table.begin();
      // cout<<mult_table[lowerInd]<<" "<<num<<endl;
      if(mult_table[lowerInd] == num) {
        cout << 0 << endl;
        check = true;
        break;
      }

      else {
        int diff = mult_table[upperInd] - num;
        // cout<< mult_table[upperInd] << " " << num << endl;
        // cout<<"diff "<<diff<<endl;
        minHeapQ.push(diff);
      }
    }


    if(!check) {
      cout<<minHeapQ.top()<<endl;
    }
    
  }

  return 0;
}