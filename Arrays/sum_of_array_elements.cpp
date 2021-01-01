// https://practice.geeksforgeeks.org/problems/sum-of-array-elements/0
#include <iostream>
using namespace std;

int main() {
	int t, n, sum, temp;
	cin >> t;
	
	while(t--) {
	    cin >> n;
	    sum = 0;
	    for(int i = 0; i < n; i++){
	        cin >> temp;
	        sum += temp;
	    }
	    cout << sum << endl;
	}
	return 0;
}