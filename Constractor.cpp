
//Constractor-same name as class,must public, no return type

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


    Employee(string Name,string Age, int Id){
    name=Name;
    age=Age;
    id=Id;
    }
};


int main(){

Employee employee1=Employee("Tahsin","22",112);//***
employee1.toString();

Employee employee2=Employee("Saab","22",169);
employee2.toString();

}

