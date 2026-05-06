#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int x,y,n; cin >>x>>y>>n;
        int r=n%x;
        if (r==y) cout << n << endl;
        else if (r>y) cout << n-(r-y) << endl;
        else cout << n-(x-y)-r << endl;
    }
}