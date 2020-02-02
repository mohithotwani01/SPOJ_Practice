#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int x;
	do {
		cin>>x;
		if (x == 42){
		    return 0;
		}
		else {
		cout<<x<<endl;
		}
	}while (x != 42);
	return 0;
}