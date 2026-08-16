// Create a class Animal with data members name, age, and species.
// Create another class WildAnimal with data members region, diet, and conservation_status.
// Additionally, create another class PetAnimal with data members owner_name and favorite_food.
// The PetAnimal and WildAnimal classes are inherited from the Animal class. Each class should
// have at least one constructor that uses the base class constructor. Implement a showdata()
// member function in each class to display the respective information of the class members.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
protected:
    string name;
    int age;
    string species;

public:
    Animal(string n, int a, string s) {
        name = n;
        age = a;
        species = s;
    }
    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Species: " << species << endl;
    }
};

// Derived class: WildAnimal
class WildAnimal : public Animal {
private:
    string region;
    string diet;
    string conservation_status;

public:
    // Constructor using base class constructor
    WildAnimal(string n, int a, string s, string r, string d, string c)
        : Animal(n, a, s) {
        region = r;
        diet = d;
        conservation_status = c;
    }
    void showData(){
    Animal::showData();
    cout<<"Region: "<<region<<endl;
    cout<<"Diet: "<<diet<<endl;
    cout<<"conservation_status: "<<conservation_status<<endl;
    }
};

class petAnimal:public Animal{
    private:
    string owner_name;
    string favourite_food;
    public:
    petAnimal(string n, int a, string s, string o, string f):Animal(n, a, s){
        owner_name = o;
        favourite_food = f;
    }
    void showData(){
        Animal::showData();
        cout<<"Owner name: "<<owner_name<<endl;
        cout<<"Fav food: "<<favourite_food<<endl;
    }

};
int main(){
    WildAnimal W("tiger", 19, "jungllee", "Nepal", "deer", "conservationNeeded");
    petAnimal A("cow", 8, "pet", "ramGopal", "grass");
    W.showData();
    cout<<"-----------------------------------"<<endl;
    A.showData();
    return 0;
}