#include <stdio.h>
#include <stdlib.h>


// function prototype declarations

float division(int x, int y);
int product(float x, int y);

// product function

int product(float x, int y){
    return x*y;
}



int main()
{
    int a,b,e;
    float c,d;
    printf("Enter values of a,b and c \n");
    scanf("%d%d%f",&a,&b,&c);
    printf("a is %d, b is %d, c is %f\n",a,b,c);
    e = product(c,b);
    d = division(a,


                 b);
    printf("Product is : %d\n",e);
    printf("\nDivision is : %f",d);

    return 0;
}

// division function

float division(int x, int y){
    float z;
    z = x/y;
    return z;
}





