#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("Enter Principal Amount:");
   scanf("%d",&p);
   printf("Enter Number of years:");
   scanf("%d",&n);
   printf("Enter rate of interest:");
   scanf("%f",&r);
    si=p*n*r/100;
    printf("Simple Interest:%f",si);
    return 0;
}
