#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
int a,b,c[100],d;
cin>>a;
for(int i=0;i<a;i++){
       cin >> c[i];


int x=c[i]/2;
int f=pow(2,a);
for(int y=1;y<a/2;y++){
           f=f+pow(2,c[y]);
}
int z=0;
for(int y=a/2;y<a;y++){
           z=z+pow(2,c[y]);
}
d=f-z;
cout<<d<<endl;
     }

}
