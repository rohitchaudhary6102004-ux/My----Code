#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int sum = 0;
    int n;
    cout << "Enter your Number : ";
    cin >> n;
    while( i<= n){
        sum = sum + i;
        i++;
    }
    cout << "The Sum is : " << sum ;
}