#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n==1) {
        return false;
    }
    if (n==2) {
        return true;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int a,b;
        cin >> a >> b;
        for (int i = a; i<=b; i++) {
            if (isPrime(i)) {
                cout << i << endl;
            }
        }
        cout << endl;
    }
}