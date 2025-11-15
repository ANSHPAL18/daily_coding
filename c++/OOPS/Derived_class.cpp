#include<iostream>
using namespace std;
class human{
    string religon,colour;
    public:
    string name;
    int age,weight;
};
class student:protected human{
    int roll_number,fees;
    public:
    Student(string  name,int age,int weight,int roll_number,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void display(){
        cout<<"name:-"<<name<<endl<<"Age:-"<<age<<endl<<"Weight:-"<<weight<<endl<<"Roll Number:-"<<roll_number<<endl<<"Fees:-"<<fees<<endl<<endl;
    }
};
class Teacher:protected human{
    int salary,id;
    public:
    teacher(string name,int age,int weight,int salary,int id){
          this->name=name;
        this->age=age;
        this->weight=weight;
        this->salary=salary;
        this->id=id;
    }
      void display(){
        cout<<"name:-"<<name<<endl<<"Age:-"<<age<<endl<<"Weight:-"<<weight<<endl<<"Salary:-"<<salary<<endl<<"ID:-"<<id<<endl;
    }
};
int main(){
   student A; 
   A.Student("Ansh",19,82,47,151800);
   A.display();
   Teacher B;
   B.teacher("Mahesh",55,100,30000,240213490);
   B.display();
}