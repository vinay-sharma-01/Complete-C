#include<stdio.h>
int main(){
    int a = 5; // only for integer value
    printf("%d \n", a);
    float b = 12.5; //for floating point and exponent values
    printf("%f \n", b);
    double d = 12.99; //for floating point, double int and exponent values
    double c = 12; 
    printf("%.2lf \n", c);
    printf("%.3lf \n", d);
    char f = 'S'; //For characters and String values
    char name[] = "Vinay Sharma"; //String
    printf("%c \n", f);
    printf("%s \n", name);

    double e = 5.5e6; //*1000000(means e to the power 6)
    printf("%lf \n", e);

    printf("Size of int %d Bytes \n", sizeof(int));
    printf("Size of float %d Bytes \n", sizeof(float));
    printf("Size of char %d Bytes \n", sizeof(char));
    printf("Size of double %d Bytes \n", sizeof(double));

    // If we use %d for printing character
    printf("%d", f); //ASCCII Code will print

    return 0;
}