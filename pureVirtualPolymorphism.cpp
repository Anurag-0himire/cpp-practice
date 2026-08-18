//pure virtual polymorphism
#include<iostream>
using namespace std;
class Student{
    public:
        virtual void display()=0;
};
class Engineering:public Student{
    public:
        void display(){
            cout<<"I am an Engineer Student"<<endl;
        }
};
class Management:public Student{
    public:
        void display(){
            cout<<"I am a Management Student"<<endl;
        }
};
int main(){
    Student *S;
    Engineering E;
    Management M;

    S = &E;
    S -> display();

    S = &M;
    S -> display();
    return 0;
}