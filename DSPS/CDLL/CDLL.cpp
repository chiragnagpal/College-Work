#include <iostream>
using namespace std;


typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;

};

node* create(int*);
void display(node*,int*,int*);
void display2(node*,int*,int*);


int main()
{
    node* head;
    int n,opt,k;
    head=NULL;
    cout<<"enter no. of digits to be entered";
    cin>>n;
    head=create(&n);
    while(1){
    cout<<"enter option 1.Forward 2.Reverse";
    cin>>opt;
    cout<<"enter index of element from where you want to begin printing:";
    cin>>k;
    if (opt == 1){
    display(head,&k,&n);
    }
    else{
    display2(head,&k,&n);
    }
    }
    return 0;
}

node* create(int* n)
{
    node* start;
    node* p;
    node* q;
    int i;
    start=new node;
     cin>>start->data;
     start->next=NULL;
     start->prev=NULL;
     p=start;
     for(i=0; i<*n-1; i++)
    {
        q=p;

        p->next=new node;
        p=p->next;
        p->prev=q;
        cin>>p->data;
        p->next=NULL;

     }
    p->next=start;
   start->prev=p;
   return start;
}

void display(node* p,int* k, int* n)
{
    int i;
    for(i=0;i<*k-1;i++){
    p=p->prev;
    }
    for(i=0;i<*n;i++){
    cout<<p->data<<endl;
    p=p->next;

    }

    }

void display2(node* p,int *k,int *n )
{
    int i;

    for(i=0;i<*k-1;i++){
    p=p->next;
    }
    for(i=0;i<*n;i++){
    cout<<p->data<<endl;
    p=p->prev;

    }

}
