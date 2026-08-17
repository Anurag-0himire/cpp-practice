// vector as a container of STL in c++

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Elements of vector: "<<endl;

    for (int x : v) {
        cout << x << endl;
    }

    return 0;
}