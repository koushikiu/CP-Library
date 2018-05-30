#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],m=1000000,i,j,n,p;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[j]<m)
            {
                m=a[j];
                p=j;
            }
        }
        swap(a[i],a[p]);
        m=1000000;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

}
