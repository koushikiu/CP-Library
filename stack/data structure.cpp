#include <bits/stdc++.h>
using namespace std;
int pre(char);
string a;
int main()
{
    int i,t,p,c=0;
    char d;
    cin>>a;
    stack<char>s;
    i=0;
        if(a[i]=='(')
        {
            i=i+1;
            while(a[i]!=')')
            {
                if(isalnum(a[i]))
                    cout<<a[i];
                    else if(c==0)
                    {
                        s.push(a[i]);
                        c=1;
                    }
                    else
                    {
                    d=s.top();
                    t=pre(a[i]);
                        while(t<=pre(d))
                        {
                            cout<<s.top();
                            s.pop();
                            if(s.size()==0)
                                break;
                            d=s.top();
                        }
                        s.push(a[i]);
                    }
                    i++;
            }
            while(!s.empty())
            {
                cout<<s.top();
                s.pop();
            }
        }
    }
int pre(char c)
{
    if(c=='+'||c=='-')
        return 1;
    else if(c=='*')
        return 2;
    else if(c=='/')
        return 3;

}
