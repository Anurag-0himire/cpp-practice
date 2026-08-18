//class template to add two integers and two floats
#include <iostream>
using namespace std;
template <class T>
class adder{
    private:
        T a,b;
    public:
        void getData(){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
        void addData(){
            cout<<a+b<<endl;
        }
};
int main(){
    adder <int> a1;
    adder <float> a2;

    cout<<"For Integers: "<<endl;
    a1.getData();
    a1.addData();

    cout<<"for floats: "<<endl;
    a2.getData();
    a2.addData();
    
    return 0;
}