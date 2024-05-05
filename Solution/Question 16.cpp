#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n, t;
    cin >> n >> t;
    
    long long int a[n];
    
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    long long sum = 0, j = 0;
    int c = 0;
    
    for(int i = 0; i<n;i++){
        sum = sum + a[i];
        if(sum <= t){
            c++;
        }
        else{
            sum = sum - a[j];
            j++;
        }
    }
    cout << c << endl;
    
    return 0;
}
// Himel Sarder
// Dept. of CSE, BSFMSTU 
