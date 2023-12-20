// Time Complexity - O(2N), single iteration over string to push in stack , next N to remove the spaces
// Space Complexity - O(N) , using stack to store letters, at worst maybe all are lowercase and all N Len will
//                     get stored in stack

// Check notion for detailed notes and extra information

// The whole idea of solving this problem is to 
//store the rightmost/last found lowercase or uppercase char in 
//lower and upper stack respectively
//if we find 'b' , first at that index in s we put space because b is not to be typed
//next we check in lower stack if we have any index stored, which will automatically be the rightmost(LIFO)
//if present at the index in string s we put space and pop that index
//same process happens for upper case letters
//after the whole iteration is complete there will be spaces in the string s
//remove the spaces from the string s and we will get the desired answer string

#include <bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

        string s;
        cin>>s; //diff b/w cin>>s and getline? Think!! check notion for answer. upsolving problems sheet.
        // getline(cin, s); // Read the entire line

        stack<int> upper, lower;
        for (size_t i = 0; i < s.size(); ++i) {
            //if 'b' found store its index and put empty space at its index in string s
            if (s[i] == 'b') {
                s[i] = ' '; // Replace with space (or any non-letter character)
                if (!lower.empty()) {
                    s[lower.top()] = ' ';
                    lower.pop();
                }
            } else if (s[i] == 'B') {
                //if 'b' found store its index and put empty space at its index in string s
                s[i] = ' ';
                if (!upper.empty()) {
                    s[upper.top()] = ' ';
                    upper.pop();
                }
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                //check if current char is small case
                //push its index in lower stack
                lower.push(i);
            } else if (s[i] >= 'A' && s[i] <= 'Z') {
                //check if current char is upper case
                //push its index in upper stack
                upper.push(i);
            }
        }
        // remove(s.begin(), s.end(), ' ');
        // cout<<s<<endl;
        // Remove spaces (or non-letter characters) to consolidate the string
        s.erase(remove(s.begin(), s.end(), ' '), s.end());

        cout << s << endl;
    }

    return 0;
}