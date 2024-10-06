#include<stdio.h>
int main()
{
    int BasicPay;
    float Bonus,Travelallowance,Netsalary;
    printf("Enter Employee Salary:");
    scanf("%d",&BasicPay);
    if(BasicPay>=0 && BasicPay <=10000)
    {
        Bonus=BasicPay*2/100.0;
        Travelallowance=BasicPay*1/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",Travelallowance);
        Netsalary=BasicPay+Bonus+Travelallowance;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    else if(BasicPay>=10001 && BasicPay<=25000)
    {
        Bonus=BasicPay*5/100.0;
        Travelallowance=BasicPay*2/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",Travelallowance);
        Netsalary=BasicPay+Bonus+Travelallowance;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    else if(BasicPay>=25001 && BasicPay<=50000)
    {
         Bonus=BasicPay*10/100.0;
        Travelallowance=BasicPay*3/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",Travelallowance);
        Netsalary=BasicPay+Bonus+Travelallowance;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    else if(BasicPay>=50001 && BasicPay<=100000)
    {
         Bonus=BasicPay*15/100.0;
        Travelallowance=BasicPay*5/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",Travelallowance);
        Netsalary=BasicPay+Bonus+Travelallowance;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    else if(BasicPay>100000)
    {
        Bonus=BasicPay*20/100.0;
        Travelallowance=BasicPay*5/100.0;
        printf("Bonus:%.2f\n",Bonus);
        printf("Travelallowances:%.2f\n",Travelallowance);
        Netsalary=BasicPay+Bonus+Travelallowance;
        printf("Net Salary:%.2f\n",Netsalary);
    }
    return 0;
}
