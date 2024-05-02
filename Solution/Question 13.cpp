#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int MaxValue(int N, int M, vector<int>& hv) {
    int maxv = 0;
    int left = 0;
    int right = 0;
    int sum = 0;

    while (right < N) {
        sum += hv[right];

        while (sum > M) {
            sum -= hv[left];
            left++;
        }

        maxv = max(maxv, sum);
        right++;
    }

    return maxv;
}

int main() {
    int N, M;

    cin >> N >> M;

    vector<int> HotelValues(N);
    for (int i = 0; i < N; ++i) {
        cin >> HotelValues[i];
    }

    cout << MaxValue(N, M, HotelValues) << endl;

    return 0;
}
