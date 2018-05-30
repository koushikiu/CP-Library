#include<bits/stdc++.h>
using namespace std;
void dis(struct node *start);
struct node *begins(int num,struct node *start);
struct node
{
    int info;
    struct node *link;
};

int main()
{
    struct node *start=NULL;
   while(1)
{
    cout<<"1 for insert:"<<"\n";
    cout<<"2 for display:"<<"\n";
    int c,num;
    cin>>c;
    switch(c)
    {
    case 1:
        cin>>num;
        start=begins(num,start);
        break;
    case 2:
        dis(start);
        break;
    default:
        cout<<"invalid choise";
        break;

    }
}

}
struct node *begins(int num,struct node *start)
{
struct node *t;
t=(struct node *)malloc(sizeof(struct node));
t->info=num;
t->link= start;
start=t;
return start;
}
void dis(struct node *start)
{
    struct node *p;
     p=start;
    if(p==NULL)
        cout<<"list is empty";
    else
    {
        while(p!=NULL)
        {
            cout<<p->info<<" ";
            p=p->link;
        }
    }
}




