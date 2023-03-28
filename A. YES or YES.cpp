#include<iostream>
using namespace std;
int main(){
int a,i,c=0;
string s;
cin>>a;
for(i=0;i<a;i++){
           cin>>s;

           if((s[0]=='Y'||s[0]=='y')&&(s[1]=='e'||s[1]=='E')&&(s[2]=='S'||s[2]=='s')){
                   cout<<"YES"<<endl;
           }


           else{
                      cout<<"NO"<<endl;
           }
}


}
