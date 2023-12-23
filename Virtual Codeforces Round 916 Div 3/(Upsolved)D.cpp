// Detailed notes written on Notion

#include<bits/stdc++.h>

using namespace std;

vector<int> getBest3(vector<int>& arr) {
  int mx1 = -1, mx2 = -1, mx3 = -1;

  int n = arr.size(); 

  for(int i = 0; i < n; i++) {

    if(mx1 == -1 || arr[i] > arr[mx1]) {
      
      mx3 = mx2;
      mx2 = mx1;
      mx1 = i;

    }
    else if(mx2 == -1 || arr[i] > arr[mx2]) {
      mx3 = mx2;
      mx2 = i;
    }
    else if(mx3 == -1 || arr[i] > arr[mx3]) {
      mx3 = i;
    }
    // cout<<mx1<<" "<<mx2<<" "<<mx3<<endl;

  }

  //returns 3 indexes which points to the max possible number of friends on ith day
  return {mx1, mx2, mx3};
}


int main() {
  int t;
  cin>>t;

  while(t--) {
    int n;cin>>n;

    vector<int> skiing(n), movie(n), board(n);

    for(int i = 0; i < n; i++) cin >> skiing[i];
    for(int i = 0; i < n; i++) cin >> movie[i];
    for(int i = 0; i < n; i++) cin >> board[i];

    //find the indexes where the values are the max 3
    vector<int> max_skiing = getBest3(skiing);
    vector<int> max_movie= getBest3(movie);
    vector<int> max_board = getBest3(board);

    // for(int x: max_skiing){
    //   cout<<x<<" ";
    // }
    // cout<<endl;

    // for(int x: max_movie){
    //   cout<<x<<" ";
    // }
    // cout<<endl;

    // for(int x: max_board){
    //   cout<<x<<" ";
    // }
    // cout<<endl;
    // cout<<"********************"<<endl;
  
  int ans = INT_MIN;

//making all possible combinations of x, y and z
// such that none of the three indexes match to any one
// O(3^3)
    for(int x: max_skiing) {

      for(int y: max_movie) {

        for(int z: max_board) {

          if(x != y && x != z && y != z) {
             ans = max(ans, (skiing[x] + movie[y] + board[z]));
          }

        }
      }
    }

    cout<<ans<<endl;

  }

  return 0;
}