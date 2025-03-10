#include <stdio.h>
#include <math.h>
int main(){

    double water = 3.0 ;
    double a = pow(10,-23);
    water = water * a;
    int quart = 950;
    int water_scanf;
    scanf("%d",&water_scanf);
    printf("Вводимый обьем воды в квартах равен: %d\n", water_scanf * quart );
    printf("Количество молекул воды в обьеме: %e", water_scanf * water );

    return 0;
}