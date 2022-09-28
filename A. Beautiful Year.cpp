#include<iostream>
using namespace std ;
main(){

int n;
cin>>n;
for(;;){
        n++;
    int x,y,z,t;
    x=n/1000;
    y=(n/100)%10;
    z=(n/10)%10;
    t=(n%10);
    if(x!=y&&x!=z &&x!=t && y!=z&&y!=t &&z!=t)
    break;

}
cout<<n;

}
