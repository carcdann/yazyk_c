#include <stdio.h>

int main(){

    int pint = 2;
    int ounce = 8;
    int teaSpoon = 2;
    int spoon = 3;
    float chashka;

    scanf("%f",&chashka);

    printf("Обьем в пинтах: %f pint\n",chashka * pint);
    printf("Обьем в унциях: %f ounce\n",chashka * ounce);
    printf("Обьем в столовых ложках: %f tea spoon\n",chashka * teaSpoon);
    printf("Обьем в чайных ложках: %f spoon\n",chashka * spoon);
    return 0;
}