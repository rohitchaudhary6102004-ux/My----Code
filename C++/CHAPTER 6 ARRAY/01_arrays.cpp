#include <iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5};
    cout << array << endl;
    cout << array[2] << endl;
    cout << sizeof(array) <<" bytes" <<endl;
    // int length = sizeof(array) / 4;
    int length = sizeof(array) / sizeof(array[0]);
    cout << "Length of array : " << length << endl;
    int indexOflastElement = length -1;
    cout << "Index of last element of array : " << indexOflastElement << endl;
    cout <<"Size of Int : " << sizeof(int) << endl;
    cout <<"Size of Char : " << sizeof(char) << endl;
    cout <<"Size of Float : " << sizeof(float) << endl;
    cout <<"Size of Double : " << sizeof(double) << endl;
    cout <<"Size of Unsigned Long : " << sizeof(unsigned long) << endl;
    
    return 0;
} 