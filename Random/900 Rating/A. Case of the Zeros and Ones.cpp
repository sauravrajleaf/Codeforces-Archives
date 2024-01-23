#include<bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  string str; cin >> str;

  int cnt_min_zero = 0, cnt_min_one = 0;

  for(int i = 0; i < str.size(); i++) {
    if(str[i] == '1')cnt_min_one++;
    else cnt_min_zero++;
  }

  int subtract = min(cnt_min_one, cnt_min_zero);
  
  cout << str.size() - 2 * subtract << endl;
}