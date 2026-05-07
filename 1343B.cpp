#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        if ((n/2)%2) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            int can=2, i=0;
            for (int i=0; i<n/2; i++) {
                arr[i] = can;
                if (i%2) arr[n-i-1] = can+1;
                else arr[n-i-1] = can-1;
                can += 4;
            } 
            for (int i=0; i<n; i++) cout << arr[i] << " ";
            cout << endl;
        }
    }
}