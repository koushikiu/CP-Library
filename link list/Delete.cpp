#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
};
struct node *delf(int num,struct node*s );
struct node *ins(int num,struct node *);
void dis(struct node *s);
int main()
{
    struct node *s;
    s=NULL;
    while(1)
    {
    cout<<"1 for insert"<<"\n";
    cout<<"2 for display"<<"\n";
    cout<<"3 for dlete"<<"\n";
    int c,num;
    cin>>c;
    switch(c)
    {
    case 1:
        cin>>num;
        s=ins(num,s);
        break;
    case 2:
        dis(s);
        break;
    case 3:
        cin>>num;
        s=delf(num,s);
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
}
void dis(struct node *s)
{
    struct node *p;
    p=s;
    if(p==NULL)
    {
        cout<<"list is empty"<<"\n";
        return;
    }
    else
    {
        while(p!=NULL)
        {
            cout<<p->info<<" ";
            p=p->link;
        }
        cout<<"\n";
    }
}
struct node *delf(int num,struct node*s )
{
    struct node *t,*p;
    t=(struct node *)malloc(sizeof(struct node));
    p=s;
    if(p==NULL)
    {
        cout<<"list is empty"<<"\n";
        return s;
    }
    else if(s->info==num)
    {
        s=p->link;
        free(t);
        return s;
    }
    else
    {
        while(p->link!=NULL)
        {
            if(p->link->info==num)
            {
                t=p->link;
                p->link=t->link;
                free(t);
                return s;
            }
            p=p->link;
        }
    }

};

