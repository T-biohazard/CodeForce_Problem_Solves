#include<iostream>
using namespace std;
int main(){
int n,a,b,i;
cin>>n;
for(i=0;i<n;i++){
     cin>>a;
   if(a>0&&a<4){
        cout<<"MILD"<<endl;
           }
   if(a>=4&&a<7){
    cout<<"MEDIUM"<<endl;
           }
   if(a>=7&&a<=10){
    cout<<"HOT"<<endl;
           }

}
}
