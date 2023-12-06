// Problem Link - https://codeforces.com/contest/1682/problem/B

// Time Complexity - O(N)
// Space Compledxity - O(1)


#include<bits/stdc++.h>

using namespace std;


int main(){

  int t;cin>>t;
  while(t--) {
    int n;cin>>n;
    vector<int> arr;
    int data;
    for(int i=0; i<n; i++){
      cin>>data;
      arr.push_back(data);
      }

    int ans = (1<<30)-1;//setting all the 32 bits present in the int
    for(int i=0; i<n; i++) {
      if(arr[i] != i) {
        ans = ans&arr[i];
      }
    }

    cout<<ans<<endl;

  }

  return 0;
}

// Personal Notes
// In the context of bitwise operations, a submask and supermask refer to the relationship between two binary masks.

// Submask:

// A mask A is a submask of mask B if every bit that is set (1) in A is also set in B.
// In other words, A is a submask of B if the binary representation of A can be obtained by turning off (setting to 0) some of the bits in B.
// For example, if A is 001010 and B is 101110, then A is a submask of B.
// Supermask:

// A mask A is a supermask of mask B if every bit that is set (1) in B is also set in A.
// In other words, A is a supermask of B if the binary representation of A can be obtained by turning on (setting to 1) some of the bits in B.
// For example, if A is 101100 and B is 101010, then A is a supermask of B.
// In the provided algorithm, the bitwise AND of the elements in the given permutation is denoted as X. The statement mentions that X would always be present in the permutation. The proof then argues that the given permutation is X-sortable, meaning it can be sorted by making swaps between elements whose bitwise AND is X.

// The terms "submask" and "supermask" are used to describe the relationship between the value X and the elements being swapped. The proof demonstrates that any two values whose bitwise AND is X can be swapped, allowing the entire permutation to be sorted.