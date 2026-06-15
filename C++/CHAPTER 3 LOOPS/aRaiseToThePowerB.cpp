#include <iostream>
using namespace std;
int main(){
    int a, b;
    int result = 1;
    cout << "Enter the Base : ";
    cin >> a;
    cout << "Enter the Power : ";
    cin >> b;
    for(int i=1;i<=b;i++){
        result *= a;
       
    }
     cout << "The Result is : " << result << endl;

}