Solution Link : https://codeforces.com/contest/1873/submission/259073080

#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;

    while(x--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int counter = 0;
        int l = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                counter++;
                i = i + k - 1;
            }
        }
        cout << counter << endl;
    }
}

