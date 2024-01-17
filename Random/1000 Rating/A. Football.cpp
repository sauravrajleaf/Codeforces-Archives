#include<bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;

  unordered_map<string, int> hashMap;

  for(int i = 1; i <= n; i++) {
    string team; cin >> team;
    hashMap[team]++;
  }

  int ans = INT_MIN;
  string won;

  for(auto &element: hashMap) {
    int score = element.second;
    string team = element.first;

    if(ans < score) {
      ans = score;
      won = team;
    }
  }

  cout << won << endl;
}