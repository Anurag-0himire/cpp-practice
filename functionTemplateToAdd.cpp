// function template to add two integers and two floats
#include <iostream>
using namespace std;
template <class T>
void sum(T a, T b){
    cout<<"Sum = "<<a+b<<endl;
}
int main(){
    int x = 4;
    int y = 5;
    float p = 3.5;
    float q = 1.1;
    cout<<"sum of integers: ";
    sum(x,y);
    cout<<"sum of floats: ";
    sum(p,q);
    return 0;
}