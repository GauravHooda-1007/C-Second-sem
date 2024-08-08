#include <iostream>
using namespace std;

class rectangle{
public:
    int length,breadth,area;
    rectangle(){
        length = 0;
        breadth = 0;
    }
    rectangle(float l, float b){
        length = l;
        breadth = b;
    }
    rectangle(float l){
        length = l;
        breadth = l;
    }
    float Area(){
        return length*breadth;
    }
};

 int main(){
    rectangle r1;
    rectangle r2(3,9);
    rectangle r3(5);
    cout<<"Area: "<<r1.Area()<<endl;
    cout<<"Area: "<<r2.Area()<<endl;
    cout<<"Area: "<<r3.Area();
}