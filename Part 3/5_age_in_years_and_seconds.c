#include <stdio.h>
//#include <math.h>

int main(){

    int age;
    float seconds = 3.156 * 10000000;
   // int a = 10;
   // a = pow(a,7);
   // seconds = seconds * a;
    printf("Введите ваш возраст: ");
    scanf("%d",&age);

    printf("Ваш возраст в секундах : \n %f",age * seconds);

    return 0;
}