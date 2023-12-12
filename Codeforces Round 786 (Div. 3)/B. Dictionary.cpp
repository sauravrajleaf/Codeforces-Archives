// Time Complexity - O(1)
// Space Complexity - O(1)

#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;cin>>t;

  while (t--)
  {
   string s;cin>>s;
    char first = s[0];
    char second = s[1];
    // cout<<first<<" "<<second<<endl;
    int firstRealIdx = (first - 'a') + 1;
    int secondRealIdx = (second - 'a') + 1;

    int row = 25 * (firstRealIdx - 1);

    if(firstRealIdx > secondRealIdx) {
      cout<<row + secondRealIdx<<endl;;
    }
    else cout<<row + secondRealIdx -1<<endl;
  }
  
}


//Check editorial for better understanding
//check hardcopy notes for detailed intuition