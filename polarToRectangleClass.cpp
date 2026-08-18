//polar to rectangle class

#include <iostream>
#include <cmath>
using namespace std;
class Rectangle;
class Polar{
    private:
        float r, theta;
    public:
        Polar(float r1, float theta1){
            r = r1;
            theta = theta1;
        }
        void display(){
            cout<<"Polar coordinates: "<<endl;
            cout<<r<<","<<theta<<endl;
        }

        operator Rectangle();
};

class Rectangle{
    private:
        float x,y;
    public:
        Rectangle(float p, float q){
            x = p;
            y = q;
        }
        void display(){
            cout<<"rectangular coordinates: "<<endl;
            cout<<x<<","<<y<<endl;
        }
};

Polar::operator Rectangle(){
    float x,y;
    x = r * cos(theta);
    y = r * sin(theta);

    return Rectangle(x,y);
}
int main(){
    Polar P(4, 0.5);
    P.display();
    Rectangle R = P;
    R.display();
    return 0;
}