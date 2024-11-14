#include <stdio.h>
#include <cs50.h>

int main() {
int salary;
float tax;

int myNum;

printf("Enter your salary: \n");

scanf("%d", &salary);

switch (salary) {

    case 0 ... 18200:
        tax = 0;
        break;
//not necessary to include these lines of code above,
//as any value less than 18200 will default to tax = 0

    case 18201 ... 45000:
        tax = (salary - 18200) * 0.16;
        break;

    case 45001 ... 135000:
        tax = (salary - 45000) * 0.3 + 4288;
        break;

    case 135001 ... 190000:
        tax = (salary - 135000) * 0.37 + 31288;
        break;

    default:
        if (salary > 190000) {
            tax = (salary - 190000) * 0.45 + 51638;
        }
        
}
    printf("The tax on your income is: $%.2f. Your salary was: $%d \n", tax,salary);
}