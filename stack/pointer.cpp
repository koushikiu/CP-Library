#include<bits/stdc++.h>
using namespace std;
void in(int *x)
{
    *x=*x+1;
    //return x;
}
int main()
{
    int a,b=10;
    in(&b);
    printf("%d",b);
}
