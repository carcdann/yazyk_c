#include <stdio.h>
#define PI 3.14159 // константа
int main()
{
    float area, circum, radius;
    printf("Каков радиус вашей пиццы?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Основные параметры вашей пиццы:\n");
    printf(" длина окружности = %1.2f, площадь = %1.2f\n", circum, area);
    return 0;
}