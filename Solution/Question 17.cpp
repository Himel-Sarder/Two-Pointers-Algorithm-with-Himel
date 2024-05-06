#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int, vector<int>> indices;
    for (int i = 0; i < n; i++) indices[arr[i]].push_back(i);

    sort(arr.begin(), arr.end());
    for (auto e : arr) {
        int y = x - e;
        if (indices.count(y)) {
            for (auto i : indices[e]) {
                for (auto j : indices[y]) {
                    if (i != j) {
                        cout << i + 1 << " " << j + 1 << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}
