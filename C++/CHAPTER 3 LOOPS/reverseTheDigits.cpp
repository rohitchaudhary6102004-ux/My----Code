#include <iostream>
using namespace std;
int main(){
    int n, a;
    int reverse = 0;
    cout << "Enter your Number : ";
    cin >> n;
    while(n > 0){
        a  = n % 10;
        n = n / 10;
        reverse = reverse * 10 + a;
    }
    cout << "The reverse of Digits are : " << reverse ;
}