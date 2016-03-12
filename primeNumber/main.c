#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i = 1;
    int counter = 0;
    printf("Enter a number!\n");
    scanf("%d",&x);
    while(i<=x){

        if(x%i == 0){
            counter++;
        }
        i++;
    }

    if(counter == 2)
        printf("Number is prime\n");
    else
        printf("Number is not prime\n");



    return 0;
}
