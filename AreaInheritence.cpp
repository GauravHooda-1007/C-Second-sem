#include <iostream>
using namespace std;
class rectangle;
class square;
class Area{
public:
    int a,b;
public:
    void input(){
        cout << "Enter the sides of the figure: ";
        cin >> a>>b;
    }
};

class rectangle : public Area{
    int x=a, y=b;
public:
    friend void area(rectangle,square);
};

class square : public Area{
    int x=a, y=b;
public:
    friend void area(rectangle, square);
};

void area(rectangle r, square s){
    cout << "Area of rectangle: " << r.x*r.y;
    cout << "Area of square: " << s.x*s.y;
}

int main(){
    Area o1;
    o1.input();
    rectangle o2;
    square o3;
    area(o2,o3);
}