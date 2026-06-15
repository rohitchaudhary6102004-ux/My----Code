#include <iostream>
using namespace std;
int main(){
    float a = 3.145;
    cout << a <<endl;
    cout << int(a) << endl;

    // address Operator(&)
    int b = 12;
    cout << b << endl; // 12
    cout << (&b) << endl; // adress of a ie 0x7ff7ba50ebd8 which is changed in every run time 
}