#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> c(10, 0);
        for (int i=0; i<n; i++) c[s[i]-'0']++;
        int sum5=0;
        for (int i=0; i<=5; i++) sum5+=c[i];
        int low=0;
        int high=n/4;
        int ans=0;
        while (low<=high) {
            int k=low+(high-low)/2;
            int L=max(0, k-c[0]);
            int R=min({k, c[1], c[0]+c[1]-k, sum5-2*k});
            if (L<=R) {
                ans=k;
                low=k+1;
            } else {
                high=k-1;
            }
        }
        cout << ans << endl;
    }
}