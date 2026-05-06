#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        
        int open=0, cl=0;
        bool f=true, flag=true;
        
        for (int i=0; i<n; i++) {
            if (a[i]==b[i]) {
                if (a[i]=='(') {
                    open++; cl++;
                } else {
                    open--; cl--;
                }
            } else {
                if (flag) {
                    open++; cl--;
                } else {
                    open--; cl++;
                }
                flag = !flag;
            }
            
            if (open<0 || cl<0) {
                f=false;
                break;
            }
        }
        
        if (open!=0 || cl!=0) f=false;
        if (f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}