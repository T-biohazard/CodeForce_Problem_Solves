
#include<iostream>
using namespace std;
int main(){
int x,y,z,i,j,n;
char c;
string s;
cin>>n;
while(n--){
cin>>z;
for(int i=0;i<z;i++){
cin>>s;
x=0;
y=0;
for(int i=0;i<z;i++){
if(s[i]='U'){
           y++;
}
 if(s[i]='D'){
           y--;
}
 if(s[i]='L'){
           x--;
} if(s[i]='R'){
           x++;
}

}
if(x>=1&&y>=1){
           cout<<"YES"<<endl;
}
else
           cout<<"NO"<<endl;
}
}}
