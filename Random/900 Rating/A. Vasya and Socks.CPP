#include<bits/stdc++.h>

using namespace std;


int main() {
  int n, m; cin >> n >> m;

  int ans = n ;
  int day = 0;
  int maxD = 0 ;
  while(n > 0) {
    n -= 1;
    maxD++;
    day++;
    if(day % m == 0) {
      n += 1;
      day = 0;
    }

  }

  cout << maxD << endl;
}