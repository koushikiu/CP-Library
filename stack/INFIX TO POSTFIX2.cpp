#include<bits/stdc++.h>
using namespace std;
string a;
long long int i,j,b,d,m,n,p,l,cc,t,tt;
stack<char>s;
char u,v,w,x;
int pre(char);
int pre(char c)
{
 if(c=='+'||c=='-')
        return 1;
 else if(c=='*'||c=='/')
    return 2;
else if(c=='(')
        return -1;
else
    return 0;
}
int main()
{
cin>>a;
l=a.size();
for(i=0;i<l;i++)
{
   if(isalnum(a[i]))
        cout<<a[i];
else
{
        if(s.size()==0||a[i]=='(')
           s.push(a[i]);
       else if(a[i]==')')
        {
            while(s.top()!='(')
            {
                cout<<s.top();
                s.pop();
            }
        }
      else
           {
               x=s.top();
               tt=pre(a[i]);
               while(pre(x)>tt)
               {
                cout<<s.top();
                s.pop();
                if(s.size()==0)
                break;
                x=s.top();
               }
               s.push(a[i]);
           }

}

}
while(!s.empty())
            {
                if(s.top()!='(')
                cout<<s.top();
                s.pop();
            }
}
