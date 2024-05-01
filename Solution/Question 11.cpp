Solution Link : https://codeforces.com/contest/1840/submission/259049058

#include <bits/stdc++.h>

using namespace std;

int main(){
   int T;
   cin>>T;

   while(T--){
      int n;
      cin>>n;

      string s;
      cin>>s;

      string ans="";

      int l=0;
      int r=l+1;
      
      while(r<n){
         if(s[l]==s[r]){
            ans.push_back(s[l]);
            l=r+1,r=r+2;
         }
         else{
            r++;
         }
      }

      cout<<ans<<endl;

   }
   return 0;
}
