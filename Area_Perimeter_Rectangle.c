#include<stdio.h>
int main()
{
    int length,breadth,Area,Perimeter;
    printf("Enter length:");
    scanf("%d",&length);
    printf("Enter breadth:");
    scanf("%d",&breadth);
    Area=length*breadth;
    printf("Area of the Rectangle:%d\n",Area);
    Perimeter=2*(length+breadth);
    printf("Perimeter of Rectangle:%d\n",Perimeter);
    return 0;
}
