#include <iostream>
using namespace std;

class A{
public:
    void print1(){
        cout << "Hello There" << endl;
    }
};

class B{
public:
    void print2(){
        cout << "General Kenobi!!!!" << endl;
    }
};

class C : public B, public A{
public:
    void print3(){
        cout << "You are a Bold one" << endl;
    }
};

class D : public C{
};

int main(){
    A a;
    B b;
    C c;
    D d;
    a.print1();
    b.print2();
    c.print1();
    c.print2();
    c.print3();
    d.print1();
    d.print2();
    d.print3();
};