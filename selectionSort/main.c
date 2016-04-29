#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {4,7,0,3,1};
    printf("Before sorting\n");
    for( int i = 0; i<5; i++)
        printf("%d\n",a[i]);

    for( int i = 0; i< 4; i++){
        for( int j = i+1; j<5; j++){
            if(a[j] < a[i]){
                int temp;
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    printf("After sorting\n");
    printf("-------\n");
    for( int i = 0; i<5; i++)
        printf("%d\n",a[i]);

    return 0;
}
