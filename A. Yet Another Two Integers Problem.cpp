#include <iostream>
using namespace std;
int main(){
int a,b,c,i;
cin>>a;
for(i=0;i<a;i++){
    cin>>b>>c;
int d=abs(b-c);
cout<<d/10+(d%10!=0)<<endl;
}
}
