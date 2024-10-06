#include<stdio.h>
int main()
{
    int Tamil,English,Maths,Science,Social,Total;
    float Average;
    printf("Enter Tamil mark:");
    scanf("%d",&Tamil);
    printf("Enter English mark:");
    scanf("%d",&English);
    printf("Enter Maths mark:");
    scanf("%d",&Maths);
    printf("Enter Science mark:");
    scanf("%d",&Science);
    printf("Enter Social mark: ");
    scanf("%d",&Social);
    Total=Tamil+English+Maths+Science+Social;
    Average=Total/5;
    printf("Total:%d\n",Total);
    printf("Average:%.2f\n",Average);
     if (Tamil,English,Maths,Science,Social >=50)
    {
        printf("The Student has cleared all subject\n");
    }
    else if(Tamil,English,Maths,Science,Social <50)
    {
        printf("The student has got low marks in some subject\n");
    }
    if(Total>=490 && Total<=500)
    {
        printf("O grade");
    }
    else if(Total>=480 && Total<=489)
    {
        printf("A+ grade");
    }
    else if(Total>=470 && Total<=479)
    {
        printf(" A grade");
    }
    else if(Total>=460 && Total<=469)
    {
        printf("B+ grade");
    }
    else if(Total>=450 && Total<=459)
    {
        printf("B grade");
    }
    else if(Total<=440 && Total>=400)
    {
        printf("C+ grade");
    }
    else if(Total>400 && Total>=300)
    {
        printf("c grade");
    }
    else if(Total>300 && Total>=250)
    {
        printf("D grade");
    }
    else if (Total<250 && Total>=0)
    {
        printf("Fail");
    }
  
    return 0;
}
