#include <bits/stdc++.h>

using namespace std;

int main() {

  string str; cin >> str;

  bool check = false;

  for(auto &ch : str) {
    // cout << ch - '0' << endl;
    if(ch - '0' == 9) {
      cout << "YES" << endl;
      check = true;
      break;
    }

    if(ch == 72) {
      cout << "YES" << endl;
      check = true;
      break;
    }

    if(ch == 81) {
      cout << "YES" << endl;
      check = true;
      break;
    }
  }

  if(!check)
    cout << "NO" << endl;

  return 0;
}