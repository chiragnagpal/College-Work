#include <iostream>
using namespace std;


typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};


node* create()
{
    node* start;
    cout<<"welcome to the tree creator \nEnter the first integer:";
    start=new node;
    cin>>start->data;
    start->lchild=NULL;
    start->rchild=NULL;

    return start;

}

int addNew(node* root, node* p,int *exit)
{
    int opt,key;
    key=(((p->lchild==NULL)<<1)+(p->rchild==NULL));
    cout<<"key is"<<key;
    if (p->lchild==NULL&&p->rchild==NULL)
    {
        cout<<"the current node "<<p->data<<" contains no children";
        cout<<"\nwould you like to add\n1.Left Child 2.Right Child 3.Traverse to root 4.Exit the tree :?";
        cin>>opt;
        switch (opt)
        {

        case 1:
            p->lchild = new node;
            p=p->lchild;
            cout<<"enter data for left child:";
            cin>>p->data;
            p->lchild=NULL;
            p->rchild=NULL;
            break;

        case 2:
            p->rchild = new node;
            p=p->rchild;
            cout<<"enter data for right child:";

            cin>>p->data;
            p->lchild=NULL;
            p->rchild=NULL;
            break;

        case 3:
            p=root;
            break;

        case 4:
            *exit=1;
            break;
        }
        //addNew(root,p,exit);
    }

    if((p->lchild!=NULL)&&(p->rchild)==NULL)
    {
        cout<<"the current node "<<p->data<<" contains a left child";
        cout<<"\nWould you like to\n1.Add a right child 2.Traverse to Left Child 3.Traverse to root 4.Exit the Tree";
        cin>>opt;
        switch (opt)
        {

        case 1:
            p->rchild = new node;
            p=p->rchild;
            cout<<"enter data for right child:";

            cin>>p->data;
            p->lchild=NULL;
            p->rchild=NULL;
            break;

        case 2:
            p=p->lchild;
            break;

        case 3:
            p=root;
            break;

        case 4:
            *exit=1;
            break;
        }
        //addNew(root,p,exit);
    }

    if((p->lchild==NULL)&&(p->rchild)!=NULL)
    {
        cout<<"the current node "<<p->data<<" contains a right child";
        cout<<"\nWould you like to\n1.Add a left child 2.Traverse to Right Child 3.Traverse to root 4.Exit the tree";
        cin>>opt;
        switch (opt)
        {
        case 1:
            p->lchild = new node;
            p=p->lchild;
            cout<<"enter data for right child:";

            cin>>p->data;
            p->lchild=NULL;
            p->rchild=NULL;
            break;

        case 2:
            p=p->rchild;
            break;

        case 3:
            p=root;
            break;

        case 4:
            *exit=1;
            break;
        }
        //addNew(root,p,exit);
    }

    if((p->lchild!=NULL)&&(p->rchild)!=NULL)
    {
        cout<<"the current node "<<p->data<<" contains both left & right child";
        cout<<"\nwould you like to traverse to\n1.Left Child 2.Right Child 3.Root 4.Exit the tree";
        cin>>opt;
        switch(opt)
        {

        case 1:
            p=p->lchild;
            break;

        case 2:
            p=p->rchild;
            break;

        case 3:
            p=root;
            break;

        case 4:
            *exit=1;
            break;
        }

        //addNew(root,p,exit);
    }
    if (*exit==1)
    {
        return 0;
    }
    else
    {
        addNew(root,p,exit);
    }
}

void display(node* root)
{
    node *p;
    p=root;
    if ((p->lchild!=NULL)&&(p->rchild!=NULL))
    {
        display(p->lchild);
        cout<<p->data<<"\t";
        display(p->rchild);
    }

    if ((p->lchild==NULL)&&(p->rchild!=NULL))
    {
        cout<<p->data<<"\t";
        display(p->rchild);
    }


    if ((p->lchild!=NULL)&&(p->rchild==NULL))
    {
        display(p->lchild);
        cout<<p->data<<"\t";
    }


    if ((p->lchild==NULL)&&(p->rchild==NULL))
    {
        cout<<p->data<<"\t";
    }

}




int main()
{
    node* root;
    int exit=0;
    int opt;
    root=NULL;
    root=create();
    while(1)
    {
        cout<<"\n1.Edit Tree 2.Display Tree";
        exit=0;
        cin>>opt;
        switch (opt)
        {
        case 1:
            addNew(root,root,&exit);
            break;

        case 2:
            cout<< "Inorder is:"<<endl;
            display(root);
            break;
        }
    }
    return 0;

}
