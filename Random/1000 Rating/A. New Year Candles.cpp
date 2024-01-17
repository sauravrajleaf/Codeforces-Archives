#include<bits/stdc++.h>

using namespace std;

int main() {
  int a; cin >> a;
  int b; cin >> b;

  int ans = a;

  int out = a;
  int cnt = 0;

  while(out >= b) {
    out -= b;
    cnt++;
    out++;
  }

  ans += cnt;

  cout << ans << endl;

  
}