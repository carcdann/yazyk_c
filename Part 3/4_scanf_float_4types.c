#include <stdio.h>

int main(){
float a;
scanf("%f",&a);
printf("%.2f\n",a); // Запись с ограничением с двумя знаками после точки
printf("%f\n",a); // Полная запись
printf("%e\n",a); // Экспоненциальная запись
printf("%a\n",a); // Двоично-экспоненциальная запись
    return 0;
}