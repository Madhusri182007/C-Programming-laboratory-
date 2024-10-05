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
    printf("Total:%d",Total);
    printf("Average:%f",Average);
    if(Tamil,English,Maths,Science,Social >=90 && Tamil,English,Maths,Science,Social<=100)
    {
        printf("O grade");
    }
    else if(Tamil,English,Maths,Science,Social >=80 && Tamil,English,Maths,Science,Social<=91)
    {
        printf("A grade");
    }
    else if(Tamil,English,Maths,Science,Social >=70 && Tamil,English,Maths,Science,Social<=81)
    {
        printf("B grade");
    }
    else if(Tamil,English,Maths,Science,Social >=60 && Tamil,English,Maths,Science,Social<=71)
    {
        printf("C grade");
    }
    else if(Tamil,English,Maths,Science,Social >=50 && Tamil,English,Maths,Science,Social<=61)
    {
        printf("D grade");
    }
    else if(Tamil,English,Maths,Science,Social <50 && Tamil,English,Maths,Science,Social>=0)
    {
        printf("Fail");
    }
}
