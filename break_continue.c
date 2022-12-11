#include <stdio.h>
int main()
{
    int i;
    // for (i = 1; i <=10; i++)
    // {
    //     printf("%d \n", i);
    //     if(i==5){
    //         break;
    //     }
    // }
    for (i = 1; i <=5; i++){
        if(i==3){
            continue;
        }
        printf("%d \n", i);
    }

    return 0;
}