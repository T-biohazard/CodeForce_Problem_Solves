
#include<iostream>
using namespace std;

int main(){
int n,s,r,l,k,p,q,t,o;
cin>>n;
while(n--){
    cin>>k>>s>>r;
      p=s-r;
      l=r/(k-1);
      t=r%(k-1);
      
      for(int ii=0;ii<k-1;ii++){
        if(t>0){
            cout<<l+1<<" ";
        }
        else{
            cout<<l<<" ";
        }
      
      }

cout<<p<<endl;

        }
    
}




