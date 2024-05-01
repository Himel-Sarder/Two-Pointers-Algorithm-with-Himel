#include <bits/stdc++.h>

using namespace std;

int counter(vector<int>& p, int b) {
    int low = 0, high = p.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (p[mid] <= b) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

int main() {
    int n, q;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    cin >> q;
    for (int i = 0; i < q; ++i) {
        int b;
        cin >> b;
        int shops = counter(p, b);
        cout << shops << endl;
    }

    return 0;
}
