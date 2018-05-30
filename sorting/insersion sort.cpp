#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,a[100],c;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=1;i<n;i++)
    {
        j=a[i];
        c=i-1;
        while(j<a[c]&&c!=-1)
        {
         swap(a[c],a[c+1]);
         c--;
        }

    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
