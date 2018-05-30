#include<bits/stdc++.h>
using namespace std;
string s,ss;
stack<long>s1;
long i,l,j,m,n,p;
int main()
{
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]!='+'&&s[i]!='*'&&s[i]!='/'&&s[i]!='-')
        {
            s1.push(s[i]-'0');
        }
        else
        {
            n=s1.top();
            s1.pop();
            m=s1.top();
            s1.pop();
            if(s[i]=='+')
                p=n+m;
            else if(s[i]=='-')
                p=m-n;
            else if(s[i]=='*')
                p=n*m;
            else
                p=m/n;
        s1.push(p);
        }
    }
    cout<<s1.top();
}
