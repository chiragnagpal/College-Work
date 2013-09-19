#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    node* lchild;
    node* rchild;
};

void display(node* p)
{
    if(p->lchild!=NULL)
    display(p->lchild);

    cout<<p->data<<"\t";

    if(p->rchild!=NULL)
    display(p->rchild);

}





int addNew(node *p, int* c)
{
    /*******
        if (p==NULL)
        {
            p=new node;
            p->data=*c;
            p->lchild=NULL;
            p->rchild=NULL;

        }

     else
     ***/

    if ((*c)<=(p->data))
    {
        if (p->lchild==NULL)
        {

            p->lchild=new node;
            p=p->lchild;
            p->data=*c;
            p->lchild=NULL;
            p->rchild=NULL;
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
            p->data=*c;
            p->lchild=NULL;
            p->rchild=NULL;
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
    int a,c;
    c=0;
    node* head;
    cout<< "Welcome to the Binary Search Tree\n";

    head=new node;
    cout<<"enter first element";
    cin>>head->data;
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
            addNew(head,&c);
            break;
        case 2:
            display(head);
            break;
        }
    }
}
