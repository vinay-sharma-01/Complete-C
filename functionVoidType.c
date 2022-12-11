#include<stdio.h>

void greet(){
    printf("Good Morning!\n");

}
void square(int a){
    int sq = a * a;
    printf("Square of %d is %d\n", a, sq);
}
void sum(int a,int b){
    int sum = a + b;
    printf("Sum is %d \n", sum);
}
int main(){
    // greet();
    // greet();
    // greet();

    // square(5);
    // square(15);

    sum(5, 5);

    return 0;
}