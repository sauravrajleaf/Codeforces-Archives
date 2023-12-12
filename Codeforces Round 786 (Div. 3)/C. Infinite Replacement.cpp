// Time Complexity - O(len of T)
// Space Complexity - O(1)

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;cin>>t;

  while (t--)
  {
    string s;cin>>s;
    string t;cin>>t;

    if (t == "a") {
        cout << 1 << endl;
    } else if (t.find('a') != string::npos) {
        cout << -1 << endl;
    }
    else {
      long long ans = pow(2,s.size());
      cout<<ans<<endl;
    }

  }
  
}

//Check editorial for better understanding
//check hardcopy notes