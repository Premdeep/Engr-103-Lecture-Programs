#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    int *j;
    int **k;
    int ***z;
    j = &x;
    k = &j;
    z = &k;
    printf("value of x is %d\n",x);
    printf("value of x is %d\n",*j);
    printf("value of x is %d\n",**k);
    printf("value of x is %d\n",***z);

    printf("address of x is %u\n",&x);

    printf("address of j is %u\n",&j);
    printf("value of j is %d\n",j);
    printf("value of k is %d\n",k);
    printf("address of k is %u\n",&k);



    return 0;
}
