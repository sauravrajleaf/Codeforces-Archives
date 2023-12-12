// Time Complexity - O(1)
// Space Complexity - O(1)

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;cin>>t;

  while (t--)
  {
    /* code */
    int x,y; cin>>x>>y;
    // cout<<x<<" "<<y<<endl;

    if(y%x !=0)cout<<0<<" "<<0<<endl;

    else {
      cout<<1<<" "<<y/x<<endl;  
    }
      
  }
  
}

//Check editorial for better understanding
//check hardcopy notes