#include<stdio.h>
void oddEven(int x){
    if (x%2==0) printf("%d is Even ",x);
    else printf("%d is Odd ",x);

}
int  main(){
    int a;
    printf("Enter the Numebr ");
    scanf("%d",&a);
    oddEven(a);
    return 0;
} 