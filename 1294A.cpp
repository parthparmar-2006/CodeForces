#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int a,b,c,n; cin >>a>>b>>c>>n;
        int maxi=max(a,max(b,c));
        int left=n-(maxi-a)-(maxi-b)-(maxi-c);
        if (left<0 || left%3) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}