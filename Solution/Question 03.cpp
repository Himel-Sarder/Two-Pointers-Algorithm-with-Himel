#include<bits/stdc++.h>
using  namespace  std;

void solve(int ar[],int n, int x)
{
    int l=0;
    int r=n-1;
    int ind1,ind2;
    int dif=INT_MAX;

    while(l<r)
    {
        int sum=ar[l]+ar[r];
        if(abs(sum-x)<dif)
        {
            ind1=l;
            ind2=r;
            dif=abs(sum-x);
        }
        if(sum>x)r--;
        else l++;
    }
    cout<<"("<<ar[ind1]<<" "<<ar[ind2]<<")  = "<< ar[ind1]+ar[ind2]<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];

    for(int i=0;i<n;i++)cin>>ar[i];

    sort(ar,ar+n);

    int x;
    cin>>x;

    solve(ar,n,x);
}
