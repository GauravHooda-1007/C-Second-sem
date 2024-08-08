#include <iostream>
using namespace std;

int fact(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x* fact(x-1);
    }
}

int main(){
    int x,y;
    cout << "Please enter the desired number: \n";
    cin >> x;
    y = fact(x);
    cout << "The factorial of the entered number is: \n" << y;
}