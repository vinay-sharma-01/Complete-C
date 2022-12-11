#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num: \n", num);
    scanf("%d", &num);
    printf("The value of num is %d \n",num);
    int n;
    char s;
    printf("Enter a number and a character: ");
    scanf("%d %c", &n, &s);
    printf("The number is %d and the character is %c \n", n, s);

    return 0;
}