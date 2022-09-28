
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
string st;
for(int i=0;i<n;i++){
    cin>>st;
    int l=st.size();
    if(l<=10){
        cout<<st;
    }else{
    cout<<st[0]<<l-2<<st[l-1]<<endl;
    }
}
}
