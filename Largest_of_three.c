#include<stdio.h>
int main()
{
    int A,B,C;
    printf("Enter A:");
    scanf("%d",&A);
    printf("Enter B:");
    scanf("%d",&B);
    printf("Enter C:");
    scanf("%d",&C);
    if(A>B && A>C)
    {
        printf("A id big (%d)",A);
    }
    else if(B>A && B>C)
    {
        printf("Bis big (%d)",B);
    }
    else if(C>A && C>B)
    {
        printf("C is big (%d)",C);
    }
    return 0;
}
