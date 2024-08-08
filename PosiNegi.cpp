#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Please enter a desired number: \n";
    cin>>a;
    if(a>0){
        cout<<a<< "is a positive number";
    }
    else if(a<0){
        cout<<a<< "is a negative number";
    }
    else{
        cout<<a<< "is a neutral number";
    }
}