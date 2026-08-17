// Demonstration of multiple catch blocks in exception handling
#include <iostream>
using namespace std;

int main(){
    int choice;
    cout<<"Enter your choice(1 or 2 or 3): ";
    cin>>choice;
    try{
        if(choice ==1){
            throw 10;
        }
        else if(choice == 2){
            throw 5.5;
        }
        else if(choice == 3){
            throw 'A';
        }
        else{
            cout<<"No exception occured.";
        }
    }
    catch(int a){
        cout<<"Integer exception occured: "<<a;
    }
    catch(double a){
        cout<<"double exception occured: "<<a;
    }
    catch(char a){
        cout<<"character exception occured: "<<a;
    }
    return 0;
}