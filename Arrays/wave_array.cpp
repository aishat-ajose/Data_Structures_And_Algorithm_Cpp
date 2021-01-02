// https://practice.geeksforgeeks.org/problems/wave-array/0
#include<bits/stdc++.h>
using namespace std;


void convertToWave(int *arr, int n){

    for(int i = 1; i < n; i+=2) {
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
    }
    
}


int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        
        convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  