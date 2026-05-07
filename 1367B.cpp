#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i=0; i<n; i++) cin >> arr[i];
        int c1=0, c2=0;
        for (int i=0; i<n; i++) {
            if (arr[i]%2!=i%2) {
                if (arr[i]%2) c1++;
                else c2++;
            }
            
        }
        if (c1!=c2) cout << -1 << endl;
        else cout << c1 << endl;
    }
}