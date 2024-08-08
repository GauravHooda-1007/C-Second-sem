// write a program to access members of a student class using pointers to object members

#include <iostream>
using namespace std;

class number{
public:
    int n;
public:
    void inputNum(){
        cout << "Enter an integer number: ";
        cin >> n;
    }
    void displayNum(){
        cout << "Num: " << n << endl;
    }
};

int main(){
    number na, *nb;
    nb = &na;
}