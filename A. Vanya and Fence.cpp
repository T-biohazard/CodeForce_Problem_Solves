#include<iostream>
using namespace std;
int main(){
int a,b,x=0,o=0;

cin>>a>>b;
int c[a];
for(int i=0;i<a;i++){
    cin>>c[i];
if(c[i]<=b){
    o++;
}
else{
    x+=2;
}}
cout<<o+x;

}
