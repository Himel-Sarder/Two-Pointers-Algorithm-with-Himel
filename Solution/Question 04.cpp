#include<bits/stdc++.h>
using  namespace  std;

void solve(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        unordered_set<int>s;
        for(int j=i+1;j<n;j++)
        {
            int x = -(ar[i]+ar[j]);
            if(s.find(x)!=s.end())
            {
                cout<<"("<<x<<","<<ar[i]<<","<<ar[j]<<")"<<endl;
            }
            else{
                s.insert(ar[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    solve(ar,n);
}

// Himel Sarder
// Dept. of CSE, BSFMSTU




