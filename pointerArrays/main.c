#include <stdio.h>
#include <stdlib.h>

void func( int* d, int s);

int main()
{
    printf("Hello world!\n");
    int a[5] = {0,0,0,0,0};
    for(int i = 0; i<5; i++)
        printf("a[%d] is %d\n",i,a[i]);
    func(a,5);
    printf("----------------\n");
    for(int i = 0; i<5; i++)
        printf("a[%d] is %d\n",i,a[i]);

    return 0;
}

void func(int* d, int s){
    for(int i = 0; i<s; i++){for(int i = 0; i<5; i++)
        printf("a[%d] is %d\n",i,a[i]);
        *d = i+1;
        d++;
    }
}
