// Программа two_func.c
#include <stdio.h>
void butler();
int main()
{
    printf("Я вызываю дворецкого.\n");
    butler();
    printf("Да. Принесите мне чай и записываемые DVD-диски.\n");

    return 0;
}
void butler()
{
    printf("Вы звонили, сэр?\n");
}

// Здесь мы создаем еще одну функцию butler и обязательно обьявляем её в начале, после чего расписываем её в конце, целью которой будет отыгрыш Дворецого
// В целом все тоже самое, просто появляется дополнительная функция
// сейчас может показаться простым, но позже вы все поймете)))