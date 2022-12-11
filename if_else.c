#include<stdio.h>
int main(){
    int age;
    printf("Enter Your age : \n");
    scanf("%d", &age);
    //! IF statement
    /*
    if(age>=18){
        printf("You can Vote ");
    }
    if (age<18){
        printf("Can't Vote");
    }
    */

   //!Else if statement
   /*
   if(age >=18){
       printf("You can vote");
   }
   else{
    printf("You can't vote");
   }
    */

    //! Else if Ladder statement
    if (age >120){
        printf("You are too old to vote ");
    }
    else if(age <=0){
        printf("Invalid age! ");
    }
    else if(age >= 18)
    {
        printf("You can vote");
    }
    else
    {
        printf("You can't vote");
    }

    return 0;
}