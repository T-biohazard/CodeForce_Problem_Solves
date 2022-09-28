#include<iostream>
#include<algorithm>

using namespace std;
main(){
int i,j;
string s;
cin>>s;

for(i=0;i<s.size();i+=2){
for(j=0;j<s.size()-1;j+=2){
    if(s[j]>s[j+2]){
        swap(s[j],s[j+2]);
    } } }
cout<<s;
}
