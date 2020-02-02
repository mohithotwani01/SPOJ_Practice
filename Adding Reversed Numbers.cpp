#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	//taking number of testcases
	int testCases;
	cin >> testCases;
	
	while (testCases--) {
		
		//taking two numbers
		int a,b;
		cin >> a >> b;
		
		//reversing first number
		int rev1 = 0;
		while (a > 0) {
			rev1 = rev1 + a%10;
			if (a/10 != 0) {
		    	rev1 = rev1 * 10;    
			}
			a = a/10;
		}
		
		//reversing second number
		int rev2 = 0;
		while (b > 0) {
			rev2 = rev2 + b%10;
			if (b/10 != 0) {
				rev2 = rev2 * 10;
			}
			b = b/10;
		}
		
		//adding both numbers
		int sum = rev1 + rev2;
		
		//reversing the sum of both numbers
		int revsum = 0;
		while (sum > 0) {
			revsum = revsum + sum%10;
			if (sum/10 != 0) {
				revsum = revsum * 10;
			}
			sum = sum/10;
		}
		cout << revsum << endl;
	}
	
	return 0;
}