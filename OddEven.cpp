#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Please enter a desired number: \n";
    cin>>a;
    if(a%2==0){
        cout<<"Entered number is an even number";
    }
    else{
        cout<<"Entered number is an odd number";
    }
}