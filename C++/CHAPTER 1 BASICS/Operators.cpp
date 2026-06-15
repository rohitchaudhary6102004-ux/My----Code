#include<iostream>
using namespace std;
int main(){
    int num1 = 10;
    int num2 = 4;
    bool a = true;
    bool b = false;
    // Arithmetic  Operators
    cout<<num1 + num2 <<endl;//14
    cout<<num1 - num2 <<endl;//6
    cout<<num1 * num2 <<endl;//40
    cout<<num1 % num2<<endl;//2
    cout<<num1 / num2 <<endl<<endl;//2

    // Relational Operators
    cout<<(num1==num2)<<endl;//false or 0
    cout<<(num1!=num2)<<endl;//true or 1
    cout<<(num1>num2)<<endl;//true or 1
    cout<<(num1<num2)<<endl<<endl;//false or 0

    // Logical  Operators
    cout<<(a && b)<<endl;//false or 0
    cout<<(a || b)<<endl;//true or 1
    cout<<(!a)<<endl;//false or 0
    cout<<(!b)<<endl<<endl;//true or 1

    num1 += 3;
    cout<<num1<<endl;//13
    num2 -= 2;
    cout<<num2<<endl;//2
    return 0;
}