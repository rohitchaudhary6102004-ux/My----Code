#include<stdio.h>
int min (int x, int y){
    if(x<y) return x;
    else return y;
}
int  main(){
    int a;
    printf("Enter the 1st Numebr ");
    scanf("%d",&a);
    int b;
    printf("Enter the 2nd  Numebr ");
    scanf("%d",&b); 
    int m = min(a,b);
    printf("Minimun of %d and %d is %d ",a,b,m);
    return 0;
} 