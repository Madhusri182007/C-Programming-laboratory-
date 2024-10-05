#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible to vote");
    }
    else if(age<=17 && age>=1)
    {
        printf("Not Eligible to vote\n");
    }
    else if(age<=0)
    {
        printf("Invalid age");
    }
    return 0;
}
