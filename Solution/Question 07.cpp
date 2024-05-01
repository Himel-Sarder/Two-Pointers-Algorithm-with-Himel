Solution Link : https://codeforces.com/contest/1006/submission/258997641

#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    
    for(int i = 0;i < n; i++)
        cin>>ar[i];
    
    long long int sum1=0,sum2=0,ans=0;
    int l = 0;
    int r = n - 1;
    
    while(l<=r)
    {
        if(sum1<sum2)
        {
            sum1+=ar[l];
            l++;
        }
        else{
            sum2+=ar[r];
            r--;
        }
        if(sum1==sum2)
          ans=sum1;
    }
    cout << ans <<endl;
}
