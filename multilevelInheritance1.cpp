// Spring 2024 (Set 1) – Q.N. 3 (a): Create a class Person with data members Name and age . Derive
// a class Employee from Person with its data member employee_id . Derive another class
// Manager from Employee with its data member department . Receive the data members from each
// class's member function and display the data of all classes from the class Manager . [8 Marks]
// this is a multi level inheritance problem
#include <iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
    public:
    void input(){
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter age: ";
        cin>>age;
    }
};
class Employee: public person{
    protected:
    int employee_id;
    public:
    void getEmployee(){
        input();
        cout<<"enter employee id: ";
        cin>>employee_id;
    }
};
class Manager: public Employee{
    private:
    string depart;
    public:
    void getManager(){
        getEmployee();
        cout<<"enter department: ";
        cin>>depart;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Employee id: "<<employee_id<<endl;
        cout<<"Department: "<<depart<<endl;
    }
};
int main(){
    Manager M;
    M.getManager();
    M.display();
    return 0;
}