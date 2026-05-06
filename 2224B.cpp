#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> arr(n);
        long long maxi = 0;
        vector<bool> seen(n + 2, false);
        
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
            if (arr[i] <= n) seen[arr[i]] = true;
        }
        
        long long ans = (long long)n * maxi;
        long long mex = 0;
        
        while (seen[mex]) mex++;
        
        if (maxi < mex) {
            ans += (mex * (mex + 1)) / 2 - maxi;
            ans += (long long)(n - mex) * mex;
        } else {
            ans += (mex * (mex + 1)) / 2;
            ans += (long long)(n - mex - 1) * mex;
        }
        
        cout << ans << endl;
    }
}