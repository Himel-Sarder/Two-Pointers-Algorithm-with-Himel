#include <iostream>

using namespace std;

long long countLessOrEqual(long long x, long long n) {
    long long count = 0;
    for (long long i = 1; i <= n; ++i) {
        count += min(x / i, n);
    }
    return count;
}

long long solve(long long n) {
    long long left = 1, right = n * n, middle, result;

    while (left <= right) {
        middle = (left + right) / 2;
        if (countLessOrEqual(middle, n) >= (n * n + 1) / 2) {
            result = middle;
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }

    return result;
}

int main() {
    long long n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}
