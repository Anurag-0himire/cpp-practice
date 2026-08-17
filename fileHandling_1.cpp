
// Write a C++ program to input record of 'n' students (name, address and roll) and save to a file. Display the record of only those student whose address is "Kathmandu" after reading from file.
#include <iostream>
#include <fstream>
#include<cstring>
using namespace std;
class Student{
    private:
    char name[50];
    char address[50];
    int roll;
    public:
    void inputData(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"enter address: ";
        cin>>address;
        cout<<"enter roll: ";
        cin>>roll;
    }
    void displayData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"roll: "<<roll<<endl<<endl;
    }
    bool isKathmandu(){
        return strcmp(address, "Kathmandu")==0;
    }
};
int main(){
    int n;
    Student s;
    cout<<"Enter the number of records: ";
    cin>>n;
ofstream fout("student.dat", ios::binary);

for(int i = 1; i<=n; i++){
    cout<<"Enter student "<<i<<" details: "<<endl;
    s.inputData();
    fout.write((char*)&s, sizeof(s));
}
fout.close();

ifstream fin("student.dat", ios::binary);
    cout<<"Students from Kathmandu: "<<endl<<endl;
while(fin.read((char*)&s, sizeof(s))){

    if(s.isKathmandu()){
        s.displayData();
    }
}
fin.close();
return 0;
}