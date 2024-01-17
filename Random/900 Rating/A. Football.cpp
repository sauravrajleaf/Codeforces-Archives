// Problem Link - https://codeforces.com/problemset/problem/96/A
#include<bits/stdc++.h>

using namespace std;

int main() {
  string str; cin >> str;
  bool dng = false;
  int cnt_one = 0, cnt_zero = 0;

  for(auto &ch : str) {

    if(ch == '1') {
      cnt_one++;
      cnt_zero = 0;
    }
    else {
      cnt_zero++;
      cnt_one = 0;
    }

    if(cnt_one >= 7 || cnt_zero >= 7) {
      dng = true;
      break;
    }
  }

  if(dng) cout << "YES" << endl;
  else cout << "NO" << endl;

  
}