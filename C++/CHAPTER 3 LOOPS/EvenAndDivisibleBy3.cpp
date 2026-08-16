#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter the number : ";
    cin >> a;
    if( a%2 == 0){
        cout << a << " is a Even Number ";
        if( a%3 == 0){
            cout << " and also divisible by 3" << endl;
            cout << a;
        }else{
            cout << " and not divisible by 3";
        }
    }
    else{
        cout << a <<" is Odd Number";
    }
}  