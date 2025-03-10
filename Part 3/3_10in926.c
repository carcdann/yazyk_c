#include <stdio.h>

int main()
{
    float salary;

    printf("ввод");
    printf(" $_______\b\b\b\b\b\b\b");

    scanf("%f", &salary);

    printf("\n\t$%f в месяц $%f в год", salary, salary * 12.0);
     printf("\rOro!\n");

    return 0;
}
