#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    struct node *link;
};
struct node *addbeg(int num,struct node *s);
void addlast(int num , struct node *s);
void dis(struct node*s);
void after(int num,int num2,struct node *s);
//struct node *beg(int num,int num2,struct node *s);
int main()
{
    struct node *s=NULL;
    int c,num,num2;
    while(1)
    {
        cout<<"1 for brgan insert"<<"\n";
        cout<<"2 for last insert"<<"\n";
        cout<<"3 for display"<<"\n";
        cout<<"4 for add after a node"<<"\n";
        cout<<"5 for add before a node"<<"\n";
        cin>>c;
        switch(c)
        {
        case 1:
            cin>>num;
            s=addbeg(num,s);
            break;
        case 2:
            cin>>num;
            addlast(num,s);
            break;
        case 3:
            dis(s);
            break;
        case 4:
            cout<<"enter number u want to insert"<<"\n";
            cin>>num;
            cout<<"enter node"<<"\n";
            cin>>num2;
            after(num,num2,s);
            break;
        case 5:
            cout<<"enter number u want to insert"<<"\n";
            cin>>num;
            cout<<"enter node"<<"\n";
            cin>>num2;
            //s=beg(num,num2,s);
            break;
        default :
            cout<<"invalid chiose"<<"\n";
            break;

        }
    }

}
struct node *addbeg(int num,struct node *s)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    t->info=num;
    t->link=s;
    s=t;
    return s;
};
void addlast( int num ,struct node *s)
{
    struct node *t,*p;
    t=(struct node *)malloc(sizeof(struct node));
    t->info=num;
    p=s;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    t->link=p->link;
    p->link=t;

}
void dis(struct node*s)
{
    struct node *p;
    p=s;
    if(p==NULL)
    {
        cout<<"list is empty"<<"\n";
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
void after(int num,int num2,struct node *s)
{
    struct node *t,*p;
    p=s;
    t=(struct node *)malloc(sizeof(struct node));
    t->info=num;
    if(p==NULL)
    {
        cout<<"list is empty"<<"\n";
    }
    else
    {
        while(p!=NULL)
        {
            if(p->info==num2)
            {
             t->link=p->link;
             p->link=t;
             return;
            }
            p=p->link;
        }
    }
}

