#include<stdio.h>
int shift(int *a ,int *b, int *c);
void main()
{
    int x=5,y=8,z=10;
    printf("Before swapping ");
    printf("x=%d",x);
    printf("y=%d",y);
    printf("z=%d",z);
    printf("\n");
    shift(&x,&y,&z);
    printf("After swapping ");
    printf("x=%d",x);
    printf("y=%d",y);
    printf("z=%d",z);
}
int shift(int*a,int*b,int*c)
{
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
}
