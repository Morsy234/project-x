#include <stdio.h>
#include <stdlib.h>
void swap(int*a,int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    printf("Enter first number\n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);
    printf("before swapping\n");
    printf("x=%d     Y=%d\n",x,y);
    swap(&x,&y);
    printf("After swapping\n");
    printf("x=%d     Y=%d",x,y);

    return 0;
}
