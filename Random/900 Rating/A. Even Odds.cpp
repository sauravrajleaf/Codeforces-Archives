// Problem Link - https://codeforces.com/problemset/problem/318/A

#include<bits/stdc++.h>

using namespace std;

int main() {
  long long n, k; 
  cin >> n >> k;

  //check if the given n is odd
  long long cnt_odd = n & 1 ? (n / 2) + 1 : n / 2;

  if(k <= cnt_odd) {
    cout << (2 * k - 1) << endl;
  }
  else{
    long long even_idx = k - cnt_odd;

    cout << (2 * even_idx) << endl;
  }
  
}