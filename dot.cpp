#include<iostream>
using namespace std;
int main(){
    int n,i,j,x,y;
    string m;
cin>>n;
while(n--){
    string m;
    cin>>m;
    int x=m[0]-'0';
    int y=m[2]-'0';
    if(m[1]=='+'){
cout<<x+y<<endl;
    }
    else{
cout<<x-y<<endl;
    }
    
} 


}
