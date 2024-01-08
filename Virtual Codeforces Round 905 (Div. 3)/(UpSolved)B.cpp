// Problem Link - https://codeforces.com/contest/1883/problem/B

//Good Editorial

// Time Complexity - O(N)
// Space Complexity - O(N) - using a hashmap

#include<bits/stdc++.h>

using namespace std;


int main() {
  int t; cin>>t;
  while(t--) {
    int n;cin>>n;

    int k; cin >> k;

    string str; cin >> str;

    unordered_map<char, int> hashMap;

    for(int i = 0; i < n; i++) {
      hashMap[str[i]]++;
    }
    int cnt_odd_letters = 0;
    for(auto &element : hashMap) {
      int key = element.first;
      int value = element.second;

      if(value > 0 && (value & 1)) {
        cnt_odd_letters++;
      }
    }
      if(cnt_odd_letters > k + 1) cout << "NO" << endl;
      else cout << "YES" << endl;
  }

  return 0;
}