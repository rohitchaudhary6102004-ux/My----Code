#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int c = 5;
    int d = 7;

    // Bitwise Operators
    cout << (~a) << endl; // 1
    cout << (~b) << endl; // 0

    // Right Shift Operator
    cout << (c >> 1) << endl;  // 0
    cout << (d >> 1) << endl;  // 0

    // size of operator
    cout << sizeof(d) << endl; // 4

    //ternary operator (condition ? Expression 1 : Expression 2)
     bool result = (4 == 5)? true : false; // false
     cout << result;
    return 0; 
} 