#include<bits/stdc++.h>

using namespace std;

int main() {

  int n, m; cin >> n >> m;

  vector<int> arr(n);

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for(int i = 0; i < n; i++) {
    arr[i] = -arr[i];
  }

  sort(arr.begin(), arr.end(), greater<int>());

  int ans = 0, cnt = 0;

  for(auto &element : arr) {
    if(element >= 0){
      cnt++;
      ans += element;

      if(cnt == m) {
        break;
      }
    }
    if(element < 0) {
      break;
    }
  }

  cout << ans << endl;

  return 0;
}