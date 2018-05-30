#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,m,n,dp[2000][2000];
int f(int n,int m)
{
    if(n==m)
    return 1;
    if(m==1)
    return n;
    if(dp[n][m]!=-1)
    return dp[n][m];
    return dp[n][m]=f(n-1,m)+f(n-1,m-1);
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>i>>j;
    cout<<f(i,j);

}

