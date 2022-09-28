#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
int a,b,c[100],d;
cin>>a;
cin>>b;
for (int i=0;i<b;i++){
    cin>>c[i];
}
cin>>d;
for (int i=b;i<b+d;i++){
    cin>>c[i];
}
int count=0;
sort(c,c+(b+d));//memo address

for(int i=0;i<b+d;i++){
    if(c[i]!=c[i+1]){
    count++;
    }
   }
   if(count==a){
cout<<"I become the guy.";}
else{
    cout<<"Oh, my keyboard!";
}
return 0;
}
