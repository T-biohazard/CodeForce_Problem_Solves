
#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
int main()
{
    int t;
    long long int n,sum1,sum2,d,i,j;
    cin>>t;
    while(t--)
    {
        sum1=sum2=0;
        cin>>n;

        if(n%4!=0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1; i<n-2; i+=2){
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<"\n";
        }
    }
}
/*
SIMPLE INPUT
5
2
4
6
8
10
*/


/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b[100],c;
cin>>a;
vector <int> ele;

for (int i=0;i<a;i++){
    if(i%2==0){
        ele.push_back(i);
    }
}
for (int i=0;i<a;i++){
    if(i%2!=0){
        ele.push_back(i);
   sum+=i;
    }
}
int sum=0,sum1=0;
for(int i=0;i<ele.size();i++){

}
for(int i=0;i<ele.size()/2;i++){
sum1+=ele[i]
}
}

*/
