#include<stdio.h>
int main()
{
    int Side1,Side2,Side3;
    scanf("%d %d %d",&Side1,&Side2,&Side3);
    if(Side1==Side2==Side3)
    {
        printf("Equilateral Triangle");
    }
    else if(Side1==Side2 || Side2==Side3 || Side1==Side3)
    {
        printf("Isosceles Triangle");
    }
    else if(Side1!=Side2!=Side3)
    {
        printf("Scalene Triangle");
    }
    return 0;
}
