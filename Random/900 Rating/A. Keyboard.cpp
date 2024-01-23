#include<bits/stdc++.h>

using namespace std;

string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main() {
  char shift; cin >> shift;
  string str; cin >> str;

  for(int i = 0; i < str.size(); i++) {
    for(int j = 0; j < s1.size(); j++) {
      if(shift == 'R') {
        if(str[i] == s1[j]) {
          str[i] = s1[j - 1];
          break;
        }
      }
      else {
        if(str[i] == s1[j]) {
          str[i] = s1[j + 1];
          break;
        }
      }
      
    }
  }

  cout<<str<<endl;

}