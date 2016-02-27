#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a:\n");
    scanf("%d",&a);
    if(a > 50)
        printf("greather than 50\n");
    else if(a > 40)
        printf("greather than 40\n");
    else if( a > 30)
        printf("Greather than 30\n");
    else if (a > 20)
        printf("greather than 20\n");
    else
        printf("number is less than 20\n");

    printf("At the end of the ifelse block\n");
    printf("program terminating\n");


    return 0;
}
