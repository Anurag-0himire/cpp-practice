//DMA example code
//DMA in C++ can be achieved by using new and delete operator.
//new operator is used to dynamically allocate memory. while delete operator is used to de-allocate the allocated memory by new operator
#include <iostream>
using namespace std;
int main(){
    int *p;
    p = new int;
    cout<<"enter any number: ";
    cin>>*p;
    //displaying the given data
    cout<<endl<<"Given number: "<<*p<<endl;
    delete p;
    return 0;
}