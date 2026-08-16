#include<stdio.h>
int main(){
    int x;
    printf("Enter Percentage : ");
    scanf("%d",&x);
    // Method 1

    // if (x>=81) printf("Very Good");
    // if (x>=61 && x<=80)  printf("Good");
    // if (x>=41 && x<=60)  printf("Average");
    // if (x<=40) printf("Fail");

    // METHOD 2

    // if(x>=81) printf("Very Good");
    // else {
    //     if(x>=61) printf("Good");
    //     else {
    //         if(x>=41) printf("Average");
    //         else {
    //             printf("Fail");
    //         }
    //     }
    // }
    // Method 3

    if(x>=81) printf("Very Good");
    else if (x>=61) printf("Good");
    else if (x>=41) printf("Average");
    else printf("Fail");
    return 0;
}  