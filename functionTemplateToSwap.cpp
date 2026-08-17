//function template to swap two integers and two floats
#include <iostream>
using namespace std;
template <class T>
void swapData(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5, b = 6;
    float p = 5.6, q = 1.1;

    cout<<"before swapping: "<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"p = "<<p<<" q = "<<q<<endl<<endl;

    cout<<"after swapping: "<<endl;
    swapData(a,b);
    swapData(p,q);

    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"p = "<<p<<" q = "<<q<<endl;
    return 0;
}