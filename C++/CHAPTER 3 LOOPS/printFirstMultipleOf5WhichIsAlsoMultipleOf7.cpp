#include <iostream>
using namespace std;
int main(){
    // int i = 1;
    // while (i <= 100){
    //     // cout << i << endl;
    //     if(i%5 == 0 && i%7 == 0){
    //         cout << i;
    //         break;
    //     }
    //     i++;
    // }


    // for (int i=5;i<=100;i+=5){
    //     if( i%7 == 0){
    //         cout << i;
    //         break;
    //     }
    // }

    int i = 5;
    while(true){
        if(i%7 == 0){    // BEST APPROACH
            cout << i;
            break;
        }
        i+=5;
    }



}