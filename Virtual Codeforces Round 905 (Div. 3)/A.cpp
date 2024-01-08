#include<bits/stdc++.h>

using namespace std;


int main() {
  int t; cin>>t;
  while(t--) {
    string s;
    cin >> s;

    vector<int> arr(12);

    for(int i = 1; i < 11; i++) {
      arr[i] = i;
    }
    
    int ans = 0;
    int init = 1;
    int time = 0;
    for(char c : s) {
      
      int cursor = c - '0';
      // cout<<cursor<<endl;

      if(cursor == 0) cursor = 10;
      time += abs(arr[init] - arr[cursor]) + 1;

      // cout<<arr[init]<<" cursor "<<arr[cursor]<<endl;
      init = arr[cursor];
    }

    cout<<time<<endl;
  }

  return 0;
}