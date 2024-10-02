#include<stdio.h>
int main()
{
   double Fahrenheit,Celsius;
   printf("Enter Your Fahrenheit:");
   scanf("%lf",Fahrenheit);
   Celsius=(Fahrenheit-32)*5/9;
   printf("Celsius=%.2lf",Celsius);
    return 0;
}
