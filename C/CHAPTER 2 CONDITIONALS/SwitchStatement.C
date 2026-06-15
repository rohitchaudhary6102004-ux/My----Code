#include<stdio.h>
int main(){
    int a,b;
    char ch ;
    printf("ENter the operator :");
    scanf("%c",&ch);
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    
    // Switch statement

    switch(ch){
        case '+' :
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/' :
            printf("%d",a/b);
            break;
        default :
            printf("Invalid Operator");

    }
    return 0;
}