Solution Link : https://codeforces.com/contest/1791/submission/259044233

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;                      
    cin>>t;
    
    while(t--){
        int n;                  
        cin>>n;
        
        string s;               
        cin>>s;
        
        int ans = n;
        
        int left = 0;
        int right = n - 1;
      
        while(left < right and s[left] != s[right]){
            left++;
            right--;
            ans-=2;
        }
        cout<< ans <<endl;
    }
    return 0;
}
