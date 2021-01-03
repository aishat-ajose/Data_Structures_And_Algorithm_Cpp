// https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem/0
#include <bits/stdc++.h>
#include <map>

using namespace std;


class Solution{
public:	
    int temp = 0;
	void matchPairs(char nuts[], char bolts[], int n) {
	    unordered_map<char, int> m;
	    char types[] = {'!', '#', '$', '%', '&', '*', '@', '^', '~'};
        int it = 0;
        for (int i = 0; i < n; i++){
            m[nuts[i]] = 1;
        }
     
     
        for (int i = 0; i < n; i++) {
            if (m.find(bolts[i]) != m.end())
                m[bolts[i]] = 2;
        }
        

        for(int i = 0; i < 9; i++) {
            if(m.find(types[i]) != m.end() && m[types[i]] == 2) {
                nuts[it] = types[i];
                bolts[it] = types[i];
                it++;
            }
        }
        
    }

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}