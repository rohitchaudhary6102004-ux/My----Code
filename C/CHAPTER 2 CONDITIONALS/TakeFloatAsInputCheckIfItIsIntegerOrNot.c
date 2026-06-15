#include<stdio.h>
int main(){
    float x; // x = 3.14
    printf("Enter a Number : ");
    scanf("%f",&x);
    int y = (int)x; //y = 3
    float z = (float)y; // z = 3.0000000
    if (x-z >0) printf ("Not an Integer");
    if (x-z == 0) printf ("It is an Integer");
    return 0;
}