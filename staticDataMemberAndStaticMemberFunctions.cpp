//static data member and static member function code example

#include <iostream>
using namespace std;
class counting{
    private:
        static int count; //static data member
    public:
        counting(){
            count++;
        }
        static void display(){ //static member function
            cout<<"Number of objects created: "<<count;
        }
};
int counting :: count = 0; //initializing static data member
int main(){
    counting c1;
    counting c2;
    counting c3;
    counting::display(); //calling static member function
    return 0;
}