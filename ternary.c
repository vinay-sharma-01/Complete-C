#include<stdio.h>

int main(){
    int a;
    printf("Enter any number : \n");
    scanf("%d", &a);
    (a % 2 == 0) ? printf("%d is a even number ",a) : printf("%d is a odd number ",a);
    return 0;
}