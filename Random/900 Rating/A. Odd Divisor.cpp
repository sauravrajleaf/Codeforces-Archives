#include<bits/stdc++.h>

using namespace std;

int main() {

  int t; cin >> t;

  while(t--) {
    long long n; cin >> n;

    //This loop checks if the given number is a power of 2
    //if it is it means it does not have any odd divisor and ultimately n will be 1 
    //and will exit the loop
    while(n % 2 == 0) {
      n = n / 2;
    }//log2N

    //n will be not equal to 1 only if originally given n was not a power of 2 
    if(n != 1) cout << "YES" << endl;

    //else n will be 1 if it was power of 2
    else cout << "NO" << endl;
  } 

  return 0;
}

// even ∗ even = even;
// even ∗ odd = even;
// odd ∗ even = even;
// odd ∗ odd = odd . 
// There is only one even prime number — 2
// . So, if a number has no odd divisors, then it must be a power of two. 
// To check this fact, for example, you can divide n by 2 as long as it is divisible. 
// If at the end we got 1 , then n  — the power of two. 