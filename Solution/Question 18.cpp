#include <bits/stdc++.h>

using namespace std;

bool canPlaceCows(const vector<int>& stalls, int numCows, int minDistance) {
    int lastPlacedStall = stalls[0];
    int cowsPlaced = 1;

    for (int i = 1; i < stalls.size(); ++i) {
        if (stalls[i] - lastPlacedStall >= minDistance) {
            lastPlacedStall = stalls[i];
            ++cowsPlaced;
            if (cowsPlaced == numCows) {
                return true;
            }
        }
    }

    return false;
}


int largestMinDistance(const vector<int>& stalls, int numCows) {
    int low = 1, high = stalls.back() - stalls.front(), result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stalls, numCows, mid)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> stalls(n);
        for (int i = 0; i < n; ++i) {
            cin >> stalls[i];
        }

        sort(stalls.begin(), stalls.end());

        int largestMinDist = largestMinDistance(stalls, c);
        cout << largestMinDist << endl;
    }
    return 0;
}
