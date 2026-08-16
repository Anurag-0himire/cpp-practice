// Write a program to concatenate two strings (name and address of a person) using the concept of containership.
#include <iostream>
using namespace std;

class Person {
private:
    int age;
    string name;
public:
    void input() {
        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Name: ";
        cin >> name;
    }
    void display() {
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }
};
class Details {
public:
    Person P;   // Containership
    void getData() {
        P.input();
    }
    void displayData() {
        P.display();
    }
};
int main() {
    Details D;
    D.getData();
    D.displayData();
    return 0;
}