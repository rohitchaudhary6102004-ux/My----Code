#include<stdio.h>
int main(){
    int l, b, a, p;
    printf("Enter the Length : ");
    scanf("%d",&l);
    printf("Enter the breadth : ");
    scanf("%d",&b);
    a = l * b;
    p = 2*(l+b);
    if (a>p) printf("Area is Greater");
    if (a==p) printf("Area is equal to perimeter");
    if (a<p) printf("Area is smaller");
    return 0;
}