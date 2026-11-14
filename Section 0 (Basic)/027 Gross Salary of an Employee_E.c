 //27 Gross Salary of an Employee

 #include<stdio.h>

int main()
{
    float salary, grossSalary, netSalary, allowances;

    printf("Enter employee salary:");
    scanf("%f", &salary);

    printf("Enter Allowances:");
    scanf("%f", &allowances);

    grossSalary = salary + allowances;

    float insurance = (salary/100) * 2.0;
    float Tax = (salary/100) * 4;
    float PF = (salary/100) * 5;

    netSalary = grossSalary - (insurance + Tax + PF);

    printf("Gross salary: %f\n", grossSalary);
    printf("Net salary: %f\n", netSalary);

    return 0;
}             //NESS
