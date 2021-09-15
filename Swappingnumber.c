#include<stdio.h>
int shift(int *a ,int *b, int *c);
void main()
{
    int x,y,z;

    printf("\nEnter 1st number x :");
    scanf("%d",&x);
    printf("\nEnter 2nd number y :");
    scanf("%d",&y);
    printf("\nEnter 3rd number z :");
    scanf("%d",&z);

    printf("Before swapping \n");
    printf("x = %d\n",x);
    printf("y = %d\n ",y);
    printf("z = %d",z);
    printf("\n");
    shift(&x,&y,&z);
    printf("After swapping \n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d",z);
}
int shift(int*a,int*b,int*c)
{
    int temp;
    temp=*c;
    *c=*b;
    *b=*a;
    *a=temp;
}
