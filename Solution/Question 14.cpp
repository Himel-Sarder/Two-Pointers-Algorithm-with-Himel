#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int>& ar, int x) {
    int n = ar.size();
    int count = 0;
    int sum = 0, left = 0;

    for (int right = 0; right < n; ++right) {
        sum += ar[right];
        while (sum > x && left <= right) {
            sum -= ar[left];
            ++left;
        }
        if (sum == x)
            ++count;
    }
    cout << count << endl;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> ar(n);
    for (int i = 0; i < n; ++i)
        cin >> ar[i];
    solve(ar, x);
    return 0;
}
