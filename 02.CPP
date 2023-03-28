
#include<iostream>

using namespace std;
  
int main(){
int a,b,c,x,y;
string s;
cin>>a;
while(a--){
    cin>>b;
      c=b;
    for(int i=0;i<b;i++){
    cin>>s;
  
    x=s[0];
    y=s[b-1];
    if(x!=y){
        c-=2;
        x++;
        y--;
    }
    else{
        cout<<c<<endl;
    }

    }

}


}