// Problem Link - https://codeforces.com/problemset/problem/1374/B
// Good Editorial - https://codeforces.com/blog/entry/79517

#include<bits/stdc++.h>

using namespace std;

int main() {
  int t; cin >> t;

  while(t--) {
    int n; cin >> n;
    int temp = n;;

    int cnt2 = 0 , cnt3 = 0;
    
    //count the number of 3s in the factorisation of n
    while(n % 3 == 0) {//logN
      n = n / 3;
      cnt3++;
    }
    //count the number of 2s in the factorisation of n
    while(n % 2 == 0) {//logN
      n = n / 2;
      cnt2++;
    }

    // if n != 1 it means the number contains prime factors
    //other than 2 or 3 and given in the question we can only
    //handle numbers who have 2 or 3 in their prime factors
    if(n == 1 && cnt2 <= cnt3) {

      //check hardcopy notes or notion doc to understand how we reached
      //to this formula
      cout << 2 * cnt3 - cnt2 << endl;
    }
    else cout << -1 << endl;

    
  }

  return 0;
}