// Demonstration of exception handling in C++
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    try{
        if(b == 0){
            throw (b);
        }
        else{
            cout<<a<<" / "<< b << " = "<<a/b;
        }
    }
    catch(int b){
        cout<<"cannot divide by zero.";
    }
    return 0;
}
    