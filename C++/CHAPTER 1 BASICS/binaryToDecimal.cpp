#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int decimalValue = 0;
    cout << "Enter the Binary Number : ";
    cin >> n;
    for (int i=0;n>0;i++){
        int lastDigit = n % 10;
        decimalValue += (lastDigit * pow(2,i));
        n = n / 10;
    }
    cout << "Decimal Value is :" << decimalValue << endl;
} 