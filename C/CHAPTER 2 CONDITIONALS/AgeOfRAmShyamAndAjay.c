#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter Ram age : ");
    scanf("%d",&a);
    printf("Enter shyam age : ");
    scanf("%d",&b);
    printf("Enter ajay age  : ");
    scanf("%d",&c);
    if (a<b){
        if (a<c) printf("Younger is Ram");
        else printf("Younger  is Ajay");
    }
    else printf("Younger is Shyam");
    return 0;
}