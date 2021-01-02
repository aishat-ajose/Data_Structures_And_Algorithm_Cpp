// https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array/0
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   int l, r, mid, size;
	   l = 0;
	   r = n-1;
	   
	   while(l <= r) {
	        mid = (l+r)/2;
	        
	        if(arr[mid-1] < arr[mid] && arr[mid+1] < arr[mid])
	            break;
	        
            if(arr[mid-1] > arr[mid] && arr[mid+1] < arr[mid]) {
                r = mid - 1;
            }
       
    	    if(arr[mid-1] < arr[mid] && arr[mid+1] > arr[mid]) {
    	       l = mid + 1;
    	    }

	   }
	   return arr[mid];
  
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
