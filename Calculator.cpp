#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
int main(){
int w,x,y,z,n;

while(1){

cout<<"Input two digits:";
cin>>w>>x;

cout<<"press 1 to Sum"<<endl<<"press 2 to Multiply"<<endl<<"press 3 to Division"<<endl<<"press 4 to Minus"<<endl<<"press 5 to Mod"<<endl<<"press 6 to Strp"<<endl;
cin>>n;
if(n==1){
    cout<<"The Sum is = "<<w+x<<endl;
}
else if(n==2){
    cout<<"The Multiply is = "<<w*x<<endl;
}
else if(n==3){
    cout<<"The Division is = "<<w/x<<endl;
}
else if(n==4){
    cout<<"The Sum is = "<<w-x<<endl;
}
else if(n==5){
    cout<<"The Sum is = "<<w%x<<endl;
}

else if(n==6){
    cout<<"Thank You ! Have a great day";
    break;
}

else{
    cout<<"Wrong Input"<<endl;
}
}

getch();

}


