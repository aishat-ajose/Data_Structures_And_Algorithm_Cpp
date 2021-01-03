// https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s/0
#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int l = 0; 
        int r = n-1;
        int swap;
        while (l < r) {
            if(arr[l] == 0) {
                l++;
                continue;
            }
            if(arr[r] == 1) {
                r--;
                continue;
            }
            swap = arr[l];
            arr[l] = arr[r];
            arr[r] = swap;
        }
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}