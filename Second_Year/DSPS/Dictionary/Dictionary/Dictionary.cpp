#include <iostream>
using namespace std;

typedef struct node
{
    char data[6];
    char mean[5];
    node* lchild;
    node* rchild;
};

void display(node* p)
{
    if(p->lchild!=NULL)
        display(p->lchild);

    cout<<p->data<<"\t";
    cout<<p->mean<<endl;
    if(p->rchild!=NULL)
        display(p->rchild);

}


int strcomp(char* str1, char* str2)
{
    if (*str1>*str2)
    {
        return 0;
    }

    if (*str1<*str2)
    {
        return 1;
    }

    if (*str1==*str2)
    {
        strcomp((str1+1),(str2+1));
    }

}


int addNew(node *p, char c[])

{
    int i;
    if (strcomp(c,(p->data)))
    {
        if (p->lchild==NULL)
        {

            p->lchild=new node;
            p=p->lchild;
            for(i=0; i<=4; i++)
            {
                p->data[i]=*(c+i);
            }
            p->lchild=NULL;
            p->rchild=NULL;
            cout<<"\nenter the meaning";
            cin>>p->mean;
        }
        else
        {
            p=p->lchild;
            addNew(p,c);
        }

    }
    else
    {
        if (p->rchild==NULL)
        {
            p->rchild=new node;
            p=p->rchild;
            for(i=0; i<=4; i++)
            {
                p->data[i]=*(c+i);
            }
            p->lchild=NULL;
            p->rchild=NULL;
            cout<<"\nenter the meaning";
            cin>>p->mean;
        }
        else
        {
            p=p->rchild;
            addNew(p,c);
        }
    }

}


int main()
{
    int a;
    char c[5];
    node* head;
    cout<< "Welcome to the Binary Search Tree\n";

    head=new node;
    cout<<"\nenter first element";
    cin>>head->data;
    cout<<"enter the meaning";
    cin>>head->mean;
    head->lchild=NULL;
    head->rchild=NULL;

    while(1)
    {

        cout<<"\nwould you like to 1.enter new data or 2.display tree???";
        cin>>a;
        switch(a)
        {

        case 1:
            cout<<"enter data";
            cin>>c;
            addNew(head,c);
            break;
        case 2:
            display(head);
            break;
        }
    }
}
