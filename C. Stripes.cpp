
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int a,n,b,c,d,i,j,k;
vector < vector<char>>arr(8,vector<char>(8,'.'));

cin>>n;

while(n--){

for(i=0;i<8;i++){
for(j=0;j<8;i++){
      cin>>arr[i][j];
}
}
bool done=false;
for(i=0;i<8;i++){
bool flag =true;
for(j=0;j<8;i++){
    if(arr[i][j]=='R'){
flag=false;
break;
}
}
if(flag){
done =true;
cout<<"R"<<endl;
break;
}
}

if(!done){
for(i=0;i<8;i++){
bool flag =true;
for(j=0;j<8;i++){
    if(arr[j][i]!='B')
flag=false;
break;
}
if(flag){
done =true;
cout<<"B"<<endl;
break;
}}
}
}}

