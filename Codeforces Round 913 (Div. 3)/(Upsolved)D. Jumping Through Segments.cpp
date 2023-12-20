//This question is variation of Binary Search on Answers
// Time Complexity - O(NLog(Range of search -1 to 1e9))
// Space Complexity - O(1)


//do a dry run to understand this
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// ll and rr represent the current possible range where the player can be after moving through the segments. 
// Initially, both ll and rr are set to 0, indicating the player starts at position 0.
bool check(const vector<pair<int, int>>& seg, int k) {
    int ll = 0, rr = 0;// Initially, both ll and rr are set to 0, indicating the player starts at position 0.

    // O(N)
    for (const auto& e : seg) {
        
        // After each move, it expands by k in both directions and is reduced to the intersection with the segment 
        // where the player must be at that move.


        // This line calculates the lowest possible position (ll) the player can be in after moving to the current segment. 
        // The player can be within a distance k from the last position, but not before the start of the current segment (e.first).
        ll = max(ll - k, e.first);

        // Similarly, this line calculates the highest possible position (rr) within the current segment.
        // The player can be within a distance k from the last position but not beyond the end of the current segment (e.second).
        rr = min(rr + k, e.second);

        cout<<"ll "<<ll<<" "<<"rr "<<rr<<endl; 
        // This condition checks if the range is valid. If ll (the lowest possible position) is greater than rr (the highest possible position), 
        // it means there is no valid position the player can be in after the current move. 
        // Therefore, it's impossible to complete the level with the given k.
        if (ll > rr) {
            return false;
        }
    }

    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> seg(n);
    for (int i = 0; i < n; ++i) {
        cin >> seg[i].first >> seg[i].second;
    }

    //l = 0 because in the 2nd testcase it can be seen that the answer is 0
    //and also the lowest distance cannot be smaller than 0 if the ranges are all starting from 0 
    //and we have to find a value x such that l<=x && x>=r

    int low = 0, high = 1e9;

    //low - points to the impossible zone of answers
    //high - points to the possible zone of answers
    while (low <= high) {

        //check if calculated mid is the distance which can pass all levels
        int mid = low + (high - low) / 2;

        cout<<"high "<<high<<" low "<<low<<endl;
        cout<<"mid "<<mid<<endl;

        //if mid can pass the levels'
        //decrease the value of mid by moving high to more left
        // this will decrease the value of mid
        if (check(seg, mid)) {
            high = mid - 1;
        } else {
            //if mid can not pass the levels
            //increase the low by moving to more right
            //this will increase the value of mid
            low = mid + 1;
        }
    }

    //Ultimately low will pointing to the answer
    //do a dry run to understand this
    cout << low << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
