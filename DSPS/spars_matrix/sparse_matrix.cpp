
# include <iostream>
using namespace std;

class sparse{
int A[3][3], B[3][3], SPA[10][3], SPB[10][3],C[10][3],T[10][3],M[10][3],i,j,ttemp;

public:

void input(){
cout<<"enter values row wise for matrix A\n";

for(i=0;i<3;i++){
for(j=0;j<3;j++){
cin>>A[i][j];
}
}
cout<<"enter values row wise for matrix B\n";
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cin>>B[i][j];
}
}
}

void convert(){
int countA=0;
int countB=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++){
if ((A[i][j])!=0){
countA++;
SPA[countA][2]=A[i][j];
SPA[countA][0]=i;
SPA[countA][1]=j;
}
if ((B[i][j])!=0){
countB++;
SPB[countB][2]=B[i][j];
SPB[countB][0]=i;
SPB[countB][1]=j;
}
SPA[0][2]=countA;
SPA[0][0]=3;
SPA[0][1]=3;
SPB[0][2]=countB;
SPB[0][0]=3;
SPB[0][1]=3;
}
}
void display(){
cout<<"SPARSE MATRIX A\n";
for(i=0;i<=SPA[0][2];i++){
for(j=0;j<3;j++){
cout<<"|"<<SPA[i][j]<<"|";
cout<<"\t";
}

cout<<endl;
}
cout<<"SPARSE MATRIX B\n";
for(i=0;i<=SPB[0][2];i++){
for(j=0;j<3;j++){
cout<<SPB[i][j];
cout<<"\t";
}

cout<<endl;
}

}
};

int main(){
sparse mat;
int mode;
while(1){

cout<<"select the option\n1.Input\n2.Convert\n3.Display\n4.Add\n5.Transpose\n6.Multiply";
cin>>mode;
switch (mode){
case 1: mat.input();
        break;
case 2: mat.convert();
        break;

case 3: mat.display();
        break;

case 4:break;

case 5:break;

case 6:break;


};


}
return 0;

}

