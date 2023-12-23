#include<bits/stdc++.h>

using namespace std;


int main() {
  int t; cin>>t;
  while(t--) {
    int n;cin>>n;

    string s;cin>>s;

    vector<int> alphabets(25,0);

    for(int i = 0 ; i < 26 ; i++) {
      alphabets[i] = i + 1;
    }
    // for(int i = 0 ; i < 26 ; i++) {
    //   cout<<alphabets[i]<<" ";
    // }

    // cout<<endl;
    int cnt = 0;
    for(int i = 0 ; i < s.length() ; i++) {
      if(alphabets[s[i] - 'A'] > 0) {
        alphabets[s[i] - 'A'] -= 1;

        if(alphabets[s[i] - 'A'] == 0)cnt++;  
      }
        
    }

    // for(int i = 0 ; i < 26 ; i++) {
    //   cout<<alphabets[i]<<" ";
    // }
    // cout<<endl;
    cout<<cnt<<endl;
  }
}