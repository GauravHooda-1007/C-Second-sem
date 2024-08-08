#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the desired year: \n";
    cin >> a;
    if(a%100 == 0){
        if(a%400 == 0){
            cout << "Entered number is a leap year";
        }
        else{
            cout << "Entered number is not a leap year";
        }
    }
    else if(a%100!=0){
        if(a%4==0){
            cout << "Entered number is a leap year";
        }
        else {
            cout << "Entered number is not a leap year";
        }
    }
}