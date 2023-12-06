// Problem Link -https://codeforces.com/contest/1682/problem/A 


//The idea is to keep count of same chars from the mid of the string
//As the given string is a palindrome the other will also have the same configuration
//So the iteration only needs to be done for one side and that will be enough


// Time Complexity - O(N)
// Space Complextiy - O(1)

#include <bits/stdc++.h>


using namespace std;

int main() {
  int t;cin>>t;
  // cout<<"t "<<t<<endl;
  while(t--) {
    int n;cin>>n;
    // cout<<"n "<<n<<endl;
    string s;cin>>s;

    int cnt = 0 ;
    for(int i=(n-1)/2; i>=0; i--) {
      // cout<<"i "<<i<<endl;
      if(s[i] == s[(n-1)/2]) {
        cnt++;
      }

      else break;

    }


    //in case of odd N (n&1) returns 1
    //in case of even N (n&1) returns 0
    //in case of odd there will be only one mid element, which will on any one side either left or right so we subtract -1
    int ans = 2*cnt - (n & 1) ; 
    cout<<ans<<endl;
  }
  return 0;
}