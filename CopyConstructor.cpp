#include <iostream>
using namespace std;

class distance{
private:
    int feet;
    float inch;
public:
    distance(int ft, float in){
        feet = ft;
        inch = in;
    }
    void display_data(){
        cout << "Feet: "<< feet<<"Inches: "<< inch << endl;
    }
};

int main(){
    distance d1(10,6.5);
    
}