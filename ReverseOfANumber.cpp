#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout << "Please enter the desired number: \n";
    cin >> a;
    d=a;
    while(a!=0){
        b = a %10;
        c = (c*10) + b;
        a = a / 10;
    }
    cout << c;
}