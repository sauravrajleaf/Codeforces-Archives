#include<bits/stdc++.h>

using namespace std;

int main() {
  int k; cin >> k;

  vector<int> months(12);

  for(int i = 0; i < 12; i++) {
    cin >> months[i];
  }
  sort(months.begin(), months.end(), greater<int>());

  int cnt = 0;
  for(int &data : months) {
    if(k <= 0) {
      break;
    }
    k -= data;
    cnt++;
    
  }
  if(k <= 0) cout << cnt << endl;
  else cout << -1 << endl;
}