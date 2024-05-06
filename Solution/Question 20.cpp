#include <iostream>
#include <algorithm>
using namespace std;

const int N = 2e5;
int a[N + 5];

int main() {
    int n;
    cin >> n;

    // Input a[]
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Subtract elements of a[] from corresponding elements of v[]
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a[i] -= v;
    }

    // Sort a[] in descending order
    sort(a, a + n, greater<int>());

    long long ans = 0;
    int l, r, mid;

    // Calculate ans
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            int v = -a[i];
            l = 0, r = n;
            while (l < r - 1) {
                mid = (l + r) >> 1;
                if (a[mid] <= v)
                    r = mid;
                else
                    l = mid;
            }
            ans += l - i;
        }
    }

    cout << ans << "\n";
    return 0;
}
