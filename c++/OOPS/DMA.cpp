#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll_number,age;
    string grade;
};
int main(){
     student *s=new student;
     (*s).name="Rohit";
     (*s).age=19;
     (*s).roll_number=47;
     (*s).grade="A+";
     cout<<s->name<<endl;
     cout<<s->age<<endl;
     cout<<s->roll_number<<endl;
     cout<<s->grade<<endl;
}