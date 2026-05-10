#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int k; cin >> k;
        vector<int> a(n), b(n);
        for (int i=0; i<n; i++) cin >> a[i];
        for (int j=0; j<n; j++) cin >> b[j];
        int p=n-k;
        bool flag=true;
        for (int i=0; i<p; i++) {
            if (a[i]!=b[i] && b[i]!=-1) {
                flag = false;
                break;
            }
            b[i] = a[i];
        }
        for (int i=n-1; i>=k; i--) {
            if (a[i]!=b[i] && b[i]!=-1) {
                flag = false;
                break;
            }
            b[i] = a[i];
        }
        if (!flag) cout << "NO" << endl;
        else {
            vector<bool> f(n+1, false);
            for (int i=0; i<n; i++) {
                if (b[i]!=-1 && f[b[i]]) {
                    flag = false;
                    break;
                }
                if (b[i]!=-1) f[b[i]]=true;
            }
            if (flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}