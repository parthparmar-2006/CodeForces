#include<bits/stdc++.h>
using namespace std;
bool isValid(long long a, long long b, long long c) {
    return (a+b>c && a+c>b && b+c>a);
}
int main() {
    int t; cin >> t;
    while (t--) {
        long long a, b, c, d; cin >> a >> b >> c >> d;
        if (isValid(a, c, c)) cout << a << " " << c << " " << c << endl;
        else cout << b << " " << b << " " << d << endl; 
    }
}