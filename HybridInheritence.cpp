#include <iostream>
using namespace std;

class car{
public:
    void display(){
        cout << "\n Car class";
    }
};

class FCar : public car{
public:
    void display2(){
        cout << " sdad";
    }
};

class ECar : public car{
private:
    int s=5;
public:
    void display3(){
        cout << "vasdf";
    }
};

class HCar : public ECar, public FCar{
public:
    void display4(){
        cout << " fdafdsafs";
    }
};

int main(){
    car C;
    FCar F;
    ECar E;
    HCar H;
    H.display();
    E.cout << s;
}