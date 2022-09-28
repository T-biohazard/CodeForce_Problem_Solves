
#include<iostream>
#include<algorithm>

using namespace std;
main(){
int i,j;
string s,t;
cin>>s>>t;
//lower case makin'
for(i=0;i<s.size();i++){
    s[i]=towlower(s[i]);
    t[i]=towlower(t[i]);
}
if (s==t)
    cout<<"0";
else{
for(i=0;i<s.size();i++){

    if(s[i]>t[i]){
        cout<<"1";
        break;}
        if(s[i]<t[i]){
        cout<<"-1";
        break;}

    }
}
}
