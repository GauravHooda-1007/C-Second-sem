#include <iostream>
using namespace std;

class student{
public:
    int age;
    string name;
    int Class;

    void setdata(){
        cout << "Enter the student details in order of Name, Age and Class: \n";
        cin >> name >> age >> Class;
    }
    void displaydata(){
        cout <<"Name of the student: " << name << endl;
        cout <<"Age of the student: " << age << endl;
        cout <<"Class of the student: " << Class << endl;
    }
};
int main(){
    int i,n;
    cout << "Enter the number of students: "<< endl;
    cin >> n;
    student s[i];
    for(i=0;i<n;i++){
        s[i].setdata();
    }
    for(i=0;i<n;i++){
        s[i].displaydata();
    }
}