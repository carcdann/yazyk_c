#include <stdio.h>

int main()
{
    char ch;
    printf("Введите какой-нибудь символ");
    scanf("%c", &ch);
    printf("Код символа %c равен %d\n", ch, ch);
    return 0;
}
// с помощью того, что мы указываем в принтф два типа данных, мы видим как сам символ который мы выводили, так и его однобайтовое целочисленное значение