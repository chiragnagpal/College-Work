#include <iostream>
using namespace std;

int main(){
int n,i;
struct item{
char name[10];
char type;
int pri;
} items[100];

cout<<"enter the no. of items"<<endl;
cin>>n;

for (i=0;i<n;i++){
cout<<i+1<<"\tItem"<<endl;
cout<<"enter name";
cin>>  items[i].name;
cout<<"enter type";
cin>> items[i].type;
cout<<"enter priority";
cin>> items[i].pri;
}
cout<<"Fruits"<<endl;
int low;
for(i=0;i<n;i++){

if (items[i].type == 'f'){

   cout<<items[i].name<<endl;

}
}
cout<<"Vegetable"<<endl;
for(i=0;i<n;i++){
if (items[i].type == 'v'){
   cout<<items[i].name<<endl;
}
}
return 0;
}
