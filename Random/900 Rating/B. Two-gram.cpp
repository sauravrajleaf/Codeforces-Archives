#include<bits/stdc++.h>

using namespace std;

int main() {
  unordered_map<string, int> hashMap;

  int n; cin >> n;
  string str; cin >> str;
  string s = "";
  for(int i = 0; i < n - 1; i++) {
    s += str[i];
    s += str[i + 1];

    hashMap[s]++;
    s = "";
  }
  int maxCnt = INT_MIN;
  string ans;

  for(auto &entry : hashMap) {
    // cout << entry.first << " " << entry.second << endl;
    if(entry.second > maxCnt) {
      maxCnt = entry.second;
      ans = entry.first;
    }
  }
  cout << ans << endl;


}