#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a,b,ans,dis;
    cin>>t;
    while(t--){
        ans=dis=0;
        cin>>a>>b;
        if(a == b){
            cout<<0<<"\n";
            continue;
        }
        if(a>b){
            dis=a - b;
            ans++;
            if(dis % 2 !=0){
                ans++;
            }
        }
        else if(a < b){
            dis= b - a;
            ans++;
            if(dis % 2 != 1){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
int a,i,c=0;
int  s,t;
cin>>a;
for(i=0;i<a;i++){
           cin>>s>>t;

   if(s==t){
           cout<<s-t;
   }
   else{
           if(s>t){
              i=s-t;
              if(i%2==0){
                  cout<<"1";
              }
              else{

              }
           }
   }

}

}
