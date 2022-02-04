
//encaplutation

#include<iostream>
#include<conio.h>
using namespace std;

class Employee{
private:         //*encapsulated
    string name;
    string age;
    int id;


public:
    void setName(string Name){ //here how the get encapsulated names
        name=Name;
    }
  string getName(){  //here how the get encapsulated names
    return name;
    }


    void setAge(string Age){ //here how the get encapsulated names
        age=Age;
    }
  string getAge(){  //here how the get encapsulated names
    return age;
    }

 void setId(int Id){ //here how the get encapsulated names
        id=Id;
    }
  int getId(){  //here how the get encapsulated names
    return id;
    }




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

string x;
cout<<"Enter age: ";
cin>>x;
employee1.setAge(x);    //**
cout<<"Employee1 age is: "<<employee1.getAge();


}


