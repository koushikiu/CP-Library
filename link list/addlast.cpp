#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
};
struct node *addbig(int num, struct node *s);
void dis(struct node *s);
void addlast(int num, struct node *s);
int main()
{
    struct node *s;
    s=NULL;
    while(1)
    {
    cout<<"1 for first insert"<<"\n";
    cout<<"2 for display"<<"\n";
    cout<<"3 for last insert"<<"\n";
    int c,num;
    cin>>c;
    switch(c)
    {
    case 1:
        cin>>num;
        s=addbig(num,s);
        break;
    case 2:
        dis(s);
        break;
    case 3:
        cin>>num;
        addlast(num,s);
        break;
    default :
        cout<<"invalid chiose"<<"\n";


    }
    }
}
struct node *addbig(int num, struct node *s)
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
            cout<<"list is empty"<<"\n";
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
void addlast(int num,struct node *s)
{
    struct node *t,*p;
    t=(struct node *)malloc(sizeof(struct node));
    t->info=num;
    p=s;
    if(p==NULL)
        cout<<"list is empty"<<"\n";
    else
    {
        while(p->link!=NULL)
        {
            p=p->link;
        }
        t->link=p->link;
        p->link=t;
    }
}

