
#include<iostream>
#include<conio.h>
using namespace std;

class Login{
private:
    string name;
    string password;
    string id;


public:
    void setName(string Name){
        name=Name;
    }
  string getName(){
    return name;
    }


    void setPass(string Password){
       password=Password;//
    }
  string getPass(){
    return password;//
    }

 void setId(string Id){
        id=Id;
    }
  string getId(){
    return id;
    }

    void toString(){
  cout<<"Dear "<<name<<", Id: "<<id<<" please select the option you need: "<<endl;
    }


   /* Login(string Name,string Password, string Id){
    name=Name;
    password=Password;//
    id=Id;
    }*/
};

class report{
private:
    string m;
public:
void setReport(string M){
    m=M;
}
string getreport(){
return m;
}

string toString(){
cout<<"Your report have been submitted successfully, Thank you"<<endl;
}
};


int main(){
string a,b,c,d;
int x,y;

Login log;
cout<<"Please Login here:"<<endl<<"Name: ";
cin>>a;
cout<<endl;
cout<<"Password: ";
cin>>b;
cout<<endl;
cout<<"ID: ";
cin>>c;
cout<<endl;
log.setName(a);
log.setId(c);
log.setPass(b);
log.toString();





while(1){
cout<<"1.HelpDesk Report a problem. "<<endl<<"2.View Result."<<endl<<"3.View earned credits "<<endl<<"4.View class schedule"<<endl;
cout<<"Enter:";
cin>>x;

if(x==1){
report rep;
cout<<"Submit your report here: ";
cin>>d;
rep.setReport(d);
rep.toString();
}

else if(x==2){
    cout<<"your current cgpa is 3.50.";
}
else if(x==3){
    cout<<"You have earned total 60 credits.";
}
else if(x==4){
    cout<<"Math ST 8.30 am"<<endl<<"CSE MW 8.30 am"<<endl<<"Phy ST 10.10 am"<<endl;

}
else{
    cout<<"error404";
    break;
}

}




}
