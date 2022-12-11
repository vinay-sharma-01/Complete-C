#include<stdio.h>
#include<stdbool.h>

int main(){
    int num1 = 45;
    int num2 = 55;
    printf("%d \n", 5 > 4);
    printf("%d \n", 5 < 4);
    printf("%d \n", 5 >= 4);
    printf("%d \n", 5 <= 4);
    printf("%d \n", 5 != 4); //Not equal to

    printf("%d \n",(56 > 45) && (55 > 45)); //Logical And
    printf("%d \n",(56 > 45) || (55 > 45)); //Logical OR
    printf("%d \n", !(56 > 45)); //Logical Not

    bool s = num1 > num2; //Variable comparision
    printf("%d\n", s);
    bool t = num1 < 6;//Variable to number comparision

    return 0;
}