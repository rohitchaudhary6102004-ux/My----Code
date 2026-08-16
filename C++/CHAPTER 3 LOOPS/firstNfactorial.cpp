#include <iostream>
using namespace std;
int main(){
    int n;
    int factorial = 1;
    cout << "Enter your Number : ";
    cin >> n;
    for(int i=n;i>=1;i--){
        factorial *= i;
    }
    cout << "The Factorial of a number is : " << factorial;
}