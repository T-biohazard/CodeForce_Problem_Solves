//abstract
#include<bits/stdc++.h>
#include<string.h>
using namespace std;


class SamsungUI{

virtual void ShowUI()=0; //*this how to create abstract

};

class SamsungModel : SamsungUI{

private:
string Android;
int Digit;

public:
    void setAndroid(string a){
         Android=a;
    }
    void setDigit(int digit){
        digit = Digit;
    }
    string getAndroid(){
    return Android;
    }
    int getdigit(){
    return Digit;
    }

  /*  void SamsungModel(string android,int digit ){

    android= Android;
      digit= Digit;
    }*/


void ShowUI()
{
   // cout<<"Android"<<getAndroid()<<endl;

cout<<"This is Android "<<getAndroid()<<"whis is "<<getdigit()<<" version"<<endl;
}

};

int main()
{

SamsungModel x;
x.setAndroid(" Orio ");
x.setDigit(8);
x.ShowUI();
}




