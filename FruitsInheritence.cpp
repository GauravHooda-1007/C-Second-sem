#include <iostream>
using namespace std;


class Apple{
public:
    int A;
public:
    void A_NUM(){
        cout << "Enter the number of apples: "<<endl;
        cin >> A;
    }
};

class Mangoes{
public:
    int M;
public:
    void M_NUM(){
        cout << "Enter the number of Mangoes: "<<endl;
        cin >> M;
    }
};

class Fruit : public Mangoes, public Apple{
public:
    int F;
public:
    void F_NUM(){
        F = A+ M;
        cout << "Total number of Apples in the basket are: " << A<<endl;
        cout << "Total number of Mangoes in the basket are: " << M<<endl;
        cout << "Total number of fruits in the basket are: " << F;
    }
};

int main(){
    Fruit fa;
    fa.A_NUM();
    fa.M_NUM();
    fa.F_NUM();
}