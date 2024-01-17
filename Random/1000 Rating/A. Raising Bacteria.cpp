#include<bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  int cnt = 1;
  int last = 0;

  while(cnt < n) {
    last = cnt;
    cnt = cnt * 2;
  }
  cout << "cnt " << cnt << " last " << last << endl;
  if(cnt == n) cout << 1 << endl;
  else cout << (n - last) + 1 << endl;
}