#include<iostream>
using namespace std;
main(){
int a,b,c[100];
int x,y,z,v;
string s;
int count=0;
cin>>x>>y>>z>>v;
cin>>s;
for(int i=0;i<s.size();i++){
      if(s[i]=='1'){
          count+=x;
      }
      else if(s[i]=='2'){
          count+=y;
      }
      else if(s[i]=='3'){
           count+=z;
      }
      else {
           count+=v;
      }
     }
     cout<<count;
}


