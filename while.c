#include<stdio.h>
int main(){
    // int count = 1;
    // while(count <5 ){
    //     printf("Count = %d \n", count);
    //     count++;
    // }

    // //! Multiplication Table
    // int num, i=1,s=0;
    // printf("Enter the value of which table you want :\n");
    // scanf("%d", &num);
    // while( i <=10){
    //     s = num * i;
    //     printf("%d * %d = %d\n ",num,i,s);
    //     i++;
    // }

    // //! Multiplication Table Opposite
    // int n, j = 10, mul = 0;
    // printf("Enter the value of which table you want :\n");
    // scanf("%d", &n);
    // while(j>=1){
    //     mul = n * j;
    //     printf("%d * %d =  %d\n", n, j, mul);
    //     j--;
    // }

    //! Factorial
    int a, k=1,temp=1;
    printf("Enter the value of which factorial you want :\n");
    scanf("%d", &a);
    do {
        temp = temp * k;
        k++;
    } while (k <= a);
    printf("Factorial of %d is %d \n", a, temp);

    return 0;
}