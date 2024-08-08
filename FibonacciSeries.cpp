#include <iostream>
using namespace std;
int main(){
    int a,i,b=0,c=1,d;
    cout << "Please enter the desired length of Fibonacci series: \n";
    cin >> a;
    cout << b<<" "<<c;
    for(i=2; i<a; ++i){
        d = b +c;
        cout << " " << d;
        b=c;
        c=d;
    }
}