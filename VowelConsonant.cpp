#include <iostream>
using namespace std;

int main(){
    char a;
    cout<<"please enter a desired character: \n";
    cin>> a;
    if(a=='a'|| a=='A' || a=='e' || a=='E'|| a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U'){
        cout<<" entered character is a vowel";
    }
    else{
        cout<<" entered character is a consonant";
    }
}