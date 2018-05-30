#include<bits/stdc++.h>
using namespace std;
long long int a,b,c=9,d,m,n,i,j,l,res;
string s;
int main()
{
cin>>s;
stringstream ss;
ss<<s;
ss>>m;
l=s.size();
if(l==1)
cout<<m;
else if(l==2)
cout<<9+((m-9)*2);
else if(l==3)
cout<<9+(90*2)+((m-99)*3);
else if(l==4)
cout<<9+(90*2)+(900*3)+((m-999)*4);
else if(l==5)
cout<<9+(90*2)+(900*3)+(9000*4)+((m-9999)*5);
else if(l==6)
cout<<9+(90*2)+(900*3)+(9000*4)+(90000*5)+((m-99999)*6);
else if(l==7)
cout<<9+(90*2)+(900*3)+(9000*4)+(90000*5)+(900000*6)+((m-999999)*7);
else if(l==8)
    cout<<9+(90*2)+(900*3)+(9000*4)+(90000*5)+(900000*6)+(9000000*7)+((m-9999999)*8);
else if(l==9)
cout<<9+(90*2)+(900*3)+(9000*4)+(90000*5)+(900000*6)+(9000000*7)+(90000000*8)+((m-99999999)*9);
else if(l==10)
cout<<8888888889+((m-999999999)*10);
return 0;
}
