#include <iostream>
using namespace std;

int main(){
    int a,i;
    cout << "Enter a desired number: \n";
    cin >> a;
    for(i=1; i<=10; i++){
        cout << a << '*' << i << '=' << a*i << endl;
    }
}