#include<bits/stdc++.h>
using namespace std;
long i,j,m,n,f,r,t,d,dd,l,c;
int a[100];
int main()
{
 cin>>f>>m;
 a[f]=m;
 r=f;
 while(1)
 {
 cout<<"Press 1 for add element into queue:\n";
 cout<<"Press 2 for add element into queue:\n";
 cout<<"press 3 for display:\n";
 cin>>n;
 if(n==1)
 {
     cin>>m;
     r=(r+1)%10;
     if(r==f)
     {
         cout<<"Queue is full\n";
         if(f==0)
         r=10-1;
         else
            r=r-1;
     }
     else
     {
         a[r]=m;
     }
 }
 else if(n==2)
 {
     if(f==r)
     {
        cout<<"Queue is empty\n";
     }
     else
     {
         f=(f+1)%10;
     }
 }
 else if(n==3)
 {
   if(f==0&&r==10-1)
   {
    for(i=0;i<10;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
   }
   else if(r>f)
   {
       for(i=f;i<=r;i++)
        cout<<a[i]<<" ";
       cout<<"\n";
   }
else if(r<f)
   {
       for(i=f;i<10;i++)
        cout<<a[i]<<" ";
       for(i=0;i<=r;i++)
        cout<<a[i]<<" ";
       cout<<"\n";
   }
else if(r==f)
{
    if(c==0)
    {
        cout<<a[r]<<"\n";
        c=1;
    }
    else
        cout<<"queue is empty\n";
}

 }
}
}

