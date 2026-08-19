// demonstration of constructor overloading and copy constructor
#include <iostream>
using namespace std;
class Student{
    private:    
        int age;
        string name;
    public:
        Student(){
            age = 10;
            name = "unknown";
        }
        Student(int a, string n){
            age = a;
            name = n;
        }
        Student(const Student &s){
            age = s.age;
            name = s.name;
        }
        void display(){
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
        }
};
int main(){
    Student s1;
    Student s2(5,"ram");
    Student s3 = s2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}

