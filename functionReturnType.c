#include<stdio.h>
#include<math.h>

int sum (int a, int b){
    return a + b;
}
int sub (int a, int b){
    return a - b;
}
int multi (int a, int b){
    return a * b;
}
int div (int a, int b){
    return a / b;
}
int main(){
    int a,b,s,diff,mul,di;
    printf("Enter two integers:\n");
    scanf("%d%d", &a, &b);
    s= sum(a, b);
    printf("%d \n", s);
    diff= sub(a, b);
    printf("%d \n", diff);
    mul= multi(a, b);
    printf("%d \n", mul);
    di= div(a, b);
    printf("%d \n", di);

    printf("%lf \n", sqrt(a)); //double cumpulsory

    return 0;
}