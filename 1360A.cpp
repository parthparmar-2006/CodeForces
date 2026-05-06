#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int a,b; cin >>a>>b;
        int n=max(min(a,b)*2, max(a,b));
        cout << n*n << endl;
    }
}