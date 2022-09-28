#include<iostream>
using namespace std;
main(){
int a[100],i,j,k,l=0;
cin>>k;
string s;
for(i=0;i<k;i++){
    cin>>s;
if(s[1]=='+')
    l++;
else
    l--;
}
cout<<l;
}
