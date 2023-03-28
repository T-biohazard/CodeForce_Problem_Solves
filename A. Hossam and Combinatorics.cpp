#include<iostream>
using namespace std;

int main(){
int n,a,b[100],c,i,j,x,y;

cin>>n;
while(n--){
cin>>a;
for(i=0;i<a;i++){
cin>>b[i];
}
int m=0;
for(i=0;i<a;i++){
m=b[i];
for(j=0;j<a;j++){
     c=m-b[j];
     x=c;
     y=max(x,y);
     x=0;
     m=b[i+1];
}
cout<<y;
}

}

}
