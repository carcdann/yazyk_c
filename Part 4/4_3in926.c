/* praise2.c*/
#include <stdio.h>
#include <string.h>
#define PRAISE "Вы выдающаяся личность"
int main()
{
    char name[40];

    printf("Как вас зовут?");
    scanf("%s", name);
    printf("Здравствуйте, %s. %s\n", name, PRAISE);
    printf("Ваше имя состоит из %zd символов и занимает %zd ячеек памяти.\n", strlen(name), sizeof name);
    printf("Хвалебная фраза содержит %zd символов", strlen(PRAISE)); // strlen сообщает о необходимом количестве ячеек
    printf("и занимает %zd ячеек памяти.\n", sizeof PRAISE);         // sizeof говорит о количестве занятых ячеек
    // strlen - дает точное кол-во символов в строке с пробелами и знаками
    // sizeof - дает число на единицу больше количества символов из-за учета невидимого нулевого символа
    return 0;
}