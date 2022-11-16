#include<iostream>
using namespace std;
 main(){
int a,b,c[100];
cin>>a>>b;
int count=0;
for(int i=0;i<a;i++){
           cin>>c[i];
     if(c[i]+b<=5){
           count++;
     }
}

cout<<count/3;
}
