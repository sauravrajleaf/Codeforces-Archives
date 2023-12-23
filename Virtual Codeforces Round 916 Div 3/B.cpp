#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;cin>>t;

  while(t--) {
    int n;cin>>n;
    int k;cin>>k;
    int start;
    if(k!= 0){
      start = 1;
      cout<<start<<" ";
      while(k > 1) {
      start++;
      cout<<start<<" ";
      k--;
    }

    while(n > start) {
      cout<<n<<" ";
      n--;
    }

    cout<<endl;
    }
    else {
      while(n > 0) {
        cout<<n<<" ";
        n--;
      }
      cout<<endl;
    }
  }

  return 0;
}