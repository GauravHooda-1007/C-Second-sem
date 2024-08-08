#include <iostream>
using namespace std;

class Base
{ int x;
public:
    Base(int i){
        x = i; cout << "x="<<x;
    }
};
class Derived : public Base {
    int y;
public:
    Derived(int i,int j) : Base(j)
    { y = i; cout << "y="<<y;
    }
};

int main()
{
    Derived d(10,20) ;
}
