#include<bits/stdc++.h>

using namespace std;


int main() {
  int n; cin >> n;

  vector<int> arr(n);

  for(int i = 0; i < n; i++) cin >> arr[i];

  int max_len = INT_MIN;
  int end = -1;
  int temp = 0;

  for(auto &element : arr) {
    if(end == -1) {
      end = element;
    }

    if(element >= end) {
      end = element;
      temp++;
    }else {
      temp = 1;
      end = element;
    }
    max_len = max(max_len, temp);
  }

  cout << max_len << endl;
}