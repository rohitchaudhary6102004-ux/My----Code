 #include<stdio.h>
 int main(){
    int m;
    printf("enter no of rows :");
    scanf("%d",&m);
    int n;
    printf("enter no of columns :");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int i=1;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
 }
 