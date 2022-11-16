
#include<iostream>
using namespace std;

int main(){
int c=0,x;
int a[]={100,20,10,5,1};

cin>>x;
for(int i=0;i<5;i++){
c+=x/a[i];
x=x%a[i];
}
cout<<c;
}

