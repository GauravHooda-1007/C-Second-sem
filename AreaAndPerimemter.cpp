#include <iostream>
using namespace std;

int main(){
    int a,b,r,n;
    cout << "Please enter the desired shape of choice, 1-Rectangle, 2-Circle: \n";
    cin >> n;
    if(n==1){
        cout << "Please enter the length and breadth of the rectangle: \n";
        cin >> a >> b;
        cout << "Area of the rectangle is \n" << a*b << endl;
        cout << "Perimeter of the rectangle is " <<4*(a+b);
    }
    if(n==2){
        cout << "Please enter the radius of the circle: \n";
        cin >> r;
        cout << "Area of the circle is \n" << 3.14*r*r << endl;
        cout << "Perimeter of the circle is \n" << 2*3.14*r;
    }
}