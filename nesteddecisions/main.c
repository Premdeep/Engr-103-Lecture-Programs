#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a :\n");
    scanf("%d",&a);
    if(a >= 10){

        printf("a is greather than 10\n");
        if(a%2 == 0){
            printf("Even\n");
        }else{
            printf("odd\n");
        }
    }else{
        printf("number is not greather than 10\n");
        if( a %2 == 0){
            printf("Even\n");
        }else{
            printf("Odd\n");
        }
    }


    return 0;
}
