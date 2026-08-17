//friend function to add  two private members of two classes
#include <iostream>
using namespace std;
class ClassB;
class ClassA{
    private:
        int A;
    public:
        ClassA(){
            A = 10;
        }
        friend void addData(ClassA, ClassB); //friend function
};
class ClassB{
    private:
        int B;
    public:
        ClassB(){
            B = 20;
        }
        friend void addData(ClassA, ClassB);
};
void addData(ClassA a, ClassB b){
    int sum = 0;
    sum = a.A + b.B;
    cout<<"Sum = "<<sum;
}
int main(){
    ClassA a1;
    ClassB b1;
    addData(a1,b1);
    return 0;
}


