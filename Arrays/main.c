#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a[4];
    int b[3] = {1,2,3};
    int c[] = {1,2,3,4,5,6};
    printf("The value of b is %u\n",b);
    printf("The value of b[0] : %d\n",*b);
    printf("The value of next b is %u\n",b+1);
    printf("The value of b[1] : %d\n",*(b+1));
    printf("The value of b[2] : %d\n",*(b+2));
   // printf("The value of b[3] : %d\n",b[3]);

    printf("The value of b[0] : %d\n",b[0]);
    //for(int i =0; i<3; ++i)
      //  printf("The value of b[%d] is %d\n",i,b[i]);

    return 0;
}
