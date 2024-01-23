#include<bits/stdc++.h>

using namespace std;


int main() {

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    
    int cnt_2021 = n % 2020;

    int cnt_2020 = ((n - cnt_2021) / 2020) - cnt_2021;

    if(cnt_2020 >= 0 && 2020 * cnt_2020 + 2021 * cnt_2021 == n) cout << "YES" << endl;
    
    else cout << "NO" << endl;

  }
  
  return 0; 
}