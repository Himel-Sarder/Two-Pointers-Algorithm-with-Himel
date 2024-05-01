Link : https://codeforces.com/contest/381/submission/258979895

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }
 
    int left = 0, right = n - 1;
    int serejaScore = 0, dimaScore = 0;
 
    for (int i = 0; left <= right; ++i) {
        if (i % 2 == 0) {
            if (cards[left] > cards[right]) {
                serejaScore += cards[left];
                ++left;
            } else {
                serejaScore += cards[right];
                --right;
            }
        } else {
            if (cards[left] > cards[right]) {
                dimaScore += cards[left];
                ++left;
            } else {
                dimaScore += cards[right];
                --right;
            }
        }
    }
 
    cout << serejaScore << " " << dimaScore << endl;
 
    return 0;
}
