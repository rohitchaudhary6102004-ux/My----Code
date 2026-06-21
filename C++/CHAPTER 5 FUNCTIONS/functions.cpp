#include <iostream>
using namespace std;
int apples = 5;
int apples(){
    cout << "Apples";
    return apples;
}
int main(){
   int mango = apples();
   return 0;
}