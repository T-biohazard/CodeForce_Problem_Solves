
//access modifier

#include<iostream>
#include<conio.h>
using namespace std;

class Employee{
public:
    string name;
    string age;
    int id;

    void toString(){//mathod
    cout<<"Name: "<<name<<" Age:"<<age<<" Id: "<<id<<endl;
    }
};


int main(){

Employee employee1;
employee1.name="Joe";
employee1.age="25";
employee1.id=112;

employee1.toString();
}
