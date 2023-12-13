// Time Complexity - O(N/2 + NLogN)
// Space Complexity - O(N)

//Detailed intuition written in hardcopy notes
//Check editorial for more better understanding

// The basic idea is to swap the elemeents of a in pairs
// consider pars from the last element
// in case of odd number of elements, first element will be included in comparison or swapping
//final form of array C is swapped elements of array A in pairs

#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;cin>>t;

  while(t--) {
    int n;cin>>n;
    vector<int> arr(n);

    for(int &x: arr) {
      cin>>x;
    }
    
    for(int i = n % 2; i < n - 1; i += 2) {
      if(arr[i] > arr[i+1]) {
        swap(arr[i],arr[i+1]);
      }
    }

    if(is_sorted(arr.begin(), arr.end())) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


  }
}