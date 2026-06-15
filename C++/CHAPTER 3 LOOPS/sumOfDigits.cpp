#include <iostream>
using namespace std;
int main(){
    int n, a;
    int sum = 0;
    cout << "Enter your Number : ";
    cin >> n;
    while(n > 0){
        a  = n % 10;
        n = n / 10;
        sum += a;
    }
    cout << "The sum of Digits are : " << sum ;
}