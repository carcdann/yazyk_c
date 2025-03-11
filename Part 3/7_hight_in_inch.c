#include <stdio.h>

int main()
{

    float inch = 2.54;
    float hight;

    scanf("%f", &hight);

    printf("Рост в сантметрах = %.2f cm\n в дюймах этот же рост = %.2f inch\n", hight, hight / inch);

    return 0;
}