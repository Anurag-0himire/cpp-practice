// this pointer in c++
// this pointer is  a special pointer that points to the current object of the class
#include <iostream>
using namespace std;
class Student{
    private:
    int age;
    public:
    void setAge(int age){
        this -> age = age; //it is used when data member name and parameter name is same
    }
    void display(){
        cout<<"Age: "<< this -> age; 
    }
};
int main(){
    Student s;
    s.setAge(10);
    s.display();
    return 0;
}