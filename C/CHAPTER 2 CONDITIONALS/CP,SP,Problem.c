#include<stdio.h>
int main(){
    int cp, sp;
    printf("Enter a Cost Price : ");
    scanf("%d",&cp);
    printf("Enter a Seliing Price : ");
    scanf("%d",&sp);
    if (sp-cp > 0) printf("Profit : %d",sp-cp);
    if (sp-cp == 0) printf ("Neither Profit nor Loss ");
    if (sp-cp < 0) printf ("Loss : %d",cp-sp);
    return 0;
}