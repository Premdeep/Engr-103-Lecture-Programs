#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a[2]= {1,2};
    int b[2] = {1,1};
    int c[2];

    for( int i = 0; i< 2 ; i++)
        c[i] = a[i]+b[i];

    printf("[");
    for(int i = 0; i<2; i++)
        printf("%d",c[i]);

    printf("]");
    return 0;
}
