#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        bool flag=false;
        for (int i=0; i<n; i++) cin >> arr[i];
        if (arr[0]%2 && n%2) flag=true;
        for (int i=1; i<n; i++) {
            if (arr[i]%2!=arr[0]%2) {
                flag = true;
                break;
            }
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}