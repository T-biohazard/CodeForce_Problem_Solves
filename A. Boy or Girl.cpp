
#include<iostream>
#include<algorithm>

using namespace std;
main(){
int c=0;
string s;
cin>>s;

sort (s.begin(),s.end()); //****

for(int i=0;i<s.size();i++){
if(s[i]!=s[i+1]){
    c++;
}
}
if(c%2==0)
    cout<<"CHAT WITH HER!";
else
cout<<"IGNORE HIM!";

}
