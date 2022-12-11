#include<stdio.h>
int main(){
    double a, b,sum, sub, mul, div;
    printf("Enter two numbers: \n");
    scanf("%lf%lf", &a, &b);
    printf("Sum is %lf\n", a + b);//Sum
    printf("Subtraction is %lf\n", a - b);//Subtraction
    printf("Multiplication is %lf\n", a * b);//Miltiplication 
    printf("Division is %lf\n", a / b); //Division
    // printf("Remainder is %lf", (a % b)); //Valid for int values
    
    printf("%lf\n", a++); //Print karo then badhao
    printf("%lf\n", a--); // Print karo then ghatao
    printf("%lf\n", a);
    printf("%lf\n", ++a); //badhao fir print karo
    printf("%lf\n", --a); //Ghatao fir print karo


    return 0;
}