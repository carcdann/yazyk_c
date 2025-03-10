#include <stdio.h>

int main(){
float about = 32000.0;
double abet = 2.14e9;
long double dip = 5.32e-5;

printf("%f $f\n", about, about);
printf("%f %e\n", abet, abet);
printf("%Lf %Le\n\n", dip, dip);


printf("И его %a в шестнадцатеричной, представляющей степени 2, форме записи\n", about);
printf("%f может быть записано как %e\n", abet, abet);
printf("%Lf может быть записано как %Le\n", dip, dip);

    return 0;
}