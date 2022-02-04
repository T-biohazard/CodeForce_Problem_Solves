//49 2D

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int arr[100][100];

cout<<"Input Row and Column: ";
int a,b,i,j;

cin>>a>>b;

for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        cin>>arr[i][j];
    }
}

for(i=0;i<a;i++){
    for(j=0;j<b;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

getch();
}
