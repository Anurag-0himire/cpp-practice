//friend function to swap two private data members

#include <iostream>
using namespace std;
class ClassB;
class ClassA{
    private:
        int A;
    public:
        ClassA(){
            A = 5;
        }
        friend void swapData(ClassA &, ClassB &);
        void display(){
            cout<<"A = "<<A<<endl;
        }
};
class ClassB{
    private:
        int B;
    public:
        ClassB(){
            B = 10;
        }
        friend void swapData(ClassA &, ClassB &);
        void display(){
            cout<<"B = "<<B<<endl;
        }
};
void swapData(ClassA &a, ClassB &b){
    int temp = 0;
    temp = a.A;
    a.A = b.B;
    b.B = temp;
}
int main(){
    ClassA a1;
    ClassB b1;
    cout<<"Before swapping: "<<endl;
    a1.display();
    b1.display();
    swapData(a1, b1);
    cout<<"---------------------------"<<endl;
    cout<<"After swapping: "<<endl;
    a1.display();
    b1.display();
    return 0;
}