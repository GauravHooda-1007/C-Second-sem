#include <iostream>
using namespace std;

class Area{
public:
    int area;
};

class Rectangle: public Area{
    int length;
    int width;
public:
    void input(){
        cout<<"Enter the length and the width of the rectangle:";
        cin>>length>>width;
    }
    friend void area(Rectangle *r);
};

class Square: public Area{
    int side;
public:
    void input(){
        cout<<"Enter the side of the Square:";
        cin>>side;
    }
    friend void area(Square *s);
};

void area(Rectangle *r){
    r->area = r->length*r->width;
}

void area(Square *s){
    s->area = s->side * s->side;
}

int main(){
    Square s;
    Square *ptrs = &s;
    Rectangle r;
    Rectangle *ptrr = &r;
    r.input();
    s.input();
    area(ptrr);
    area(ptrs);
    cout<<"The area of the Square is "<< ptrs->area<<endl;
    cout<<"The area of the Rectangle is "<< ptrr->area<<endl;
}