
#include<iostream>
using namespace std;
int main(){

int arr[1000],n;
int count=0;
cin>>n;
while(n--){
    for(int j=0;j<3;j++){
        cin>>arr[j];

    }
   int sum=0;
   for(int i=0;i<3;i++){
    if(arr[i]==1) sum++;
   }
if(sum>=2){
    count++;
}
}
cout<<count;
}

