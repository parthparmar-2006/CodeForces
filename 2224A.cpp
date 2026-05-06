#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> arr(n);
        for (int i=0; i<n; i++) cin >> arr[i];
        long long cnt=0, sum=0;
        if (arr[n-1]>0) cnt++;
        for (int i=n-2; i>=0; i--) {
            if (arr[i+1]>0) {
                arr[i]+=arr[i+1];
            }
            if (arr[i]>0) cnt++;
        } cout << cnt << endl;
    }
}