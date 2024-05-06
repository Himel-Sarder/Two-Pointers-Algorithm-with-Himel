#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int mn = 1, mx = n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int p = 0, l = 0, r = n - 1;
    while(l < r) {
        if(a[l] != mn && a[l] != mx && a[r] != mn && a[r] != mx) {
            p = 1;
            cout << l + 1 << " " << r + 1 << endl;
            break;
        }
        if(a[l] == mn) mn++, l++;
        else if(a[l] == mx) mx--, l++;
        if(a[r] == mn) mn++, r--;
        else if(a[r] == mx) mx--, r--;
    }
    if(p == 0) cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
