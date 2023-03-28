//https://www.codechef.com/problems/SNAPCHAT
#include<iostream>
using namespace std;

int main(){
int a,b[100],c[100],d,i,j,x,y,z;

cin>>a;
while(a--){
cin>>d;
for (i=0;i<d;i++){
cin>>b[i];}
for (i=0;i<d;i++){
cin>>c[i];
}
x=0,y=0;
for(i=0;i<d;i++){
if(b[i]!=0&c[i]!=0){
x++;
}
else{
    y=max(y,x);
    x=0;
}
}
y=max(y,x);
cout<<y<<endl;

}
return 0;
}


