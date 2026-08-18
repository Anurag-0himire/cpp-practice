//rectangle class to polar class

#include <iostream>
#include <cmath>
using namespace std;
class Polar; //forward declaration
class Rectangle{
    private:
        float x,y;
    public:
        Rectangle(float p, float q){
            x = p;
            y = q;
        }
        void display(){
            cout<<"Rectangular coordinates: "<<endl;
            cout<<x<<","<<y<<endl;
        }

        operator Polar();
};
class Polar{
    private:
        float r, theta;
    public:
        Polar(float R, float T){
            r = R;
            theta = T;
        }
        void display(){
            cout<<"Polar coordinates: "<<endl;
            cout<<r<<","<<theta<<endl;
        }
};
Rectangle::operator Polar(){
    float r, theta;
    r = sqrt(x*x + y*y);
    theta = atan(y/x);
    return Polar(r, theta);
}
int main(){
    Rectangle R(5,6);
    R.display();
    Polar P = R; //type conversion
    P.display();
    return 0;
}