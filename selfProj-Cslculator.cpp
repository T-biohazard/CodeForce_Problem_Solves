
#include<iostream>
using namespace std;
int main(){

int a;
float b,c;
string s;


cout<<"****  EWU Grading System  ****"<<endl;
cout<<"Marks	Grade	CGPA"<<endl;
cout<<"97-100	A+	4.00"<<endl;
cout<<"90 - below 97	A	4.00"<<endl;
cout<<"87 - below 90	A-	3.70"<<endl;
cout<<"83 - below 87	B+	3.30"<<endl;
cout<<"80 - below 83	B	3.00"<<endl;
cout<<"77 - below 80	B-	2.70"<<endl;
cout<<"73 - below 77	C+	2.30"<<endl;
cout<<"70 - below 73	C	2.00"<<endl;
cout<<"67 - below 70	C-	1.70"<<endl;
cout<<"63 - below 67	D+	1.30"<<endl;
cout<<"60 - below 63	D	1.00"<<endl;
cout<<"below 60	F	0.00"<<endl;

cout<<"input Number of taken course:";
cin>>a;
float mul=0,sum=0,y,x;
for(int i=0;i<a;i++){
cout<<"input Credit:"<<endl;
cin>>b;
cout<<"input CGPA:"<<endl;
cin>>c;
sum=sum+b;
mul=mul+c*b;
}
y=mul/sum;
cout<<"Result: ";
cout<<y;
}
