#include <iostream>
using namespace std;
int main(){
    int n;
    int k = 0;
    cout << "Enter your NUmber : ";
    cin >> n;
    for (int i=1;n>0;i++){
        k++;
        n = n/10;
    }
    cout << " The no of Digits are : "<< k ;
}
