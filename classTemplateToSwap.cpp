// class template to swap two values
#include <iostream>
using namespace std;
template <class T>
class Swap{
    private:
        T a, b;
    public:
        void getData(){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
        void swapData(){
            T temp = a;
            a = b;
            b = temp;
        }
        void display(){
            cout<<"After swapping: "<<endl;
            cout<<a<<" "<<b<<endl;
        }
};
int main(){
    Swap <int> s1;
    Swap <float> s2;

    cout<<"for integers: "<<endl;
    s1.getData();
    s1.swapData();
    s1.display();

    cout<<"for floats: "<<endl;
    s2.getData();
    s2.swapData();
    s2.display();
    return 0;
}