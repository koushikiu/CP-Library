#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
};
struct node *ins(int num,struct node *s);
void sea(int num,struct node *s);
int main()
{
    struct node *s;
    s=NULL;
    while(1)
    {
        cout<<"1 for insert"<<"\n";
        cout<<"2 for search"<<"\n";
        int c,num;
        cin>>c;
        switch(c)
        {
        case 1:
            cin>>num;
            s=ins(num,s);
            break;
        case 2:
            cin>>num;
            sea(num,s);
            break;
        default :
            cout<<"invalid choise"<<"\n";
            break;
        }
    }

}
struct node *ins(int num,struct node *s)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->info=num;
    t->link=s;
    s=t;
    return s;
};
void sea(int num,struct node *s)
{
    struct node *p;
    p=s;
    int c;
    while(p!=NULL)
    {
        if(p->info==num)
        {
            c=0;
            cout<<"found"<<"\n";
        }
            p=p->link;
    }
    cout<<"\n";
    if(c!=0)
        cout<<"not found"<<"\n";
}


