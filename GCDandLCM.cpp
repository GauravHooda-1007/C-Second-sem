#include <iostream>
using namespace std;

int main(){
    int n,a,b,lcm,hcf;
    cout << "Please enter the desired input, 1-GCD(Greatest common divisor) ,2-LCM(Least common multiple): \n";
    cin >> n;
    cout << "Please enter the two desired number: \n";
    cin >> a >> b;
    if(n==1){
        lcm = (a>b)?a:b;
        while(true){
            if(lcm%a==0 && lcm%b==0) break;
            lcm++;
        }
        cout << "LCM of the entered numbers is " << lcm;
    }
    if(n==2){
        hcf = (a<b)?a:b;
        while(true){
            if(a%hcf==0 && b%hcf==0) break;
            hcf--;
        }
        cout << "GCD of the entered number is " << hcf;
    }

}