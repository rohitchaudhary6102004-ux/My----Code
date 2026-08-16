#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int binaryValue = 0;
    cout << "Enter the Decimal Number : ";
    cin >> n;
    for (int i=0;n>0;i++){
        int lastDigit = n % 2;
        binaryValue = (binaryValue) + (lastDigit* pow(10, i));
        n = n / 2;
    }
    cout << "Binary Value is : "<< binaryValue << endl;
}