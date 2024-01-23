#include<bits/stdc++.h>

using namespace std;

int main() {

  int n, a, b, c;
	bool flag;
	cin >> n;
	if (n > 0) flag = 0; else flag = 1;
  //made everything positive for ease of calculations
	n = abs(n);
	a = n;
	b = n / 10;//removed the last digit
	c = b / 10 * 10 + n % 10;//removed the second last digit

	if (flag)
  //reverting the signs before proceeding with the answer
		a = -a, b = -b, c = -c;
    // cout << a << " " << b << " " << c << endl;
	cout << (max(a, max(b, c))) << endl;

}