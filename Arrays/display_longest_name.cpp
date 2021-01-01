// https://practice.geeksforgeeks.org/problems/display-longest-name/0
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int t, n;
	string temp, max;
	cin >> t;
	
	while(t--) {
	    cin >> n;
	    max = ' ';
	    for(int i = 0; i < n; i++) {
	        cin >> temp;
	        max = temp.length() > max.length() ? temp : max; 
	    }
	    
	    cout << max;
	}
	return 0;
}