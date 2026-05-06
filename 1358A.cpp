#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int one=(n/2)*(m);
        if (n%2) one+=(m/2+m%2);
        int two=(m/2)*(n);
        if (m%2) two+=(n/2+n%2);
        cout << min(one, two) << endl;
    }
}