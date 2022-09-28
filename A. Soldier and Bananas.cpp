#include<iostream>

using namespace std;
int main(){

int x,y,z;
cin>>x>>y>>z;
int sum=0;
for(int i=1;i<=z;i++){
sum=sum+i;
}
int a=(sum*x)-y;
if(a<=0){
    cout<<"0";

}
else{
    cout<<a;
}
}
