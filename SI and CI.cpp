#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int a,p,r,t,n,C;
    cout << "Please enter the desired choice: 1-Simple Interest, 2-Compound Interest: \n";
    cin >> a;
    if(a==1){
        cout << "Please enter the principal amount: \n";
        cin >> p;
        cout << "Please enter the rate of the interest: \n";
        cin >> r;
        cout << "Please enter the tenure of the interest: \n";
        cin >> t;
        cout << "The simple interest comes out to be \n" << (p*r*t)/100;
    }
    if (a==2){
        cout << "Please enter the principal amount: \n";
        cin >> p;
        cout << "Please enter the rate of the interest: \n";
        cin >> r;
        cout << "Please enter the tenure of the interest: \n";
        cin >> t;
        cout << "Please enter the number of times that the interest is compounded: \n";
        cin >> n;
        C = p * pow((1+(r/(n*100))),(n*t));
        cout << "The compound interest comes out to be \n" << C;
    }
}